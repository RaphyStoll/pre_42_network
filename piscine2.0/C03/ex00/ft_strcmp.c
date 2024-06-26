/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/09 17:44:11 by RaphyStoll         #+#    #+#            */
/*   Updated: 2024/06/09 17:44:11 by RaphyStoll         ###   ########.fr     */
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

int ft_strcmp(char *s1, char *s2)
{
  int count = 0;
  while (s1[count] || s2[count])
  {
    if (s1[count] != s2[count])
      return (s1[count] - s2[count]);
    count++;
  }
  return 0;
}

int main(int argc, char **argv)
{
  if (argc != 3)
  {
    printf("erreur Usage: %s argv[1] argv[2]", argv[0]);
    return 1;
  }
  int result = ft_strcmp(argv[1], argv[2]);
  printf("Result: %d\n", result);
}