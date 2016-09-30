/*
** fastatools.h for fastatools in /home/khoual_s/rendu/Synthese/FASTAtools/include
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Mon Jun 20 11:37:35 2016 Khoualdia Sabri
** Last update Tue Jun 21 17:25:40 2016 Khoualdia Sabri
*/

#ifndef FASTATOOLS_H_
# define FASTATOOLS_H_

/*
** GET_FILE
*/

char	*get_file(const int);

/*
** MY_FUNCTION
*/

int	my_strlen(char *);
char	*my_strcpy(char *, char *);
char	my_strupcase(char);
int	my_strcmp(char *, char *);
char	*my_revstr(char *);

/*
** OPTION 1
*/

int	how_chev(char *);
int	strlen_id(char *);
char	**create_id(char *);
int	low_letters(char);
int	up_letters(char);
int	strlen_seq(char *);
char	**create_seq(char *);
int	optn_1(char *);

/*
** OPTION 2
*/

char	**replace_t(char **);
int	optn_2(char *);;
void	aff_tab(char **);

/*
** OPTION 3
*/

char	**replace_rna(char **);
int	optn_3(char *);

/*
** OPTION 5
*/

int	my_strarraylen(char **);
int	optn_5(char *);
int	seq_end(char *);
char	**search(char **);
int	my_pow(int, int);
int	cnt_nb(int);
int	mul_3(int);

/*
** MAIN
*/

int	menu_help();
void	gestion(char **, char *);
void	show_tab(char **, char **);

#endif /* !FASTATOOLS_H_ */
