/*
** my_function.c for my_function in /home/khoual_s/rendu/Synthese/projTester/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 22 14:49:42 2016 Khoualdia Sabri
** Last update Sat Jun 25 16:11:29 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include "projtester.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char    *my_strcat(char *dest, char *src)
{
  int   i;
  int   dest_len;

  dest_len = my_strlen(dest);
  i = 0;
  while (src[i])
    {
      dest[dest_len + i] = src[i];
      i++;
    }
  dest[dest_len + i] = '\0';
  return (dest);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (-1);
  while (s1[i] == s2[i] && s1[i])
    i++;
  return (s1[i] - s2[i]);
}

int	my_strarraylen(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}
