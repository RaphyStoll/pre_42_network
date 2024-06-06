/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/06 12:45:58 by RaphyStoll         #+#    #+#            */
/*   Updated: 2024/06/06 12:45:58 by RaphyStoll         ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

// Ma Métodes
//  *sert a nommer mes variables ou toutes autre info importante
//   ! mise en evidence (quelque chose qui doit sauter aux yeux t1)
//   ? explication
//   Todo Sert a représenté ce qu'il reste a faire ou a finir

// #include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//  *i = count
int ft_str_is_alpha(char *str)
{
  int i = 0;

  while (str[i])
  {
    if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z'))
      i++;
    else
    {
      printf("return 0");
      return 0;
    }
  }
  printf("return 1");
  return 1;
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    printf("erreur usage : %s argv[1]", argv[0]);
  }
  ft_str_is_alpha(argv[1]);
}