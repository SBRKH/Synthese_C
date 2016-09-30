/*
** my_strtowordtab_synthesis.c for my_strtowordtab_synthesis in /home/khoual_s/rendu/Synthese/SBMLparser
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 13 09:37:02 2016 Khoualdia Sabri
** Last update Wed Jun 15 09:17:58 2016 Khoualdia Sabri
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "sbmlparser.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    exit(84);
  while (str[i])
    i++;
  return (i);
}

int	is_alpha(char c)
{
  if ((c >= 48 && c <= 57) || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    return (0);
  return (-1);
}

int	cnt_words(char *str)
{
  int	i;
  int	cnt;
  int	is_ok;

  i = 0;
  cnt = 0;
  while (str[i])
    {
      is_ok = 0;
      while (is_alpha(str[i]) == 0)
	{
	  is_ok = 1;
	  i++;
	}
      if (is_ok == 1)
	cnt++;
      if (str[i])
	i++;
    }
  return (cnt);
}

void	cutting_str(char *str, int i, char **tab)
{
  int	j;
  int	k;

  j = 0;
  k = 0;
  while (j < cnt_words(str))
    {
      if ((tab[j] = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
	return ;
      while (is_alpha(str[i]) == -1)
        i++;
      while (is_alpha(str[i]) == 0)
        tab[j][k++] = str[i++];
      tab[j][k] = '\0';
      i++;
      j++;
      k = 0;
    }
  tab[j] = NULL;
}

char	**my_strtowordtab_synthesis(char *str)
{
  char	**tab;
  int	i;

  i = 0;
  if (str == NULL)
    exit(84);
  if ((tab = malloc(sizeof(char *) * (cnt_words(str) + 1))) == NULL)
    return (NULL);
  cutting_str(str, i, tab);
  return (tab);
}
