/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmart3 <lucmart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 21:13:57 by lucmart3          #+#    #+#             */
/*   Updated: 2024/05/17 05:12:20 by lucmart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrf(char *s)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (s == NULL)
		return (ft_putstrf("(null)"));
	while (s[i] != '\0')
	{
		count += ft_putcharf(s[i]);
		i++;
	}
	return (count);
}
