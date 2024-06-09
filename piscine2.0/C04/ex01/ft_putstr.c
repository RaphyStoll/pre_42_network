/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/09 18:19:15 by RaphyStoll         #+#    #+#            */
/*   Updated: 2024/06/09 18:19:15 by RaphyStoll         ###   ########.fr     */
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

void ft_putstr(char *str)
{
  int count = 0;
  char number = count + '0';
  while (str[count])
  {
    write(1, &number, 1);
    write(1, ".", 1);
    write(1, " ", 1);
    write(1, &str[count], 1);
    write(1, "\n", 1);
    count++;
    number++;
  }
}

int main(int argc, char **argv)
{
  if (argc != 2)
    return 1;
  ft_putstr(argv[1]);
}