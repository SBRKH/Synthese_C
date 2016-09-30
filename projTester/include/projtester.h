/*
** projtester.c for projtester in /home/khoual_s/rendu/Synthese/projTester/include
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Wed Jun 22 16:27:37 2016 Khoualdia Sabri
** Last update Sat Jun 25 15:33:15 2016 Khoualdia Sabri
*/

#ifndef PROJTESTER_H_
# define PROJTESTER_H_

int	my_strlen(char *);
char	*my_strcat(char *, char *);
int	my_strcmp(char *, char *);
int	cnt_word(char *, char);
char	**my_strtowordtab(char *, char);
char	*get_file(int);
void	pop(char *);
int	my_strarraylen(char **);
char	**change(char **);
char	*remove_first(char *);
char	**find_path(char **);
int	five_dash(char **);
int	err();
int	my_strncmp(char *, char*, int);
void	show_tab(char **);
void	gestion(int, char **, char **, char *);
char	**get_system_path(char **);
void	its_the_same(char **, char **);
int	count_dash(char *);
int	find_stars(char **, char *);
void	findorrredirect(char **, char **, char **);

#endif /* !PROJTESTER_H_ */
