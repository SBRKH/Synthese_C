/*
** optn_1.c for optn_1 in /home/khoual_s/rendu/Synthese/FASTAtools/srcs/opt1
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 20 23:33:25 2016 Khoualdia Sabri
** Last update Tue Jun 21 00:05:56 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include "fastatools.h"

int	optn_1(char *str)
{
  char	**id;
  char	**seq;

  id = create_id(str);
  seq = create_seq(str);
  free(str);
  show_tab(id, seq);
  return (0);
}
