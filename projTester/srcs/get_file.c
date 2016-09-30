/*
** get_file.c for get_file in /home/khoual_s/rendu/Synthese/projTester/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 22 14:12:53 2016 Khoualdia Sabri
** Last update Wed Jun 22 19:49:27 2016 Khoualdia Sabri
*/

#include <unistd.h>
#include <stdlib.h>
#include "projtester.h"

char	*get_file(int fd)
{
  char	*buffer;
  char	c;
  int	i;

  i = 0;
  if ((buffer = malloc(sizeof(char))) == NULL)
    return (NULL);
  while (read(fd, &c, 1) > 0)
    {
      buffer[i] = c;
      i++;
      if ((buffer = realloc(buffer, ((i  + 2) * sizeof(char)))) == NULL)
	return (NULL);
    }
  buffer[i] = '\0';
  return (buffer);
}
