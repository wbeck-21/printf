/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeck <wbeck@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:22:54 by wbeck             #+#    #+#             */
/*   Updated: 2021/11/13 14:06:52 by wbeck            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, int *len)
{
	// if (n < 0)
	// 	n *= -1;
	if (n > 9)
		ft_putnbr_u(n / 10, len);
	ft_putchar(n % 10 + '0', len);
}
