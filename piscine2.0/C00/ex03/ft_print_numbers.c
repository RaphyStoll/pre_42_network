/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/04 00:23:10 by votre_nom          #+#    #+#            */
/*   Updated: 2024/06/04 00:23:10 by votre_nom         ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_print_numbers(void)
{
  write(1, "0123456789", 10);
}

int main()
{
  ft_print_numbers();
}
