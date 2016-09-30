/*
** search.c for search in /home/khoual_s/rendu/Synthese/FASTAtools/srcs/opt5
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Tue Jun 21 10:48:12 2016 Khoualdia Sabri
** Last update Tue Jun 21 22:38:05 2016 Khoualdia Sabri
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fastatools.h"

char	**search(char **tab)
{
  char	**tab_modif;
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  if ((tab_modif = malloc(sizeof(char*) * (my_strarraylen(tab) + 1))) == NULL)
    return (NULL);
  while (tab[i])
    {
      if ((tab_modif[j] = malloc(sizeof(char) * (my_strlen(tab[i]) + 1))) == NULL)
	return (NULL);
      while ((tab[i][k] != 'A' || tab[i][k + 1] != 'T' || tab[i][k + 2] != 'G') && tab[i][k])
	k++;
      tab_modif[j] = strdup(&tab[i][k]);
      i++;
      j++;
      k = 0;
    }
  tab_modif[j] = NULL;
  return (tab_modif);
}
