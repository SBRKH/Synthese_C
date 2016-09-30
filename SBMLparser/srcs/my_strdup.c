/*
** my_strdup.c for my_strdup in /home/khoual_s/rendu/Synthese/SBMLparser
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 13 20:00:11 2016 Khoualdia Sabri
** Last update Tue Jun 14 15:29:10 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include "my.h"

char	*my_strdup(char *str)
{
  char	*ptr;

  if (str == NULL)
    return (NULL);
  ptr = malloc(sizeof(char) * my_strlen(str) + 1);
  my_strcpy(ptr, str);
  return (ptr);
}
