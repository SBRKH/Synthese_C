/*
** main.c for main in /home/khoual_s/rendu/Synthese/Pala/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Thu Jun 16 09:08:23 2016 Khoualdia Sabri
** Last update Sat Jun 18 18:34:37 2016 Khoualdia Sabri
*/

#include "palindrome.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	menu_help()
{
  printf("%s\n", "USAGE");
  printf("%s ", "\t./palindrome -n number -p palindrome");
  printf("%s\n", "[-b base] [-imin i] [-imax i]");
  printf("%s\n", "\nDESCRIPTION\n");
  printf("%s\n", "\t-n nb\tinteger to be transformed (>= 0)");
  printf("%s ", "\t-p pal\tpalindromic number to be obtained");
  printf("%s\n", "incompatible with the −n option) (>= 0)");
  printf("%s\n", "\t\tif defined, all fitting values of n will be output");
  printf("%s ", "\t-b base\tbase in wich the procedure will be executed");
  printf("%s\n", "(1 < b <= 10) [def: 10]");
  printf("%s ", "\t-imin i\tminimum number of iterations, included");
  printf("%s\n", "(>= 0) [def: 0]");
  printf("%s ", "\t-imax i\tmaximum number of iterations, included");
  printf("%s\n", "(>= 0) [def: 100]");
  exit(EXIT_SUCCESS);
}

void	disp(char *str)
{
  printf("%s leads to %d ", str, find_palindrome(str, 10));
  printf("in %d iteration(s) in base %d\n", number_iteration(str, 10), 10);
  exit(0);
}

int	main(int argc, char **argv)
{
  char	*str;
  int	i;

  if (argc == 1)
    inv_arg();
  else if (my_strcmp(argv[1], "-h") == 0 && argc == 2)
    menu_help();
  else if (argc % 2 == 0)
    inv_arg();
  else
    {
      i = 1;
      while (my_strcmp(argv[i], "-n") != 0 && my_strcmp(argv[i], "-p") != 0)
	i++;
      str = epure_zero(argv[i + 1]);
      if (error_management(argv) == 0)
	{
	  if (my_strcmp(argv[i], "-n") == 0)
	    disp(str);
	  if (my_strcmp(argv[i], "-p") == 0)
	    optn_p(str, 10);
	}
    }
  return (0);
}
