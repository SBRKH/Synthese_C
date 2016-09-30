/*
** pop.c for pop in /home/khoual_s/rendu/Synthese/projTester/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 22 13:52:26 2016 Khoualdia Sabri
** Last update Sat Jun 25 16:12:46 2016 Khoualdia Sabri
*/

#include <stdio.h>
#include <stdlib.h>
#include "projtester.h"

void	pop(char *str)
{
  char	*tmp;
  FILE	*f;
  char	*moit;

  tmp = NULL;
  moit = " -F --charset=ascii --noreport |\
 sed 's/|/-/g; s/ /-/g; s/`/-/g; s/----/-----/g'";
  if ((tmp = malloc(sizeof(char) * (my_strlen("tree") + my_strlen(str) + my_strlen(" > tmp.txt") 
				    + my_strlen(moit) + 1))) == NULL)
      return ;
  my_strcat(tmp, "tree ");
  my_strcat(tmp, str);
  my_strcat(tmp, moit);
  my_strcat(tmp, " > tmp.txt");
  if ((f = popen(tmp, "w")) == NULL)
    exit(84);
  if (pclose(f) == -1)
    exit(84);
  free(tmp);
}

char	*remove_first(char *str)
{
  int	i;
  char	*cpy;
  int	j;

  i = 2;
  j = 0;
  if ((cpy = malloc(sizeof(char) * my_strlen(str))) == NULL)
    return (NULL);
  while (str[i])
    {
      cpy[j] = str[i];
      i++;
      j++;
    }
  cpy[j] = '\0';
  return (cpy);
}

char	**change(char **tab)
{
  if (tab[0][0] == '.' && tab[0][1])
    tab[0] = remove_first(tab[0]);
  if (tab[0][my_strlen(tab[0]) - 1] != '/')
    {
      if ((tab[0] = realloc(tab[0], (my_strlen(tab[0]) + 1))) == NULL)
  	return (NULL);
      tab[0][my_strlen(tab[0])] = '/';
    }
  return (tab);
}
