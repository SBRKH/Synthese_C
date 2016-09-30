/*
** palindrome.c for palindrome in /home/khoual_s/rendu/Synthese/palindrome/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Thu Jun 16 10:20:36 2016 Khoualdia Sabri
** Last update Sat Jun 18 18:20:47 2016 Khoualdia Sabri
*/

#define INT_MAX (2147483647)

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "palindrome.h"

int	number_iteration(char *val, int base)
{
  char  *val2;
  char  *tmp;
  int   nb_ite;
  int   value;
  int   rev_value;

  nb_ite = 0;
  tmp = strdup(my_convert_base(atoi(val), base));
  val2 = my_revstr(tmp);
  value = atoi(tmp);
  rev_value = atoi(val2);
  while ((value - rev_value) != 0 && nb_ite <= 100)
    {
      value = value + rev_value;
      sprintf(tmp, "%d", value);
      val2 = my_revstr(tmp);
      rev_value = atoi(val2);
      nb_ite++;
    }
  return (nb_ite);
}

int     find_palindrome(char *val, int base)
{
  char  *val2;
  char  *tmp;
  int   nb_ite;
  int   value;
  int   rev_value;

  nb_ite = 0;
  tmp = strdup(my_convert_base(atoi(val), base));
  val2 = my_revstr(tmp);
  value = atoi(tmp);
  rev_value = atoi(val2);
  while ((value - rev_value) != 0)
    {
      value = value + rev_value;
      sprintf(tmp, "%d", value);
      val2 = my_revstr(tmp);
      rev_value = atoi(val2);
      nb_ite++;
    }
  return (convert_dec(value, base));
}

void    disp_p(char *val, int i, int nb_ite, int base)
{
  printf("%d leads to %d ", i, atoi(val));
  printf("in %d iteration(s) in base %d\n", nb_ite, base);
}

void    decoup(int base, int nb_ite, char *val, int j)
{
  int   i;
  int   l;
  char  *tmp;

  i = 1;
  l = 1;
  while (i <= atoi(val))
    {
      if ((tmp = malloc(sizeof(char) * (cnt_nb(atoi(val), base) + 1))) == NULL)
        return ;
      if (l == atoi(val))
        disp_p(val, i, nb_ite, base);
      if (l > atoi(val))
        {
          i++;
          l = i;
          nb_ite = 0;
        }
      sprintf(tmp, "%d", l);
      tmp = my_convert_base(l, base);
      j = atoi(my_revstr(tmp));
      l = atoi(tmp) + j;
      nb_ite++;
      free(tmp);
    }
}

int     optn_p(char *val, int base)
{
  int   j;
  int   nb_ite;

  j = 0;
  nb_ite = 0;
  decoup(base, nb_ite, val, j);
  printf("%d leads to %d ", atoi(val), atoi(val));
  printf("in %d iteration(s) in base %d\n", 0, base);
  return (0);
}
