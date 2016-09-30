/*
** my_function.c for my_function in /home/khoual_s/rendu/Synthese/palindrome/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Thu Jun 16 10:21:49 2016 Khoualdia Sabri
** Last update Fri Jun 17 15:05:40 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include "palindrome.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char	*my_revstr(char *str)
{
  char	*cpy;
  int	i;
  int	len;

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

int	my_pow(int nb, int pow)
{
  if (pow > 0)
    return (my_pow(nb, pow - 1) * nb);
  else if (pow == 0)
    return (1);
  else if (pow < 0)
    return (0);
  return (0);
}

int	cnt_nb(int nb, int base)
{
  int	i;

  i = 1;
  while (my_pow(base, i) < nb)
    i++;
  return (i);
}
