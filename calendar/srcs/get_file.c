/*
** get_file.c for get_file in /home/khoual_s/rendu/Synthese/calendar/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Fri Jul  1 10:05:53 2016 Khoualdia Sabri
** Last update Fri Jul  1 10:24:59 2016 Khoualdia Sabri
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "calendar.h"

char    *get_file(int fd)
{
  char  *buffer;
  char  c;
  int   i;

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

int     cnt_word(char *str, char delim)
{
  int   i;
  int   cnt;

  i = 0;
  cnt = 0;
  while (str[i])
    {
      if (str[i] == delim)
        cnt++;
      i++;
    }
  if (str[0] != delim)
    cnt++;
  return (cnt);
}

char    **my_strtowordtab(char *array, char delim)
{
  char  **tab;
  int   i;
  int   m;
  int   l;

  i = 0;
  m = 0;
  l = 0;
  if ((tab = malloc(sizeof(char *) * (cnt_word(array, delim) + 1))) == NULL)
    return (NULL);
  while (l < cnt_word(array, delim))
    {
      if ((tab[l] = malloc(sizeof(char) + my_strlen(array))) == NULL)
        return (NULL);
      while (array[i] == delim)
        i++;
      while (array[i] != delim && array[i])
        tab[l][m++] = array[i++];
      tab[l][m] = '\0';
      m = 0;
      l++;
      i++;
    }
  tab[l] = NULL;
  return (tab);
}
