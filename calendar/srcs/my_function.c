/*
** my_function.c for my_function in /home/khoual_s/rendu/Synthese/calendar/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Fri Jul  1 09:57:40 2016 Khoualdia Sabri
** Last update Fri Jul  1 15:35:32 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include "calendar.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (s1 == NULL || s2 == NULL)
    return (84);
  while (s1[i] && s1[i] == s2[i])
    i++;
  return (s1[i] - s2[i]);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

char	*my_strdup(char *str)
{
  char	*cpy;

  if ((cpy = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  my_strcpy(cpy, str);
  return (cpy);
}
