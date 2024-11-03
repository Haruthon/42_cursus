/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: harufuji <harufuji@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/03 18:51:42 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/03 18:51:42 by harufuji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	copy = (char *)malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s, len + 1);
	return (copy);
}
