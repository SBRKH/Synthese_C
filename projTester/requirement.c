/*
** requirement.c for requirement in /home/khoual_s/rendu/Synthese/projTester
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 22 09:35:20 2016 Khoualdia Sabri
** Last update Fri Jun 24 10:28:56 2016 Khoualdia Sabri
*/

#include <stdio.h>
#include <stdlib.h>

void	my_ps_synthesis(void)
{
  pid_t	child;
  char	*arg[2];

  arg[0] = "ps";
  arg[1] = NULL;
  if ((child = fork()) == 0)
    {
      if ((execve("/bin/ps", arg, NULL)) == -1)
	exit(84);
    }
  else
    wait(child);
}
