/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:52:28 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/16 18:14:43 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = (char *)s;
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (0);
	if ((int)start >= ft_strlen(s) || s == 0)
		return ("");
	while (s[i] != '\0' && i < len)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int main()
{
    char source[] = "GeeksForGeeks";
	unsigned int i = 3;
	size_t n = 10;

    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char *target2 = ft_substr(source, i, n);

    printf("%s\n", target2);
    return 0;
}
*/
