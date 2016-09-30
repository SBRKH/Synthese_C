/*
** parse_file2.c for parse_file2 in /home/khoual_s/rendu/Synthese/SBMLparser
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Tue Jun 14 10:40:18 2016 Khoualdia Sabri
** Last update Wed Jun 15 18:19:01 2016 Khoualdia Sabri
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"
#include "sbmlparser.h"

char	**check_double(char **tab)
{
  char	**first;
  char	**second;
  char	**stock;
  int	i;
  int	j;

  i = 0;
  j = 0;
  if ((stock = malloc(sizeof(char *) * (strarraylen(tab) + 1))) == NULL)
    return (NULL);
  while (i != strarraylen(tab))
    {
      first = my_strtowordtab_synthesis(tab[i]);
      if (tab[i + 1])
	second = my_strtowordtab_synthesis(tab[i + 1]);
      if (my_strcmp(first[0], second[0]) != 0)
      	{
      	  stock[j] = my_strdup(tab[i]);
      	  free(first[j]);
      	  free(second[j]);
	  j++;
      	}
      i++;
    }
  stock[j] = my_strdup(tab[strarraylen(tab) - 1]);
  stock[j + 1] = '\0';
  return (stock);
}

char	**sorts_tab(char **tab)
{
  char	*tmp;
  int	i;

  i = 0;
  while (i != strarraylen(tab))
    {
      if (my_strcmp(tab[i], tab[i + 1]) > 0)
	{
	  tmp = my_strdup(tab[i]);
	  tab[i] = my_strdup(tab[i + 1]);
	  tab[i + 1] = my_strdup(tmp);
	  free(tmp);
	  i = -1;
	}
      i++;
    }
  return (tab);
}

int	mal_final_parse(char **tab)
{
  int   i;
  int   k;

  i = 0;
  k = 0;
  while (tab[i][k])
    {
      while (tab[i][k] != '"')
	k++;
      if (tab[i][k++] == '"')
	while (tab[i][k] != '"')
	  k++;
      if (tab[i][k] == '"')
	k++;
      k++;
    }
  return (k);
}

char	*norms(char **tab, char **cpy, int i)
{
  int	j;
  int	k;

  j = 0;
  k = 0;
  while (tab[i][k])
    {
      while (tab[i][k] != '"')
	{
	  cpy[i][j] = tab[i][k];
	  j++;
	  k++;
	}
      if (tab[i][k++] == '"')
	while (tab[i][k] != '"' && tab[i][k])
	  k++;
      if (tab[i][k] == '"')
	k++;
      k++;
    }
  cpy[i][j] = '\0';
  j = 0;
  k = 0;
  return (cpy[i]);
}

char	**final_parse(char **tab)
{
  char	**cpy;
  int	i;

  i = 0;
  if ((cpy = malloc(sizeof(char *) * (strarraylen(tab) + 1))) == NULL)
    return (NULL);
  while (i < strarraylen(tab))
    {
      if ((cpy[i] = malloc(sizeof(char) * (mal_final_parse(tab) + 1))) == NULL)
	return (NULL);
      norms(tab, cpy, i);
      i++;
    }
  cpy[i] = '\0';
  return (cpy);
}
