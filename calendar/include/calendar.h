/*
** calendar.h for calendar in /home/khoual_s/rendu/Synthese/calendar/include
** 
** Made by Khoualdia Sabri
** Login   <khoual_s@epitech.net>
** 
** Started on  Fri Jul  1 09:58:54 2016 Khoualdia Sabri
** Last update Fri Jul  1 14:35:12 2016 Khoualdia Sabri
*/

typedef struct	s_employee
{
  char			*id;
  char			*last_name;
  char			*first_name;
  char			*position;
  char			*zipcode;
  struct s_employee	*next;
}		t_employee;

typedef struct	s_meeting
{
  int			id;
  int			date;
  char			*place;
  int			zipcode;
  struct s_meeting	*next;
}		t_meeting;

#ifndef CALENDAR_H_
# define CALENDAR_H_

int             my_strcmp(char *, char *);
void            parse_opt(int, char **);
char            *get_file(int);
int             cnt_word(char *, char);
char            **my_strtowordtab(char *, char);
int             my_strlen(char *);
char            *my_strcpy(char *, char *);
char            *my_strdup(char *);
void            print_list(t_employee *);
int		my_strncmp(char *, char *, int);
int		my_strarraylen(char **);
char		**recup_employee(char **);
void            free_list(t_employee *);
t_employee      *fill_employee(char **);

#endif /* !CALENDAR_H_ */
