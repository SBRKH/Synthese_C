##
## Makefile for Makefile in /home/khoual_s/rendu/Synthese/fastatools
## 
## Made by Khoualdia Sabri
## Login   <khoual_s@epitech.net>
## 
## Started on  Sun Jun 19 17:53:10 2016 Khoualdia Sabri
## Last update Tue Jun 21 17:27:16 2016 Khoualdia Sabri
##

CC	=	gcc

NAME	=	FASTAtools

SRCS	=	srcs/my_function.c \
		srcs/get_file.c \
		srcs/opt1/get_seq.c \
		srcs/opt1/get_adn.c \
		srcs/opt1/optn_1.c \
		srcs/opt2/replace_t.c \
		srcs/opt2/optn_2.c \
		srcs/opt3/replace_rna.c \
		srcs/opt3/optn_3.c \
		srcs/opt5/optn_5.c \
		srcs/opt5/mul_3.c \
		srcs/opt5/search.c \
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

.PHONY	:	fclean clean all re

