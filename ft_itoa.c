/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 23:48:25 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/23 00:45:49 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		count;
	char	result;
	
	count = intlen(n) + 1;
	result = malloc((sizeof(char) * count));
	result[count] = '\0';
	count--;
	while(count > 0)
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
	int count;
	
	count = 1;
	if (n > 9)
	{
		while (n_tocount > 9)
		{
			count++;
			n_tocount /= 10;
		}
	}
	else if (n < 0)
	{
		while (n_tocount < -9)
		{
			count++;
			n_tocount /= 10;
		}
		count++;
	}
	return (count);
}