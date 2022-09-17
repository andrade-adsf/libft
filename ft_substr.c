/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feandrad <feandrad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 04:37:50 by feandrad          #+#    #+#             */
/*   Updated: 2022/09/17 04:49:01 by feandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = malloc(sizeof(char) * ft_strlen(s));
	while (len > 0)
	{
		len--;
		result[len] = s[len];
	}
	return (result);
}
