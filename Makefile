# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 11:51:27 by dgomez-b          #+#    #+#              #
#    Updated: 2023/07/26 18:40:36 by dgomez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
BNAME	=	chk
SRCS	=	$(shell ls *[^bonus].c)
OBJS	=	$(SRCS:.c=.o)
BSRCS	=	$(shell ls *bonus*.c)
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
