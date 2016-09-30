/*
** epure_str.c for epure_str in /home/khoual_s/rendu/Synthese/SBMLparser
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 13 20:35:55 2016 Khoualdia Sabri
** Last update Wed Jun 15 14:20:48 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include "sbmlparser.h"
#include "my.h"

char    *epure_str(char *str)
{
  char  *new;
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (str[i] != '<')
    {
      if (str[i] != ' ')
	if(str[i] != '\t')
      	{
      	  printf("%s\n", "Error: Syntax in SBML File.");
      	  exit(84);
      	}
      i++;
    }
  new = malloc(sizeof(char) * (my_strlen(str) - i + 1));
  while (str[i])
    {
      new[j] = str[i];
      i++;
      j++;
    }
  new[j] = '\0';
  return (new);
}
