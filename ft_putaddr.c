/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:40:40 by grobert           #+#    #+#             */
/*   Updated: 2022/12/07 13:03:01 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddr_hex(unsigned long int nbr, char Xx, int *len)
{
	unsigned long int	base_len;
	char				*base;

	base_len = 16;
	if (Xx == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < base_len)
		ft_putchar(base[nbr % base_len], len);
	else
	{
		ft_putaddr_hex(nbr / base_len, Xx, len);
		ft_putaddr_hex(nbr % base_len, Xx, len);
	}
}

void	ft_putaddr(void *addr, int *len)
{
	unsigned long int	ptr;

	ptr = (unsigned long int)addr;
	ft_putstr("0x", len);
	ft_putaddr_hex(ptr, 'x', len);
}
