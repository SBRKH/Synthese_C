/*
** main.c for main in /home/khoual_s/rendu/Synthese/projTester/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 22 15:27:52 2016 Khoualdia Sabri
** Last update Sat Jun 25 16:15:24 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <fcntl.h>
#include "projtester.h"

void	show_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      if (tab[i + 1])
	{
	  printf("%s\n", tab[i]);
	}
      else
	printf("%s", tab[i]);
      i++;
    }
}

void	gestion(int argc, char **argv,char **env, char *str)
{
  char	**tab;
  char	**lel;

  tab = my_strtowordtab(str, '\n');
  lel = change(tab);
  if (argc == 2)
    show_tab(lel);
  else if (argc == 3)
    its_the_same(argv, env);
  else
    exit(84);
}

int     main(int argc, char **argv, char **env)
{
  int   fd;
  char	*str;

  if (argc < 2 || argc > 4)
    {
      write(2, "bad argument\n", 13);
      exit(84);
    }
  if (opendir(argv[1]) == NULL)
    {
      write(2, "cannot open directory\n", 22);
      exit(84);
    }
  pop(argv[1]);
  if ((fd = open("tmp.txt", O_RDONLY)) == -1)
    exit(84);
  if ((str = get_file(fd)) == NULL)
    return (84);
  gestion(argc, argv, env, str);
  if (close(fd) == -1)
    exit(84);
  return (0);
}
