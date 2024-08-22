/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmart3 <lucmart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:07:19 by lucmart3          #+#    #+#             */
/*   Updated: 2024/05/17 05:10:33 by lucmart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrf(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		count += ft_putcharf('-');
		count += ft_putcharf('2');
		count += ft_putnbrf(147483648);
	}
	else if (nb < 0)
	{
		count += ft_putcharf('-');
		nb = -nb;
		count += ft_putnbrf(nb);
	}
	else if (nb > 9)
	{
		count += ft_putnbrf(nb / 10);
		count += ft_putnbrf(nb % 10);
	}
	else
	{
		count += ft_putcharf(nb + '0');
	}
	return (count);
}
