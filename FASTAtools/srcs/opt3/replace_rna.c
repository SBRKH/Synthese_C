/*
** replace_rna.c for replace_rna in /home/khoual_s/rendu/Synthese/FASTAtools/srcs/opt3
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 20 12:13:02 2016 Khoualdia Sabri
** Last update Tue Jun 21 15:48:48 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fastatools.h"

char	**replace_rna(char **tab)
{
  int	i;
  int	j;
  char	*tmp;

  i = 0;
  j = 0;
  while (tab[i])
    {
      tmp = my_revstr(tab[i]);
      while (tab[i][j])
	{
	  if (tmp[j] == 'A')
	    tab[i][j] = 'T';
	  else if (tmp[j] == 'G')
	    tab[i][j] = 'C';
	  else if (tmp[j] == 'T')
	    tab[i][j] = 'A';
	  else if (tmp[j] == 'C')
	    tab[i][j] = 'G';
	  else if (tmp[j] == 'N')
	    tab[i][j] = 'N';
	  j++;
	}
      j = 0;
      i++;
    }
  return (tab);
}
