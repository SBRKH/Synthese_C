/*
** other_function.c for other_function in /home/khoual_s/rendu/Synthese/SBMLparser
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Tue Jun 14 08:48:21 2016 Khoualdia Sabri
** Last update Wed Jun 15 12:31:22 2016 Khoualdia Sabri
*/

#include "my.h"
#include "sbmlparser.h"

int     strarraylen(char **tab)
{
  int   i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}

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

void	aff_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      printf("%s\n", tab[i]);
      i++;
    }
}
