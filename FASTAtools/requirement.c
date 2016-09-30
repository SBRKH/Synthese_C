/*
** requirement.c for requirement in /home/khoual_s/rendu/Synthese/fastatools
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Sun Jun 19 17:37:17 2016 Khoualdia Sabri
** Last update Tue Jun 21 15:33:56 2016 Khoualdia Sabri
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}

char    *my_strdup(char *str)
{
  char  *ptr;

  if (str == NULL)
    return (NULL);
  if ((ptr = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  my_strcpy(ptr, str);
  return (ptr);
}

int     is_alpha(char c)
{
  if ((c >= 48 && c <= 57) || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    return (0);
  return (-1);
}

char	*my_strcapitalize_synthesis(char *str)
{
  char	*tmp;
  int	idx;

  tmp = my_strdup(str);
  idx = 1;
  if (str[0] >= 'a' && str[0] <= 'z')
    tmp[0] = str[0] - 32;
  while (str[idx])
    {
      if (str[idx] >= 'a' && str[idx] <= 'z' &&
	  is_alpha(str[idx - 1]) == -1)
	tmp[idx] = str[idx] - 32;
      idx++;
    }
  str = my_strdup(tmp);
  free(tmp);
  return (str);
}
