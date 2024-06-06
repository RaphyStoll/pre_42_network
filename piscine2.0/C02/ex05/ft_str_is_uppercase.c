/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/06 14:42:23 by RaphyStoll         #+#    #+#            */
/*   Updated: 2024/06/06 14:42:23 by RaphyStoll         ###   ########.fr     */
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

int ft_str_is_uppercase(char *str)
{
  int count = 0;

  while (str[count])
  {
    if (str[count] >= 'A' && str[count] <= 'Z')
      count++;
    else
      return 0;
  }
  return 1;
}

int main(int argc, char **argv)
{
  if (argc != 2)
    printf("erreur Usage : %s argv[1]", argv[0]);
  int result = ft_str_is_uppercase(argv[1]);
  printf("Result : %d", result);
}
