/*
** disp_err.c for disp_err in /home/khoual_s/rendu/Synthese/palindrome/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Fri Jun 17 11:01:25 2016 Khoualdia Sabri
** Last update Fri Jun 17 11:03:24 2016 Khoualdia Sabri
*/

#include <unistd.h>
#include <stdlib.h>
#include "palindrome.h"

void	inv_arg(void)
{
  write(2, "invalid argument\n", 18);
  exit(84);
}

void	no_sol(void)
{
  write(2, "no solution\n", 12);
  exit(84);
}

void	over(void)
{
  write(2, "overflow\n", 9);
  exit(84);
}
