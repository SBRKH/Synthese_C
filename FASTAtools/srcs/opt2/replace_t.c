/*
** replace_t.c for replace_t in /home/khoual_s/rendu/Synthese/FASTAtools/srcs/opt2
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 20 12:05:22 2016 Khoualdia Sabri
** Last update Tue Jun 21 00:21:57 2016 Khoualdia Sabri
*/

#include "fastatools.h"

char	**replace_t(char **tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i])
    {
      while (tab[i][j])
	{
	  if (tab[i][j] == 'T')
	    tab[i][j] = 'U';
	  j++;
	}
      j = 0;
      i++;
    }
  return (tab);
}
