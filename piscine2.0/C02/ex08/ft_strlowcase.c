/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/06 15:22:49 by RaphyStoll         #+#    #+#            */
/*   Updated: 2024/06/06 15:22:49 by RaphyStoll         ###   ########.fr     */
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

char *ft_strlowcase(char *str)
{
  int count = 0;
  while (str[count])
  {
    if (str[count] >= 'A' && str[count] <= 'Z')
      str[count] += 32;
    count++;
  }
  printf("apres : %s\n", str);
  return str;
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    printf("Erreur Usage: %s argv[1]", argv[0]);
    return 0;
  }
  printf("Avant : %s\n", argv[1]);
  ft_strlowcase(argv[1]);
}