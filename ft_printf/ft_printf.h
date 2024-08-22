/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucmart3 <lucmart3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 07:47:52 by lucmart3          #+#    #+#             */
/*   Updated: 2024/05/17 04:55:26 by lucmart3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putcharf(char c);
int	ft_putstrf(char *s);
int	ft_putnbrf(int nb);
int	ft_numhex(unsigned long long nb, char c);
int	ft_nosigne(unsigned int n);
int	ft_pointer(intptr_t ptr);

int	ft_printf(char const *str, ...);

#endif