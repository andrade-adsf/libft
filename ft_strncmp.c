/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:44:58 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/09 23:52:41 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s2count
		!= '\0' && s1[count] == s2[count] && count <= n)
		count++;
	return ((s1[count] - s2[count]));
}
