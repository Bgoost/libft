/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:00:15 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/20 18:56:40 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	word_count(const char *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while(s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}

	return (words);
}

void	free_words(char	***words, size_t word_count)
{
	size_t	i;

	i = 0;
	while (i < word_count)
	{
		free((*words)[i]);
		i++;
	}
	free(*words);
	words = 0;
}

void	copy_words(char const *s, char c, char ***words, size_t word_count)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	start = 0;
	while (i < word_count)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
			j++;
		(*words)[i] = ft_substr(s, start, j - start);
		if (!(*words)[i])
		{
			free_words(words, word_count);
			return ;
		}
		i++;
	}
	(*words)[i] = 0;
}


char	**ft_split(char const *s, char c)
{
	size_t	word;
	char	**split;

	word = word_count(s, c);
	split = malloc((word + 1) * sizeof(char *));
	if (!split)
		return (0);
	copy_words(s, c, &split, word);
	return (split);
}
