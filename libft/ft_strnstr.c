/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: harufuji <harufuji@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/03 18:46:35 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/03 18:46:35 by harufuji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	if(!big || !little)
		return NULL;
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
