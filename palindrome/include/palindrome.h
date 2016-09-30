/*
** palindrome.h for palindrome in /home/khoual_s/rendu/Synthese/palindrome/include
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Thu Jun 16 09:20:32 2016 Khoualdia Sabri
** Last update Sat Jun 18 18:46:02 2016 Khoualdia Sabri
*/

#ifndef PALINDROME_H_
# define PALINDROME_H_

/*
** MY_FUNCTION
*/

int	my_strlen(char *);
char	*my_revstr(char *);
int	my_strcmp(char *, char *);
int	my_pow(int ,int);
int	cnt_nb(int, int);

/*
** OTHER_FUNCTION
*/

int	is_num(char *);
char	*epure_zero(char *);
char	*my_convert_base(int, int);
int	convert_dec(int, int);

/*
** DISP_ERR
*/

void	inv_arg(void);
void	no_sol(void);
void	over(void);

/*
** PALINDROME
*/

int	number_iteration(char *, int);
int	find_palindrome(char *, int);

/*
** ERROR_MANAGEMENT
*/

int	error_management(char **);
void	error_bis(char **, int, char *);
void	error_third(char **, int, char *);
void	error_fourth(char **, int, char *);

void	disp(char *);
void	decoup(int, int, char *, int);
void	disp_p(char *, int, int, int);
int	optn_p(char *, int);
#endif /* !PALINDROME_H_ */
