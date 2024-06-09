/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/09 18:29:54 by RaphyStoll         #+#    #+#            */
/*   Updated: 2024/06/09 18:29:54 by RaphyStoll         ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

// Ma Métodes
//  *sert à nommer mes variables ou toutes autres informations importantes
//   ! mise en évidence
//   ? explication
//   Todo Sert à représenter ce qu'il reste à faire ou à finir

// #include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char number)
{
  write(1, &number, 1);
}
void ft_putnbr(int nb)
{
  if (nb == -2147483648)
  {
    write(1, "-2147483648", 12);
    return;
  }
  if (nb < 0)
  {
    ft_putchar('-');
    nb -= nb;
  }
  if (nb >= 10)
  {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  }
  else
    ft_putchar(nb + '0');
}

int main(int argc, char **argv)
{
  (void)argc;
  int number = atoi(argv[1]);
  ft_putnbr(number);
  return 0;
}