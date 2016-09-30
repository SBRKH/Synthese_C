/*
** cut.c for cut in /home/khoual_s/rendu/Synthese/SBMLparser/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 15 14:21:02 2016 Khoualdia Sabri
** Last update Wed Jun 15 15:22:02 2016 Khoualdia Sabri
*/

#include "my.h"
#include "sbmlparser.h"

char    **sorts_tab_mod(char **tab)
{
  char  *tmp;
  int   i;

  i = 1;
  while (i != strarraylen(tab))
    {
      if (my_strcmp(tab[i], tab[i + 1]) > 0)
        {
          tmp = my_strdup(tab[i]);
          tab[i] = my_strdup(tab[i + 1]);
          tab[i + 1] = my_strdup(tmp);
          free(tmp);
          i = 0;
        }
      i++;
    }
  return (tab);
}

void	cut(char **tab)
{
  char	**cpy;
  char	**cpy2;
  int	i;
  int	j;

  i = 0;
  j = 1;
  if ((cpy = malloc(sizeof(char) * (strarraylen(tab) + 1))) == NULL)
    return ;
  while (i < strarraylen(tab))
    {
      cpy = my_strtowordtab_synthesis(tab[i]);
      printf("%s\n", cpy[0]);
      if ((cpy2 = malloc(sizeof(char) * (strarraylen(cpy) + 1))) == NULL)
	return ;
      while (j < strarraylen(cpy))
	{
	  sorts_tab_mod(cpy);
	  printf("----->%s\n", cpy[j]);
	  j++;
	}
      j = 1;
      i++;
    }
}
