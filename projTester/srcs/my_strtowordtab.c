/*
** my_strtowordtab.c for my_strtowordtab in /home/khoual_s/rendu/Synthese/projTester/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 22 15:10:24 2016 Khoualdia Sabri
** Last update Sat Jun 25 15:32:41 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include "projtester.h"

int	cnt_word(char *str, char delim)
{
  int	i;
  int	cnt;

  i = 0;
  cnt = 0;
  while (str[i])
    {
      if (str[i] == delim)
	cnt++;
      i++;
    }
  if (str[0] != delim)
    cnt++;
  return (cnt);
}

char    **my_strtowordtab(char *array, char delim)
{
  char	**tab;
  int   i;
  int   m;
  int	l;

  i = 0;
  m = 0;
  l = 0;
  if ((tab = malloc(sizeof(char *) * (cnt_word(array, delim) + 1))) == NULL)
    return (NULL);
  while (l < cnt_word(array, delim))
    {
      if ((tab[l] = malloc(sizeof(char) + my_strlen(array))) == NULL)
	return (NULL);
      while (array[i] == delim)
        i++;
      while (array[i] != delim && array[i])
	tab[l][m++] = array[i++];
      tab[l][m] = '\0';
      m = 0;
      l++;
      i++;
    }
  tab[l] = NULL;
  return (tab);
}
