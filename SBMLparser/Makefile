##
## Makefile for Makefile in /home/khoual_s/rendu/Synthese/SBMLparser
## 
## Made by Khoualdia Sabri
## Login   <khoual_s@epitech.net>
## 
## Started on  Mon Jun 13 11:05:49 2016 Khoualdia Sabri
## Last update Wed Jun 15 18:48:02 2016 Khoualdia Sabri
##

CC	=	gcc -g3

NAME	=	SBMLparser

SRCS	=	srcs/my_function.c \
		requirement.c \
		srcs/open_file.c \
		srcs/parse_file.c \
		srcs/parse_file2.c \
		srcs/epure_str.c \
		srcs/ite.c \
		srcs/other_function.c \
		srcs/cut.c \
		srcs/opt_i.c \
		srcs/my_strdup.c \
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
