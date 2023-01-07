/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:13:56 by feandrad          #+#    #+#             */
/*   Updated: 2023/01/07 00:14:34 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define BASEUP "0123456789ABCDEF"
#define BASELOW "0123456789abcdef"

static size_t	intlen(unsigned int nb);

char	ft_printhex(unsigned int nbr, int flag)
{
    char    *result;
    size_t  digits;
    char    *base_str;

    base_str = (char *)malloc(16 + 1);
    if (flag == 'x')
        base_str = BASEUP;
    else if (flag == 'X')
        base_str = BASELOW;
    digits = intlen(nbr);
    result = (char *)malloc(digits + 1);
    if (!result)
		return (0);
	result[digits--] = '\0';
    while (nbr > 0)
	{
		result[digits--] = base_str[nbr % 16];
		nbr /= 16;
	}
	if (digits == 0 && result[1] == '\0')
		result[0] = '0';
    return (result);
}

static size_t	intlen(unsigned int nb)
{
	size_t	count;

	count = 1;
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return (count);
}