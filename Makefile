# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 11:51:27 by dgomez-b          #+#    #+#              #
#    Updated: 2023/07/13 16:35:25 by dgomez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	$(shell ls *[^bonus]*.c)
OBJS	=	$(SRCS:.c=.o)
BSRCS	=	$(shell ls *bonus*.c)
BOBJS	=	$(BSRCS:.c=.o)
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

all		:	$(NAME)
bonus	:	$(OBJS)
			@ ar rcs $(NAME) $(OBJS) $(BOBJS)
$(NAME)	:	$(OBJS)
			@ ar rcs $(NAME) $(OBJS)
clean	:
			@ rm -fv $(OBJS)
			@ rm -fv $(BOBJS)
fclean	:	clean
			@ rm -fv $(NAME)
re		:	fclean all
.PHONY	:	all $(NAME) clean fclean re
