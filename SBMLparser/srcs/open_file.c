/*
** open_file.c for open_file in /home/khoual_s/rendu/Synthese/SBMLparser
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 13 12:16:33 2016 Khoualdia Sabri
** Last update Wed Jun 15 20:41:02 2016 Khoualdia Sabri
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "sbmlparser.h"

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
	  if ((str = malloc(sizeof(char) * (i + 1))) == NULL)
	    return (NULL);
	  my_strcpy(str, buffer);
	  return (str);
	}
      i++;
    }
  return (NULL);
}

int	count_word_backspace(char *str, char delim)
{
  int	i;
  int	cnt;

  i = 0;
  cnt = 0;
  while (str[i])
    {
      if (str[i] == delim)
	cnt++;
      i++;
    }
  if (cnt % 2 != 0)
    cnt--;
  return (cnt);
}

char	**str_to_wordtab(char *str, char delim)
{
  char	**tab;
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  if (str == NULL)
    exit(84);
  if ((tab = malloc(sizeof(char *) * (count_word_backspace(str, delim) + 1))) == NULL)
    return (NULL);
  while (j < count_word_backspace(str, delim))
    {
      if ((tab[j] = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
	return (NULL);
      while (str[i] != delim)
	tab[j][k++] = str[i++];
      tab[j][k] = '\0';
      i++;
      j++;
      k = 0;
    }
  tab[j] = '\0';
  return (tab);
}
