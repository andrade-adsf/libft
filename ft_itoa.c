/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 23:48:25 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/25 22:50:44 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	intlen(int n);

char	*ft_itoa(int n)
{
	int		count;
	char	*result;

	count = intlen(n) + 1;
	result = (char *) ft_calloc(count, sizeof(char));
	result[count] = '\0';
	count--;
	while (count > 0)
	{
		result[count] = n % 10;
		count--;
		if (n > -10)
			result[count] = '-';
		n /= 10;
	}
	return (result);
}

int	intlen(int n)
{
	int	count;

	count = 1;
	if (n > 9)
	{
		while (n > 9)
		{
			count++;
			n /= 10;
		}
	}
	else if (n < 0)
	{
		while (n < -9)
		{
			count++;
			n /= 10;
		}
		count++;
	}
	return (count);
}
