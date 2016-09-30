/*
** id.c for id in /home/khoual_s/rendu/Synthese/FASTAtools/srcs/opt1
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 20 23:01:40 2016 Khoualdia Sabri
** Last update Tue Jun 21 00:03:45 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include <unistd.h>
#include "fastatools.h"

int	how_chev(char *str)
{
  int	i;
  int	cnt;

  i = 0;
  cnt = 0;
  while (str[i])
    {
      if (str[i] == '>')
	cnt++;
      i++;
    }
  return (cnt);
}

int	strlen_id(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n' && str[i])
    i++;
  return (i);
}

char	**create_id(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  if ((tab = malloc(sizeof(char *) * (how_chev(str) + 1))) == NULL)
    return (NULL);
  while (str[i])
    {
      if ((tab[j] = malloc(sizeof(char) * (strlen_id(str) + 1))) == NULL)
	return (NULL);
      if (str[i] == '>')
	{
	  k = 0;
	  while (str[i] != '\n' && str[i])
	    tab[j][k++] = str[i++];
	  tab[j][k] = '\0';
	  j++;
	}
      i++;
    }
  tab[j] = NULL;
  return (tab);
}
