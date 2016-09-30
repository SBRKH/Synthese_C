##
## Makefile for Makefile in /home/khoual_s/rendu/Synthese/calendar
## 
## Made by Khoualdia Sabri
## Login   <khoual_s@epitech.net>
## 
## Started on  Fri Jul  1 09:47:50 2016 Khoualdia Sabri
## Last update Fri Jul  1 13:36:51 2016 Khoualdia Sabri
##

CC	=	gcc

NAME	=	calendar

SRCS	=	srcs/my_function.c \
		srcs/get_file.c \
		srcs/parse.c \
		srcs/main.c

OBJS	=	$(SRCS:.c=.o)

RM	=	rm -f

CFLAGS	+=	-W -Wall -Wextra -Werror -I./include

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean	:
		$(RM) $(NAME)

fclean	:	clean
		$(RM) $(OBJS)

re	:	fclean all

.PHONY	:	re fclean clean all
