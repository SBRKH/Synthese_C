/*
** requirement.c for requirement in /home/khoual_s/rendu/Synthese/calendar
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Thu Jun 30 10:07:01 2016 Khoualdia Sabri
** Last update Fri Jul  1 09:59:24 2016 Khoualdia Sabri
*/

#include <stdlib.h>

typedef struct	s_list
{
  void		*data;
  struct s_list	*next;
}		t_list;

int	my_revlist_synthesis(t_list **begin)
{
  t_list	*tmp;
  t_list	*act;
  t_list	*next;

  tmp = NULL;
  next = NULL;
  if (begin != NULL)
    act = *begin;
  while (act)
    {
      next = act->next;
      act->next = tmp;
      tmp = act;
      act = next;
    }
  *begin = tmp;
  return (0);
}

t_list	*my_findnodeeqinlist_synthesis(t_list *begin, void *data_ref, 
				       int (*cmp) (void*, void *))
{
  while (begin && cmp(begin->data, data_ref))
    begin = begin->next;
  return (begin);
}
