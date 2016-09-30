/*
** sbmlparser.h for sbmlparser in /home/khoual_s/rendu/Synthese/SBMLparser
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 13 11:58:47 2016 Khoualdia Sabri
** Last update Wed Jun 15 20:15:40 2016 Khoualdia Sabri
*/

#ifndef SBMLPARSER_H_
# define SBMLPARSER_H_

#include <stdio.h>
#include <stdlib.h>

int	is_alpha(char);
int	cnt_words(char *);
void	cutting_str(char *, int, char **);
char	**my_strtowordtab_synthesis(char *);

char	*get_file(const int);
int	count_word_backspace(char *, char);
char	**str_to_wordtab(char *, char);


void	cut(char **);
int	is_space(char *);
int	my_strncmp(char *, char *, int);
void	recup_info(char **);
char	**sors_tab_mod(char **);

char	*epure_str(char *);
int	strarraylen(char **);
char	**who_is_important(char **);
int	count_space(char **);
char	**parse_tags(char **);
int	find_end_in_str(char *);
char	**check_double(char **);
char	**sorts_tab(char **);
char	***epure_again(char **);
int	mal_final_parse(char **);
char	**final_parse(char **);
void	aff_tab(char **);

int	error_management(char **, int);
void	step_one(char *);
int	menu_help();
int	find_quote(char **, int, int);
char	*norms(char **, char **, int);

void	is_it_i(char **, char *);
char	**opt_i(char **);
char	**is_it_species(char **);
char	**recup_true_line(char **, char *);
char	*norms_quote(char **, char **, int);
char	**bye_quote(char **);

#endif /* !SBMLPARSER_H_ */
