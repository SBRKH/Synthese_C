/*
** other_function.c for other_function in /home/khoual_s/rendu/Synthese/Pala/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Thu Jun 16 09:10:07 2016 Khoualdia Sabri
** Last update Sat Jun 18 18:17:21 2016 Khoualdia Sabri
*/

#include <stdio.h>
#include <stdlib.h>
#include "palindrome.h"

int	is_num(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] >= 'a' && str[i] < 'z')
	return (1);
      i++;
    }
  return (0);
}

char    *epure_zero(char *val)
{
  int   i;
  int   j;
  char  *cpy;

  i = 0;
  j = 0;
  while (val[i] == '0')
    i++;
  if ((cpy = malloc(sizeof(char) * (my_strlen(val) -i + 1))) == NULL)
    return (NULL);
  while (val[i])
    cpy[j++] = val[i++];
  cpy[j] = '\0';
  return (cpy);
}

char	*my_convert_base(int nb, int base)
{
  int	digit;
  char	*str;

  digit = 0;
  if ((str = malloc(sizeof(char))) == NULL)
    return (NULL);
  while (nb >= 1)
    {
      if ((str = realloc(str, digit + 2)) == NULL)
	return (NULL);
      str[digit] = (nb % base) + 48;
      digit++;
      nb = nb / base;
    }
  str[digit] = '\0';
  str = my_revstr(str);
  return (str);
}

int	convert_dec(int nb, int base)
{
  char	*str;
  int	idx;
  int	pow;
  int	nbr;

  if ((str = malloc(sizeof(char) * (cnt_nb(nb, base) + 1))) == NULL)
    return (-1);
  sprintf(str, "%d", nb);
  idx = my_strlen(str) - 1;
  pow = 0;
  nbr = 0;
  while (idx >= 0)
    {
      nbr = nbr + (str[idx] - 48) * my_pow(base, pow);
      idx--;
      pow++;
    }
  free(str);
  return (nbr);
}
