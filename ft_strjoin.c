/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:33:38 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/18 16:59:54 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sfin;
	int		i;
	int		n;

	sfin = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	n = 0;
	if (!sfin)
		return (0);
	while (s1[i] != '\0')
	{
		sfin[i] = s1[i];
		i++;
	}
	while (s2[n] != '\0')
	{
		sfin[i] = s2[n];
		i++;
		n++;
	}
	sfin[i] = '\0';
	return (sfin);
}
/*
int main()
{
	char const s1[] = "";
	char const s2[] = "que tal";

	printf("%s", ft_strjoin(s1, s2));

	return 0;


}
*/
