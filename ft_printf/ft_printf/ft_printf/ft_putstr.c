/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeck <wbeck@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:22:58 by wbeck             #+#    #+#             */
/*   Updated: 2021/10/20 01:22:23 by wbeck            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len, int size)
{
	int	i;

	i = 0;
	while (s[i] && i < size)
	{
		ft_putchar(s[i], len);
		i++;
	}
}
