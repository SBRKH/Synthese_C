/*
** get_file.c for get_file in /home/khoual_s/rendu/Synthese/FASTAtools/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 20 23:00:04 2016 Khoualdia Sabri
** Last update Tue Jun 21 00:04:42 2016 Khoualdia Sabri
*/

#include <unistd.h>
#include <stdlib.h>
#include "fastatools.h"

char	*get_file(const int fd)
{
  char	buffer[4096];
  char	*str;
  int	i;

  i = 0;
  while (read(fd, buffer + i, 1) >= 0)
    {
      if (buffer[i] == '\0')
	{
	  if ((str = malloc(sizeof(char) * i)) == NULL)
	    return (NULL);
	  my_strcpy(str, buffer);
	  return (str);
	}
      i++;
    }
  return (NULL);
}
