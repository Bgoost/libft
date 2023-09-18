/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:58:44 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/18 18:43:52 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		is_in(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	n;

	s2 = (char *)malloc(ft_strlen(s1 + 1) * sizeof(char));
	i = 0;
	n = 0;
	if(!s2)
		return (0);
	while(s1[i] != '\0')
	{
		if(is_in(set, s1[i]))
			i++;
		else
		{
			s2[n] = s1[i];
			i++;
			n++;
		}
	}
	s2[i] = '\0';
	return (s2);

}
/*
int main()
{
	const char s1[] = "ababc";
	const char set[] = "abc";
	printf("%s\n", ft_strtrim(s1, set));
	return 0;
}
*/
