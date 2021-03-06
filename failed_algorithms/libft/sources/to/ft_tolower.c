/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisantos <tisantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 23:05:56 by marvin            #+#    #+#             */
/*   Updated: 2021/05/23 04:43:17 by tisantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_tolower(int c)
{
	int	re;

	if (c < -1)
		return ((unsigned char)c);
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		re = c;
	return (re);
}
