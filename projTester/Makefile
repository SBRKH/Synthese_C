##
## Makefile for Makefile in /home/khoual_s/rendu/Synthese/projTester
## 
## Made by Khoualdia Sabri
## Login   <khoual_s@epitech.net>
## 
## Started on  Wed Jun 22 11:06:26 2016 Khoualdia Sabri
## Last update Sat Jun 25 16:09:46 2016 Khoualdia Sabri
##

CC	=	gcc

NAME	=	projTester

SRCS	=	srcs/my_function.c \
		srcs/get_system_path.c \
		srcs/find_path.c \
		srcs/pop.c \
		srcs/my_strtowordtab.c \
		srcs/modif_output.c \
		srcs/get_file.c \
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

.PHONY	:	fclean clean re all
