/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/06 13:22:43 by RaphyStoll         #+#    #+#            */
/*   Updated: 2024/06/06 13:22:43 by RaphyStoll         ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

// Ma Métodes
//  *sert a nomer mes variables ou toutes autre info importante
//   ! mise en evidence (quelque chose qui doit sauter aux yeux t1)
//   ? explication
//   Todo Sert a représenté ce qu'il reste a faire ou a finir

// #include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_str_is_lowercase(char *str)
{
  int count = 0;
  while (str[count])
  {
    if (str[count] >= 'a' && str[count] <= 'z')
    {
      count++;
    }
    else
    {
      return 0;
    }
  }

  return 1;
}

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    printf("erreur usage : %s argv[1]", argv[0]);
    return 0;
  }
  int result = ft_str_is_lowercase(argv[1]);
  printf("Result : %d\n", result);
  return 0;
}