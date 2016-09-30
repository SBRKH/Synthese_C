/*
** opt_i.c for opt_i in /home/khoual_s/rendu/Synthese/SBMLparser/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 15 18:24:24 2016 Khoualdia Sabri
** Last update Wed Jun 15 20:19:16 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include "my.h"
#include "sbmlparser.h"


void	is_it_i(char **argv, char *str)
{
  char	**tab;
  
  tab = parse_tags(who_is_important(str_to_wordtab(str, '\n')));
  if (my_strcmp(argv[2], "-i") == 0)
    aff_tab(bye_quote(is_it_species(opt_i(tab))));
}

char	**opt_i(char **tab)
{
  int	i;
  int	j;
  char	**cpy;

  i = 0;
  j = 0;
  if ((cpy = malloc(sizeof(char *) * (strarraylen(tab) + 1))) == NULL)
    return (NULL);
  while (i < strarraylen(tab))
    {
      if ((cpy[i] = malloc(sizeof(char) * (my_strlen(tab[i]) + 1))) == NULL)
	return (NULL);
      if (my_strcmp(tab[i], "species") > 0)
	{
	  cpy[j] = my_strdup(tab[i]);
	  j++;
	}
      i++;
    }
  cpy[j] = NULL;
  return (cpy);
}


char	**is_it_species(char **tab)
{
  char	**cpy;
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  if ((cpy = malloc(sizeof(char *) * (strarraylen(tab) + 1))) == NULL)
    return (NULL);
  while (i < strarraylen(tab))
    {
      if ((cpy[j] = malloc(sizeof(char) * (my_strlen(tab[i]) + 1))) == NULL)
	return (NULL);
      while (tab[i][k] != ' ')
	k++;
      if (k == my_strlen("species"))
	{
	  cpy[j] = my_strdup(tab[i]);
	  j++;
	}
      i++;
    }
  cpy[j] = NULL;
  return (cpy);
}

char    *norms_quote(char **tab, char **cpy, int i)
{
  int   j;
  int   k;

  j = 0;
  k = 0;
  while (tab[i][k])
    {
      if (tab[i][k] == '"')
	k++;
      cpy[i][j] = tab[i][k];
      j++;
      k++;
    }
  cpy[i][j] = '\0';
  j = 0;
  k = 0;
  return (cpy[i]);
}

char    **bye_quote(char **tab)
{
  char  **cpy;
  int   i;

  i = 0;
  if ((cpy = malloc(sizeof(char *) * (strarraylen(tab) + 1))) == NULL)
    return (NULL);
  while (i < strarraylen(tab))
    {
      if ((cpy[i] = malloc(sizeof(char) * (my_strlen(tab[i]) + 1))) == NULL)
        return (NULL);
      norms_quote(tab, cpy, i);
      i++;
    }
  cpy[i] = '\0';
  return (cpy);
}
