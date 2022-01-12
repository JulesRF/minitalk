# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 11:30:01 by jroux-fo          #+#    #+#              #
#    Updated: 2022/01/12 15:18:03 by jroux-fo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT_SRCS_FILES	=		main_client.c \
							client_utils.c

SERVER_SRCS_FILES	=		main_server.c

FT_PRINTF			=	ft_printf/libftprintf.a

#SRCS_BONUS_FILES	=	insh

CLIENT_OBJS_FILES =		${CLIENT_SRCS:.c=.o}

SERVER_OBJS_FILES =		${SERVER_SRCS:.c=.o}

OBJ_BONUS	=		${SRCS_BONUS:.c=.o}

CLIENT_HEADER_FILES		=	-I$(CLIENT_HEADER_PATH)

SERVER_HEADER_FILES		=	-I$(SERVER_HEADER_PATH)

CLIENT_HEADER_PATH		= 		header_client

SERVER_HEADER_PATH		=		header_server

CLIENT_HEADER_NAME		=	client_minitalk.h

SERVER_HEADER_NAME		=	server_minitalk.h

CLIENT_SRCS_PATH =		srcs_client

SERVER_SRCS_PATH =		srcs_server


CC		=	gcc

FLAGS		=	-Wall -Wextra -Werror

RM		=	rm -rf

CLIENT_HEADER		=	client_minitalk.h

SERVER_HEADER		=	server_minitalk.h

CLIENT_NAME		=	client

SERVER_NAME		=	server

CLIENT_HEADER		=	$(addprefix $(CLIENT_HEADER_PATH)/, $(CLIENT_HEADER_NAME))

SERVER_HEADER		=	$(addprefix $(SERVER_HEADER_PATH)/, $(SERVER_HEADER_NAME))

CLIENT_SRCS		=	$(addprefix $(CLIENT_SRCS_PATH)/, $(CLIENT_SRCS_FILES))

SERVER_SRCS		=	$(addprefix $(SERVER_SRCS_PATH)/, $(SERVER_SRCS_FILES))

SRCS_BONUS		=	$(addprefix $(SRCS_PATH)/, $(SRCS_BONUS_FILES))



all		:	client server


client	:	#$(CLIENT_OBJS_FILES)
			$(CC) $(FLAGS) -o $(CLIENT_NAME) $(CLIENT_SRCS) $(FT_PRINTF)

server	:	#$(SERVER_OBJS_FILES)
			$(CC) $(FLAGS) -o $(SERVER_NAME) $(SERVER_SRCS) $(FT_PRINTF)

%.o		:	%.c
			$(CC) $(FLAGS) $(HEADER_FILES) -c $< -o $@

clean:
			${RM} ${CLIENT_OBJS_FILES} ${SERVER_OBJS_FILES} ${OBJ_BONUS}

fclean:		clean
			${RM} ${CLIENT_NAME} ${SERVER_NAME}

re :		fclean all

.PHONY:		client server all clean fclean re bonus