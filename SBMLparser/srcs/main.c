/*
** main.c for main in /home/khoual_s/rendu/Synthese/SBMLparser
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 13 11:50:12 2016 Khoualdia Sabri
** Last update Wed Jun 15 20:39:33 2016 Khoualdia Sabri
*/

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "my.h"
#include "sbmlparser.h"

int	menu_help()
{
  printf("%s\n", "USAGE");
  printf("%s\n", "\t./SBMLparser SBMLfile [i ID [-e]] [-json]");
  printf("%s\n", "\nDESCRIPTION\n");
  printf("%s\n", "\tSBMfile\tSBML file");
  printf("%s ", "\t-i ID\tid of the compartment, reaction");
  printf("%s\n", "or product to be extracted (ignored if uncorrect)");
  printf("%s ", "\t-e\tprint the equation if a reaction ID i given as");
  printf("%s\n", "argument (ignored othervise)");
  printf("%s\n", "\t-json\ttransform the fle into a JSON file");
  exit(EXIT_SUCCESS);
}

void	step_one(char *str)
{
  char	**tab;
  char	**taab;

  tab = parse_tags(who_is_important(str_to_wordtab(str, '\n')));
  taab = final_parse(sorts_tab(check_double(tab)));
  cut(taab);
}

int	its_exits(char **argv)
{
  int	i;

  i = 2;
  while (argv[i])
    {
      if (my_strcmp(argv[i], "-i") != 0 && my_strcmp(argv[i], "-json") != 0 &&
	  my_strcmp(argv[i], "-h") != 0 && my_strcmp(argv[i], "-e") != 0)
	return (1);
      i++;
    }
  return (0);
}

int	error_management(char **argv, int argc)
{
  if (its_exits(argv) == 1)
      exit(84);
  if (my_strcmp(argv[1], "-h") == 0 && argc == 2)
    menu_help();
  if (my_strcmp(argv[2], "-i") == 0 && argc == 3)
    {
      write(2, "Bad usage of \"-i\".\n", 19);
      exit(84);
    }
  if (access(argv[1], F_OK) != 0)
    {
      write(2, "Cannot access file.\n", 20);
      exit(84);
    }
  if (my_strcmp(&argv[1][my_strlen(argv[1] - 5)], ".sbml") < 0)
    {
      write(2, "Wrong format file.\n", 19);
      exit(84);
    }
  return (0);
}

int	main(int argc, char **argv)
{
  int	fd;
  char	*str;

  if (argc == 1)
    {
      write(2, "BASIC USAGE: ./SBMLparser SBMLFile\n", 35);
      exit(84);
    }
  else
    {
      error_management(argv, argc);
      if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
	  write(2, "Cannot open file.\n", 18);
	  exit(84);
	}
      str = get_file(fd);
      if (argc == 2)
	step_one(str);
      is_it_i(argv, str);
    }
  return (0);
}
