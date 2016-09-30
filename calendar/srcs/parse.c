/*
** parse.c for parse in /home/khoual_s/rendu/Synthese/calendar/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Fri Jul  1 10:37:41 2016 Khoualdia Sabri
** Last update Fri Jul  1 15:27:39 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "calendar.h"

void             print_list(t_employee *first)
{

  t_employee	*current;

  current = first;
  while (current != NULL)
    {
      printf("%s\n", "******************************");
      printf("%s ", current->last_name);
      printf("%s ", current->first_name);
      printf("position:  %s ", current->position);
      printf("city:  %s\n", current->zipcode);
      printf("%s\n", "******************************");
      current = current->next;
    }
}

void             free_list(t_employee *first)
{
  t_employee	            *backup;

  while (first)
    {
      backup = first->next;
      free(first);
      first = backup;
    }
}

int	my_strarraylen(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    i++;
  return (i);
}

char		**recup_employee(char **tab)
{
  char	**new_tab;
  int	i;
  int	j;

  i = 0;
  j = 0;
  if ((new_tab = malloc(sizeof(char *) * (my_strarraylen(tab) + 1))) == NULL)
    return (NULL);
  while (tab[i])
    {
      if (strncmp(tab[i], "new_employee", my_strlen("new_employee")) == 0)
	{
	  new_tab[j] = tab[i];
	  j++;
	}
      i++;
    }
  new_tab[j] = tab[i];
  return (new_tab);
}

t_employee	*fill_employee(char **tab)
{
  t_employee	*start;
  t_employee	*work;
  char		**cut;
  int		i;

  i = 0;
  if ((start = malloc(sizeof(t_employee *) * 10)) == NULL)
    exit (84);
  if ((work = malloc(sizeof(t_employee *) * 10)) == NULL)
    exit (84);
  start->next = NULL;
  while (tab[i])
    {
      cut = my_strtowordtab(tab[i], ' ');
      work->last_name = my_strdup(cut[1]);
      work->first_name = my_strdup(cut[2]);
      work->position = my_strdup(cut[3]);
      work->zipcode = my_strdup(cut[4]);
      work->id = my_strdup(cut[5]);
      start = work->next;
      i++;
    }
  free_list(start);
  return (work);
}
