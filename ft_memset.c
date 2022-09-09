/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:44:52 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/09 23:56:42 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	int	count;

	count = 0;
	while (count <= n)
	{
		s[count] = c;
		count ++;
	}
	return ((char *)&s);
}
