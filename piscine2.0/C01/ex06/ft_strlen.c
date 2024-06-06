/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/04 22:30:06 by votre_nom          #+#    #+#            */
/*   Updated: 2024/06/04 22:30:06 by votre_nom         ###   ########.fr      */
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

int ft_strlen(char *str)
{
  int count = -1;
  while (count++, str[count])
    write(1, &str[count], 1);
  return count;
}

int main()
{
  char *a = "bonzour les naze\n";
  int longeur = ft_strlen(a);
  printf("longeur %d\n", longeur);
}