/*
** optn_5.c for optn5 in /home/khoual_s/rendu/Synthese/FASTAtools/srcs/opt5
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Tue Jun 21 10:37:08 2016 Khoualdia Sabri
** Last update Tue Jun 21 22:36:54 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fastatools.h"

int	my_strarraylen(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}

int	optn_5(char *str)
{
  char	**seq;
  char	**tab;

  tab = create_seq(str);
  seq = search(tab);
  aff_tab(seq);
  return (0);
}
