/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaswell <ccaswell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:41:35 by ccaswell          #+#    #+#             */
/*   Updated: 2021/10/26 16:21:01 by ccaswell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	char	c;

	c = '\n';
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, &c, 1);
	}
}
