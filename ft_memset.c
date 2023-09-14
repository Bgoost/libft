/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:40:07 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/14 19:27:18 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		*ptr = (unsigned char)c;
		i++;
		ptr++;
	}
	return (b);
}
/*
int main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    
	ft_memset(str + 13, '8', 8*sizeof(char));
	//memset(str + 13, '8', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}
*/
