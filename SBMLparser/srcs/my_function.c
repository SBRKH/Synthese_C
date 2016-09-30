/*
** my_function.c for my_function in /home/khoual_s/rendu/Synthese/SBMLparser
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 13 11:27:23 2016 Khoualdia Sabri
** Last update Wed Jun 15 14:49:43 2016 Khoualdia Sabri
*/

#include <unistd.h>
#include "../include/my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  if (str == NULL)
    return ;
  while (*str)
    write(1, str++, 1);
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
