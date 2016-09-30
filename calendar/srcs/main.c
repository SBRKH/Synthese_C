/*
** main.c for main in /home/khoual_s/rendu/Synthese/calendar/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Fri Jul  1 09:50:17 2016 Khoualdia Sabri
** Last update Fri Jul  1 14:32:35 2016 Khoualdia Sabri
*/

#include <stdio.h>
#include <stdlib.h>
#include "calendar.h"

void	show_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      if (tab[i + 1])
	printf("%s\n", tab[i]);
      else
	printf("%s", tab[i]);
      i++;
    }
}

void	parse_opt(int argc, char **argv)
{
  if (my_strcmp(argv[1], "-h") == 0 && argc == 2)
    {
      printf("%s\n", "USAGE");
      printf("%s\n", "\twrite instruction to the standard output\
until the END instruction");
      exit (0);
    }
  if (argc > 3)
    exit (84);
}

int	main(int argc, char **argv)
{
  char	*str;
  char	**tab;
  t_employee	*list;

  parse_opt(argc, argv);
  str = get_file(0);
  tab = recup_employee(my_strtowordtab(str, '\n'));
  list = fill_employee(tab);
  if (list == NULL)
    printf("MDR");
  print_list(list);
  return (0);
}
