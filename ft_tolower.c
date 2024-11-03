/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: harufuji <harufuji@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/11/03 18:26:02 by harufuji          #+#    #+#             */
/*   Updated: 2024/11/03 18:26:02 by harufuji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}
