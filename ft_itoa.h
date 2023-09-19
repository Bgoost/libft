/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:10:15 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/19 15:54:54 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(int n)
{
	int	i;

	i = 0;
	if(n <= 0)
	    i = 1;
	while (n)
	{
	    n /= 10;
	    ++i;
	}
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;

	c = (unsigned char *)s;
	while (n != 0)
	{
		*c = '\0';
		c++;
		n--;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (0);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}

char    *ft_itoa(int n)
{
    char    *str;
    int     len;

    len = ft_strlen(n);
    str = ft_calloc((len + 1), sizeof(char));
    if(!str)
        return 0;
    if(n == 0)
        str[0] = '0';
    //printf("c");
    if (n < 0)
    {
        printf("menor a 0: %s, num len; %i\n", str, len);
        str[0] = '-';
        if (n == -2147483648)
        {
            str[--len] = '8';
            n /= 10;
            printf("-21 blah blah: %s, num len; %i\n", str, len);
            
        }
        n *= -1;
    }
    //printf("f");
    while (len-- && n != 0)
    {
        printf("mayor o igual a 10 (antes): %s, num len; %i\n", str, len);
        str[len] = (n % 10) + '0';
        printf("mayor o igual a 10 (despues): %s, num len; %i\n", str, len);
        n /= 10;
    }
    printf("resultado: %s, num len; %i\n", str, len);
    return str;
}

int main()
{
	printf("%s\n", ft_itoa(-23));
	return 0;
}
