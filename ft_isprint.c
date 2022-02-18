/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:44:12 by ccaswell          #+#    #+#             */
/*   Updated: 2021/10/20 13:44:32 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_isprint(int c)
{
	if ((c >= 040) && (c <= 0176))
		return (1);
	return (0);
}
