/*
** modif_output.c for modif_output in /home/khoual_s/rendu/Synthese/projTester/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Fri Jun 24 15:32:20 2016 Khoualdia Sabri
** Last update Sat Jun 25 13:27:54 2016 Khoualdia Sabri
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "projtester.h"

int	count_dash(char *str)
{
  int	i;
  int	cnt;

  i = 0;
  cnt = 0;
  while (str[i])
    {
      if (str[i] == '-')
	cnt++;
      i++;
    }
  return (cnt);
}

int	find_stars(char **tab, char *str)
{
  int	i;

  i = 0;
  (void)str;
  while (tab[i])
    {
      if (tab[i][my_strlen(tab[i]) - 1] == '*')
	return (0);
      i++;
    }
  return (1);
}

void	findorrredirect(char **tab, char **argv, char **env)
{
  char	*tmp;
  FILE	*f;
  char	*moit;

  if (access(argv[2], X_OK) == 0 && find_stars(tab, argv[2]) == 0)
    its_the_same(argv, env);
  else
    {
      moit = " -F --charset=ascii --noreport |\
 sed 's/|/-/g; s/ /-/g;s/`/-/g; s/----/-----/g'";
      if ((tmp = malloc(sizeof(char) * (my_strlen("tree") + my_strlen(" > ")  + my_strlen(argv[1])
      					+ my_strlen(moit) + 1 + my_strlen(argv[2])))) == NULL)
      	return ;
      my_strcat(tmp, "tree ");
      my_strcat(tmp, argv[1]);
      my_strcat(tmp, moit);
      my_strcat(tmp, " >> ");
      my_strcat(tmp, argv[2]);
      if ((f = popen(tmp, "w")) == NULL)
	exit(84);
      pclose(f);
      free(tmp);
    }
}
