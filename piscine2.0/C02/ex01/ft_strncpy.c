/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/05 17:41:24 by votre_nom          #+#    #+#            */
/*   Updated: 2024/06/05 17:41:24 by votre_nom         ###   ########.fr      */
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

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  unsigned int count = 0;

  while (count < n && src[count] != '\0')
  {
    dest[count] = src[count];
    count++;
  }
  if (count < n)
  {
    dest[count] = '\0';
    count++;
  }
  return dest;
}

int main()
{
  char a[20] = "vide";
  char b[] = "Plein de bonne choses";
  printf("_____avant______\ndest : %s\nsrc : %s\n", a, b);
  ft_strncpy(a, b, 6);
  printf("_____après______\ndest : %s\nsrc : %s\n", a, b);
}