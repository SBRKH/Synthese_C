/*
** find_path.c for find_path in /home/khoual_s/rendu/Synthese/projTester/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Thu Jun 23 10:20:27 2016 Khoualdia Sabri
** Last update Sat Jun 25 16:03:43 2016 Khoualdia Sabri
*/

#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>
#include "projtester.h"
#include <stdio.h>
#include <string.h>

int	five_dash(char **tab)
{
  int	i;
  int	cnt;

  i = 0;
  cnt = 0;
  while (tab[i])
    {
      if (tab[i][4] == '-' && tab[i][5] != '-')
	cnt++;
      i++;
    }
  return (cnt);
}

char	**find_path(char **tab)
{
  char	**cpy;
  int	i;
  int	j;

  if ((cpy = malloc(sizeof(char *) * (five_dash(tab) + 1))) == NULL)
    return (NULL);
  i = 1;
  j = 1;
  cpy[0] = tab[0];
  while (tab[i])
    {
      if ((cpy[j] = malloc(sizeof(char) * (my_strlen(tab[i]) + 1))) == NULL)
	return (NULL);
      if (tab[i][4] == '-' && tab[i][5] != '-')
	{
	  cpy[j] = tab[i];
	  j++;
	}
      i++;
    }
  cpy[j] = NULL;
  return (cpy);
}

int	err(void)
{
  write(2, "error\n", 6);
  exit(84);
}

void	its_the_same(char **argv, char **env)
{
  int	i;
  char	**path;
  char	*tmp;

  i = 0;
  path = get_system_path(env);
  tmp = malloc(sizeof(char) * (my_strlen(argv[1]) + my_strlen(argv[2]) + 2));
  my_strcat(tmp, argv[1]);
  my_strcat(tmp, "/");
  my_strcat(tmp, argv[2]);
  if (access(tmp, F_OK) == 0 && access(tmp, X_OK) == 0)
    exit(0);
  if (opendir(argv[2]))
    err();
  if (access(argv[2], F_OK) == 0 && access(argv[2], X_OK) == 0)
    exit(0);
  while (path[i])
    {
      path[i] = realloc(path[i], my_strlen(path[i]) + my_strlen(path[0]) +
			my_strlen("/") + my_strlen(argv[2]) + 1);
      my_strcat(path[i], "/");
      my_strcat(path[i], argv[2]);
      if (access(path[i], F_OK) == 0 && access(path[i], X_OK) != 0)
	exit(0);
      i++;
    }
  err();
}
