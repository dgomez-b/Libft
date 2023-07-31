# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 11:51:27 by dgomez-b          #+#    #+#              #
#    Updated: 2023/07/31 14:58:47 by dgomez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
BNAME	=	chk
SRCS	=	atoi.c \
			bzero.c \
			calloc.c \
			isalnum.c \
			isalpha.c \
			isascii.c \
			isdigit.c \
			isprint.c \
			itoa.c \
			memchr.c \
			memcmp.c \
			memcpy.c \
			memmove.c \
			memset.c \
			putchar_fd.c \
			putendl_fd.c \
			putnbr_fd.c \
			putstr_fd.c \
			split.c \
			strchr.c \
			strdup.c \
			striteri.c \
			strjoin.c \
			strlcat.c \
			strlcpy.c \
			strlen.c \
			strmapi.c \
			strncmp.c \
			strnstr.c \
			strrchr.c \
			strtrim.c \
			substr.c \
			tolower.c \
			toupper.c
OBJS	=	$(SRCS:.c=.o)
BSRCS	=	ft_lstadd_back_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstmap_bonus.c \
			ft_lstnew_bonus.c \
			ft_lstsize_bonus.c
BOBJS	=	$(BSRCS:.c=.o)
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all			:	$(NAME)
$(NAME)		:	$(OBJS)
				@ ar rcs $(NAME) $(OBJS)
bonus		:	$(BNAME)
$(BNAME)	:	$(OBJS) $(BOBJS)
				@ ar rcs $(NAME) $(OBJS) $(BOBJS)
				@ touch $(BNAME)
clean		:
				@ rm -fv $(OBJS)
				@ rm -fv $(BOBJS)
				@ rm -fv $(BNAME)
fclean		:	clean
				@ rm -fv $(NAME)
re			:	fclean all
.PHONY		:	all bonus clean fclean re
