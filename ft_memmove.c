/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:56:30 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/16 15:24:24 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (src > dst)
	{
		while (i < len && (src != 0 || dst != 0))
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (len > 0 && (src != 0 || dst != 0))
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
/*
int main()
{
	char str1[] = "Hsfdfdsola"; // Array of size 100
	char str2[] = "Adios"; // Array of size 100
	char dst[] = "aaaaaa"; // Array of size 100
    char src[] = "bbb"; // Array of size 5

    puts("str1 before memmove original ");
    puts(str1);

   // Copies contents of str2 to sr1 
    memmove(str1, str2, 2);
    puts("str1 after memmove original");
    puts(str1);
	
    puts("\nstr3 before memmove ");
    puts(dst);

    // Copies contents of str2 to sr1
    ft_memmove(dst, src, 2);
    puts("str3 after memmove");
	puts(dst);

    return 0;
}
*/
