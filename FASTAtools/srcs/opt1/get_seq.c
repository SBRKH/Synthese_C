/*
** seq.c for seq in /home/khoual_s/rendu/Synthese/FASTAtools/srcs/opt1
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 20 23:08:57 2016 Khoualdia Sabri
** Last update Tue Jun 21 15:43:37 2016 Khoualdia Sabri
*/

#include <unistd.h>
#include <stdlib.h>
#include "fastatools.h"

int	low_letters(char c)
{
  if (c == 'a' || c == 'c' || c == 'g' ||
      c == 't' || c == 'n')
    return (0);
  return (-1);
}

int	up_letters(char c)
{
  if (c == 'A' || c == 'C' || c == 'G' ||
      c == 'T' || c == 'N')
    return (0);
  return (-1);
}

char    **create_seq(char *str)
{
  char  **tab;
  int   i;
  int   j;
  int   k;

  i = 0;
  j = 0;
  if ((tab = malloc(sizeof(char*) * (how_chev(str) + 1))) == NULL)
    return (NULL);
  while (str[i])
    {
      if ((tab[j] = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
	return (NULL);
      if (str[i] == '>')
      	while (str[i] != '\n')
      	  i++;
      if (str[i] != '>')
	{
	  k = 0;
	  while (str[i] && str[i++] != '>')
	    if (low_letters(str[i]) == 0 || up_letters(str[i]) ==  0)
	      tab[j][k++] = my_strupcase(str[i]);
	  tab[j][k] = '\0';
	  j++;
	}
      i++;
    }
  tab[j] = NULL;
  return (tab);
}
