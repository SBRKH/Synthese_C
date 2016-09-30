##
## Makefile for Makefile in /home/khoual_s/rendu/Synthese/Pala
## 
## Made by Khoualdia Sabri
## Login   <khoual_s@epitech.net>
## 
## Started on  Thu Jun 16 09:01:51 2016 Khoualdia Sabri
## Last update Fri Jun 17 17:47:13 2016 Khoualdia Sabri
##

CC	=	gcc

NAME	=	palindrome

SRCS	=	requirement.c \
		srcs/my_function.c \
		srcs/other_function.c \
		srcs/disp_err.c \
		srcs/error_management.c \
		srcs/palindrome.c \
		srcs/main.c

OBJS	=	$(SRCS:.c=.o)

RM	=	rm -f

CFLAGS	+=	-W -Wall -Wextra -Werror -I./include

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	re fclean clean all
 
