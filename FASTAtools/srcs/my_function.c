/*
** my_function.c for my_function in /home/khoual_s/rendu/Synthese/fastatools/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Sun Jun 19 18:14:13 2016 Khoualdia Sabri
** Last update Tue Jun 21 00:09:48 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include <unistd.h>
#include "fastatools.h"

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

char	my_strupcase(char c)
{
  if (c >= 'a' && c <= 'z')
    return (c - 32);
  return (c);
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

char	*my_revstr(char *str)
{
  char  *cpy;
  int   i;
  int   len;

  i = 0;
  len = my_strlen(str) - 1;
  if ((cpy = malloc(sizeof(char) * (len + 2))) == NULL)
    return (NULL);
  while (str[i])
    {
      cpy[i] = str[len];
      len--;
      i++;
    }
  cpy[i] = '\0';
  return (cpy);
}
