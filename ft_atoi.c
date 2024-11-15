/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: harufuji <harufuji@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/11/15 14:38:15 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/15 14:38:15 by harufuji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overflow(int sign, unsigned long result,
		unsigned long before)
{
	unsigned long	limit;

	if (sign > 0)
		limit = (unsigned long)LONG_MAX;
	else
		limit = (unsigned long)LONG_MAX + 1;
	return (limit / 10 < result || limit - result * 10 < before);
}

static int	parse_sign(const char **str)
{
	if (**str == '-')
	{
		(*str)++;
		return (-1);
	}
	if (**str == '+')
		(*str)++;
	return (1);
}

int	ft_atoi(const char *nptr)
{
	unsigned long	result;
	int				sign;

	result = 0;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	sign = parse_sign(&nptr);
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (check_overflow(sign, result, *nptr - '0'))
		{
			if (sign > 0)
				return ((int)LONG_MAX);
			return ((int)LONG_MIN);
		}
		result = result * 10 + (*nptr++ - '0');
	}
	return ((int)(result * sign));
}
