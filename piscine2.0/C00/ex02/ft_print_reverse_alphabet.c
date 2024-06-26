/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/04 00:23:01 by votre_nom          #+#    #+#            */
/*   Updated: 2024/06/04 00:23:01 by votre_nom         ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
  write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

int main()
{
  ft_print_reverse_alphabet();
}