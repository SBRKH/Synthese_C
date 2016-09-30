/*
** get_system_path.c for get_system_path in /home/khoual_s/rendu/Synthese/projTester/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Thu Jun 23 12:13:07 2016 Khoualdia Sabri
** Last update Thu Jun 23 12:22:17 2016 Khoualdia Sabri
*/

#include <unistd.h>
#include "projtester.h"

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (-1);
  while (s1[i] == s2[i] && i < n)
    i++;
  return (s1[i] - s2[i]);
}

char	**get_system_path(char **env)
{
  char  **tab;
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (env[i])
    {
      while (env[i][j] != '=')
        j++;
      if (my_strncmp(env[i], "PATH", j - 1) == 0)
        {
	  tab = my_strtowordtab(&env[i][j + 1], ':');
	  return (tab);
	}
      j = 0;
      i++;
    }
  return (NULL);
}
