/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/04 22:05:10 by votre_nom          #+#    #+#            */
/*   Updated: 2024/06/04 22:05:10 by votre_nom         ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

// Ma Métode
//  *sert a nomer mes variables ou toutes autre info importante
//   ! mise en evidence (quelque chose qui doit sauter aux yeux t1)
//   ? explication
//   Todo Sert a représenté ce qu'il reste a faire ou a finir

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
  int count = -1;
  while (count++, str[count])
  {
    write(1, &str[count], 1);
  }
  return;
}

int main(int argc, char **argv)
{
  if (argc = !2)
  {
    printf("erreur usage: %s argv[1]\n", argv[0]);
  }
  ft_putstr(argv[1]);
}