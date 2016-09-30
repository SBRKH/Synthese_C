/*
** error_management.c for error_management in /home/khoual_s/rendu/Synthese/palindrome/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Fri Jun 17 11:11:25 2016 Khoualdia Sabri
** Last update Sat Jun 18 18:52:54 2016 Khoualdia Sabri
*/

#include <stdio.h>
#include <stdlib.h>
#include "palindrome.h"

void	disp_w_base(char **argv, int i, char *str)
{
  printf("%s leads to %d ", str, find_palindrome(str, atoi(argv[i + 1])));
  printf("in %d iteration(s) in ", number_iteration(str, atoi(argv[i + 1])));
  printf("base %d\n", atoi(argv[i + 1]));
  exit(EXIT_SUCCESS);
}

int	error_management(char **argv)
{
  int	i;
  char	*str;

  i = 1;
  while (my_strcmp(argv[i], "-n") != 0 && my_strcmp(argv[i], "-p") != 0)
    i++;
  str = epure_zero(argv[i + 1]);
  i = 1;
  while (argv[i])
    {
      if (my_strcmp(argv[i], "-b") == 0 && argv[i + 1] == NULL &&
      	  (atoi(argv[i + 1]) < 2 || atoi(argv[i + 1]) > 10))
      	inv_arg();
      if (argv[i][0] == '-' && my_strcmp(argv[i], "-n") != 0 &&
	  my_strcmp(argv[i], "-b") != 0 && my_strcmp(argv[i], "-imin") != 0 &&
	  my_strcmp(argv[i], "-imax") != 0 && my_strcmp(argv[i], "-p") != 0)
	inv_arg();
      error_bis(argv, i, str);
      error_third(argv, i, str);
      error_fourth(argv, i, str);
      i = i + 2;
    }
  return (0);
}

void	error_bis(char **argv, int i, char *str)
{
  if (my_strcmp(argv[i], "-b") == 0 && my_strcmp(argv[i + 2], "-imin") == 0)
    if (atoi(argv[i + 3]) > number_iteration(str, atoi(argv[i + 1])))
      no_sol();
  if (my_strcmp(argv[i], "-b") == 0 && my_strcmp(argv[i + 2], "-imax") == 0)
    if (atoi(argv[i + 3]) < number_iteration(str, atoi(argv[i + 1])))
      no_sol();
}

void	error_third(char **argv, int i, char *str)
{
  if ((my_strcmp(argv[i], "-b") == 0) && (atoi(argv[i + 1]) < 2 || atoi(argv[i + 1]) > 10))
    inv_arg();
  if ((my_strcmp(argv[i], "-b") == 0) && (atoi(argv[i + 1]) < 2 || atoi(argv[i + 1]) > 10))
    inv_arg();
  if (my_strcmp(argv[1], "-p") == 0 && my_strcmp(argv[i], "-b") == 0 &&
      atoi(argv[i + 1]) >= 2 && atoi(argv[i + 1]) <= 10)
    {
      optn_p(str, atoi(argv[i + 1]));
      exit(0);
    }
  if (my_strcmp(argv[1], "-n") == 0 && my_strcmp(argv[i], "-b") == 0 &&
      atoi(argv[i + 1]) >= 2 && atoi(argv[i + 1]) <= 10 &&
      my_strcmp(argv[i], "-imin") != 0)
    disp_w_base(argv, i, str);
  if (my_strcmp(argv[1], "-n") == 0 && my_strcmp(argv[i], "-p") == 0)
    inv_arg();
  if (my_strcmp(argv[i], "-imin") == 0 && is_num(argv[i + 1]) == 1)
    inv_arg();
  if (my_strcmp(argv[i], "-imax") == 0 && is_num(argv[i + 1]) == 1)
    inv_arg();
  if ((my_strcmp(argv[i], "-p") == 0 && (((is_num(argv[i + 1]) == 1)) || (argv[i + 1] == NULL))))
    inv_arg();
  if (is_num(argv[i + 1]) == 1 || is_num(argv[i]) == 0)
    inv_arg();
}

void	error_fourth(char **argv, int i, char *str)
{
  if ((my_strcmp(argv[i], "-imin") == 0) && (((argv[i + 1] == NULL)) || (atoi(argv[i + 1]) < 0) || (atoi(argv[i + 1]) > 100)))
    inv_arg();
  if ((my_strcmp(argv[i], "-imax") == 0) && (argv[i + 1] == NULL || atoi(argv[i + 1]) < 0))
    inv_arg();
  if ((my_strcmp(argv[i], "-imin") == 0) && my_strcmp(argv[i], "-b") != 0)
    if (atoi(argv[i + 1]) > number_iteration(str, 10))
      no_sol();
  if (my_strcmp(argv[i], "-imax") == 0 && my_strcmp(argv[i], "-b") != 0)
    if (atoi(argv[i + 1]) < number_iteration(str, 10))
      no_sol();
}
