/*
** main.c for main in /home/khoual_s/rendu/Synthese/fastatools/srcs
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Sun Jun 19 18:16:47 2016 Khoualdia Sabri
** Last update Fri Jun 24 18:05:09 2016 Khoualdia Sabri
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "fastatools.h"

int	menu_help()
{
  printf("%s\n", "USAGE\n\t./FASTAtools option [k]");
  printf("%s\n", "DESCRIPTION");
  printf("%s ", "\toption 1:read FASTA from the standard input,");
  printf("%s\n", "write the DNA sequences to the standard output");
  printf("%s ", "\t       2:read FASTA from the standard input,");
  printf("%s\n", "write the RNA sequences to the standard output");
  printf("%s ", "\t       3:read FASTA from the standard input,");
  printf("%s\n", "write the reverse complement to the standard output");
  printf("%s ","\t       4:read FASTA from the standard input,");
  printf("%s\n", "write the k-mer list to the standard output");
  printf("%s ","\t       5:read FASTA from the standard input,");
  printf("%s\n", "write the coding sequences list to the standard output");
  printf("%s ","\t       6:read FASTA from the standard input,");
  printf("%s\n", "write the amino acids list to the standard output");
  printf("%s ","\t       7:read FASTA from the sandard input containing");
  printf("%s\n", "exactly 2 sequences, align them");
  printf("%s\n", "\tk      size of the k-mers for option 4");
  exit(0);
}

void	gestion(char **argv, char *str)
{
  if (my_strcmp(argv[1], "-h") == 0)
    menu_help();
  else if (my_strcmp(argv[1], "1") == 0)
    optn_1(str);
  else if (my_strcmp(argv[1], "2") == 0)
    optn_2(str);
  else if (my_strcmp(argv[1], "3") == 0)
    optn_3(str);
  /* if (my_strcmp(argv[1], "4") == 0) */
  /*   optn_4(); */
  else if (my_strcmp(argv[1], "5") == 0)
    optn_5(str);
  /* if (my_strcmp(argv[1], "6") == 0) */
  /*   optn_6(); */
  else
    exit(84);
  exit(0);
}

void	show_tab(char **tab, char **tab2)
{
  int	i = 0;
  while (tab[i] && tab2[i])
    {
      printf("%s\n%s\n", tab[i], tab2[i]);
      i++;
    }
}

int	main(int argc, char **argv)
{
  char	*str;

  if (argc != 2)
    exit(84);
  else
    {
      if (my_strcmp(argv[1], "-h") == 0)
	gestion(argv, NULL);
      else
	{
	  str = get_file(0);
	  gestion(argv, str);
	}
    }
 return (0);
}

