# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 11:30:01 by jroux-fo          #+#    #+#              #
#    Updated: 2022/01/10 11:34:10 by jroux-fo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_FILES =		

SRCS_BONUS_FILES =	

OBJS_FILES =		${SRCS:.c=.o}

OBJ_BONUS	=		${SRCS_BONUS:.c=.o}

HEADER_FILES		=	-I$(HEADER_PATH)

HEADER_PATH		= 		/header

HEADER_NAME		=	minitalk.h

SRCS_PATH =		/srcs


CC		=	gcc

FLAGS		=	-Wall -Wextra -Werror

RM		=	rm -rf

HEADER		=	minitalk.h

NAME		=	a definir

HEADER		=	$(addprefix $(HEADER_PATH)/, $(HEADER_NAME))

SRCS		=	$(addprefix $(SRCS_PATH)/, $(SRCS_FILES))

SRCS_BONUS		=	$(addprefix $(SRCS_PATH)/, $(SRCS_BONUS_FILES))



all		:	$(NAME)


$(NAME)		:	$(OBJS_FILES) $(HEADER)
			ar rc $(NAME) $(OBJS_FILES)

%.o		:	%.c
			$(CC) $(FLAGS) $(HEADER_FILES) -c $< -o $@



bonus		:		$(OBJ_BONUS) $(OBJ) $(INC)
				ar rc $(NAME) $(OBJ_BONUS)
clean:
			${RM} ${OBJS_FILES} ${OBJ_BONUS}

fclean:		clean
			${RM} ${NAME}

re :		fclean all

.PHONY:		all clean fclean re bonus