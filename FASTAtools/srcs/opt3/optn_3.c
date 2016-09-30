/*
** optn_3.c for optn_3 in /home/khoual_s/rendu/Synthese/FASTAtools/srcs/opt3
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 20 23:36:36 2016 Khoualdia Sabri
** Last update Tue Jun 21 00:18:13 2016 Khoualdia Sabri
*/

#include "fastatools.h"

int	optn_3(char *str)
{
  char	**tab;
  char	**seq;

  tab = create_id(str);
  seq = replace_rna(create_seq(str));
  show_tab(tab, seq);
  return (0);
}
