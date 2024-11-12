/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: harufuji <harufuji@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/11/03 17:32:39 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/03 17:32:39 by harufuji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (check_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (check_set(s1[end - 1], set))
		end--;
	if (end < start)
		return (ft_strdup(""));
	result = (char *)malloc(end - start + 1);
	i = 0;
	while (start < end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
