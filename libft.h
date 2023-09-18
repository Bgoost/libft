/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:58:05 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/18 18:22:36 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

//void	*ft_memset(void *b, int c, size_t len);
//void	*ft_memcpy(void *dst, const void *src, size_t n);
//void	*ft_memchr(const void *s, int c, size_t n);
//void	*ft_memmove(void *dst, const void *src, size_t n);
//void	*ft_calloc(size_t count, size_t size);
//void	ft_bzero(void *s, size_t n);
//char	*ft_strchr(const char *s, int c);
//char	*ft_strrchr(const char *s, int c);
//char	*ft_strnstr(const char *h, const char *n, size_t len);
//char	*ft_substr(char const *s, unsigned int start, size_t len);
//char	*ft_strjoin(char const *s1, char const *s2);
//char	*ft_strdup(const char *s1);
char	*ft_strtrim(char const *s1, char const *set);
//int		ft_isalnum(int c);
//int		ft_isalpha(int c);
//int		ft_isascii(int c);
//int		ft_isdigit(int c);
//int		ft_isprint(int c);
//int		ft_tolower(int c);
//int		ft_toupper(int c);
//int		ft_strncmp(const char *s1, const char *s2, size_t n);
//int		ft_memcmp(const char *s1, const char *s2, size_t n);
//int		ft_atoi(char *str);
size_t	ft_strlen(const char *s);
//size_t	ft_strlcat(char *dest, char *src, size_t size);
//size_t	ft_strlcpy(char *dest, char *src, size_t size);

#endif
