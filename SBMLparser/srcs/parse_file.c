/*
** parse_file.c for parse_file in /home/khoual_s/rendu/Synthese/SBMLparser
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 13 16:16:45 2016 Khoualdia Sabri
** Last update Wed Jun 15 16:52:34 2016 Khoualdia Sabri
*/

#include "my.h"
#include "sbmlparser.h"

int	is_space(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == ' ')
	return (1);
      i++;
    }
  return (0);
}

int	count_space(char **tab)
{
  char	*str;
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i < strarraylen(tab) - 1)
    {
      str = epure_str(tab[i]);
      if (is_space(str) == 1)
        j++;
      i++;
    }
  free(str);
  return (j);
}

int	find_end_in_str(char *str)
{
  int	i;

  i = 1;
  while (str[i] != '>')
    i++;
  return (i);
}

char    **who_is_important(char **tab)
{
  int   i;
  int   j;
  char  *str;
  char  **cpy;

  j = count_space(tab);
  if ((cpy = malloc(sizeof(char *) * (j + 1))) == NULL)
    return (NULL);
  j = 0;
  i = 1;
  while (i < strarraylen(tab))
    {
      str = epure_str(tab[i]);
      if (is_space(str) == 1)
        {
          cpy[j] = my_strdup(str);
          j++;
        }
      i++;
    }
  free(str);
  cpy[j] = '\0';
  return (cpy);
}

char	**parse_tags(char **tab)
{
  char	**tags;
  int	i;
  int	j;
  int	k;

  if ((tags = malloc(sizeof(char *) * (strarraylen(tab) + 1))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  k = 1;
  while (i < strarraylen(tab))
    {
      if ((tags[i] = malloc(sizeof(char) * (find_end_in_str(tab[i]) + 1))) == NULL)
	return (NULL);
      while (tab[i][k + 1] != '>')
	  tags[i][j++] = tab[i][k++];
      tags[i][j] = '\0';
      k = 1;
      j = 0;
      i++;
    }
  tags[i] = '\0';
  return (tags);
}
