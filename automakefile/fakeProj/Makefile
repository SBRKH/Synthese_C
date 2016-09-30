##
## Makefile for Makefile in /home/khoual_s/rendu/Synthese/automakefile/fakeProj
##
## Made by khoual_s
## Login   <khoual_s@epitech.eu>
##
## Started on mer. 29 juin 2016 15:03:25 CEST khoual_s
## Last update mer. 29 juin 2016 15:03:25 CEST khoual_s
##

EXEC		=	fakeProj

PROJECT_DIR	=	fakeProj

CC		=	clang

SOURCES_DIR	=	.

CFLAGS		+=	-I./$(HEADERS_DIR) -ftest-coverage -O2

HEADERS_DIR	=	include

LIBS_DIR	=	libs

BCK_DIR		=	fakeProj_backUp

ZIP		=	tar

ZIPFLAGS	=	-cvvf

UNZIP		=	tar

UNZIPFLAGS	=	-xvf

SRCS		=	$(SOURCES_DIR)/main.c \
			$(SOURCES_DIR)/calc.c \
		
INCLUDE		=	$(HEADERS_DIR)/fakeProj.h \
			$(HEADERS_DIR)/calc/calc.h \
		
RM		=	rm -f

OBJS		=	$(SRCS:.c=.o)

all	:	$(EXEC)

$(EXEC)	:	$(OBJS)
		$(CC) $(CFLAGS) $(LDFLAGS) $(OBJS) -o $(EXEC) -L $(LIBS_DIR)
clean	:
		$(RM) $(EXEC)

fclean	:	clean
		$(RM) $(OBJS)

re	:	fclean all

archive	:
		$(ZIP) $(ZIPFLAGS) $(BCK_DIR)/backup.$(ZIP) $(SRCS)
		@echo $(EXEC).$(ZIP) file generated.

revert	:
		$(UNZIP) $(UNZIPFLAGS) $(BCK_DIR)/backup.$(ZIP)

num	:
		@echo version 1.0

delete	:
		rm -rf $(BCK_DIR)/backup.$(ZIP)

.PHONY	:	fclean clean all re
