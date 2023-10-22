/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoursou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 04:21:58 by asoursou          #+#    #+#             */
/*   Updated: 2019/07/17 14:42:52 by asoursou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef enum	e_op
{
	op_sum,
	op_sub,
	op_div,
	op_mul,
	op_mod,
	op_null,
}				t_op;

void	ft_sum(int a, int b);

void	ft_sub(int a, int b);

void	ft_div(int a, int b);

void	ft_mul(int a, int b);

void	ft_mod(int a, int b);

int		ft_atoi(char *str);

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_strlen(char *str);

#endif
