/*
** mul_3.c for mul_3 in /home/khoual_s/rendu/Synthese/FASTAtools/srcs/opt5
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Tue Jun 21 17:01:31 2016 Khoualdia Sabri
** Last update Tue Jun 21 17:43:11 2016 Khoualdia Sabri
*/

#include <stdio.h>
#include <stdlib.h>
#include "fastatools.h"

int     my_pow(int nb, int pow)
{
  if (pow > 0)
    return (my_pow(nb, pow - 1) * nb);
  else if (pow == 0)
    return (1);
  else if (pow < 0)
    return (0);
  return (0);
}

int     cnt_nb(int nb)
{
  int   i;

  i = 1;
  while (my_pow(10, i) < nb)
    i++;
  return (i);
}

int     mul_3(int idx)
{
  int   i;
  char  *str;
  int   nb;

  i = 0;
  nb = 0;
  if ((str = malloc(sizeof(char) * (cnt_nb(idx) + 1))) == NULL)
    return (-1);
  sprintf(str, "%d", idx);
  while (str[i])
    {
      nb = nb + (str[i] - 48);
      i++;
    }
  if (nb == 3 || nb == 6 || nb == 9)
    return (0);
  return (1);
}
