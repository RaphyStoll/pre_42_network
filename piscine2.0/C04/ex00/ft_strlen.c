/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/09 18:12:11 by RaphyStoll         #+#    #+#            */
/*   Updated: 2024/06/09 18:12:11 by RaphyStoll         ###   ########.fr     */
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

int ft_strlen(char *str)
{
  int count = 0;
  while (str[count])
    count++;
  return count;
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    printf("Erreur Usage: %s argv[1]", argv[0]);
    return 1;
  }
  int result = ft_strlen(argv[1]);
  printf("Nombre de caractère : %d", result);
  return 0;
}