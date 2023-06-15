# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 17:26:24 by david             #+#    #+#              #
#    Updated: 2023/06/15 11:34:12 by dgomez-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a
SRCS			=	$(shell ls *[^bonus]*.c)
SRCSBONUS		=	$(shell ls *bonus*.c)
OBJS			=	$(SRCS:.c=.o)
OBJSBONUS		=	$(SRCSBONUS:.c=.o)
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror -I.

all				:	$(NAME)
$(NAME)			:	$(OBJS)
					ar rcs $(NAME) $(OBJS)
bonus			:	$(OBJS) $(OBJSBONUS)
					ar rcs $(NAME) $(OBJS) $(OBJSBONUS)
clean			:
					@ rm -fv $(OBJS) $(OBJSBONUS)
fclean			:	clean
					@ rm -fv $(NAME)
re				:	fclean $(NAME)
.PHONY			:	all bonus clean fclean re
