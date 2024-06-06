/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/05 12:51:59 by votre_nom          #+#    #+#            */
/*   Updated: 2024/06/05 12:51:59 by votre_nom         ###   ########.fr      */
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

char *ft_strcpy(char *dest, char *src)
{
  int count = 0;
  while (src[count] != '\0')
  {
    dest[count] = src[count];
    count++;
  }
  dest[count] = '\0';

  return dest;
}
int main()
{
  char a[] = "Vide";
  char b[] = "Plein de bonne choses";
  printf("_____avant______\ndest : %s\nsrc : %s\n\n", a, b);
  ft_strcpy(a, b);
  printf("_____après______\ndest : %s\nsrc : %s\n", a, b);
}