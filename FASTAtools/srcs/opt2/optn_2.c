/*
** optn_2.c for optn_2 in /home/khoual_s/rendu/Synthese/FASTAtools/srcs/opt2
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 20 23:37:18 2016 Khoualdia Sabri
** Last update Tue Jun 21 00:16:35 2016 Khoualdia Sabri
*/

#include <stdio.h>
#include "fastatools.h"

void	aff_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      printf("%s\n", tab[i]);
      i++;
    }
}

int	optn_2(char *str)
{
  char	**seq;
  char	**tab;

  tab = create_id(str);
  seq = replace_t(create_seq(str));
  show_tab(tab, seq);
  return (0);
}
