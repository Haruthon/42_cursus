/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: harufuji <harufuji@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/03 18:30:44 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/03 18:30:44 by harufuji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*save;

	while (*s)
	{
		if (*s == (char)c)
			save = (char *)s;
		s++;
	}
	if ((char *)save)
		return ((char *)save);
	else
		return (NULL);
}
