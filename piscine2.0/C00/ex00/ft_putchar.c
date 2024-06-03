/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: RaphyStoll <raphystoll@zenithiac.ch>        +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+    +#+          */
/*   Created: 2024/06/04 00:24:02 by votre_nom          #+#    #+#            */
/*   Updated: 2024/06/04 00:24:02 by votre_nom         ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"
#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1)
}

/*int main(int argc, char *argv[])
{
  ft_putchar(*argv[1]);
}*/
