/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harufuji <harufuji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:59:15 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/03 20:30:00 by harufuji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	while (n > 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}
int	check_digit(int size)
{
	int	digit;

	digit = 1;
	while (size--)
		digit *= 10;
	return (digit / 10);
}

char	*ft_itoa(int n)
{
	int		size;
	int		save;
	char	*result;
	size_t	index;

	size = check_size(n);
	result = (char *)malloc(size + 1);
	save = n;
	index = 0;
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
		index++;
	}
	while (size)
	{
		result[index] = save / check_digit(size) + '0';
		save = save % check_digit(size);
		index++;
		size--;
	}
	result[index] = '\0';
	return (result);
}
