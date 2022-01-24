# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/10 11:30:01 by jroux-fo          #+#    #+#              #
#    Updated: 2022/01/20 15:31:17 by jroux-fo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CLIENT = client

NAME_SERVER = server

PRINTF = libftprintf.a

PRINTF_PATH = ft_printf

CLIENT_SRCS_FILES	=		main_client.c \
							client_utils.c \

SERVER_SRCS_FILES	=		main_server.c \
							server_utils.c \

FT_PRINTF			=	ft_printf/libftprintf.a

FLAGS = -Wall -Werror -Wextra# -g3 -fsanitize=address
#CLIENT_SRC_FILES = $(addprefix srcs_client/,$(CLIENT_SRCS_FILES))

INCLUDES = header

PATH_CLIENT = srcs_client

PATH_SERVER = srcs_server

OBJ_DIR = obj

OBJ_S = $(addprefix $(OBJ_DIR)/,$(SERVER_SRCS_FILES:.c=.o))
OBJ_C = $(addprefix $(OBJ_DIR)/,$(CLIENT_SRCS_FILES:.c=.o))

all: $(NAME_CLIENT) $(NAME_SERVER)

$(PRINTF): 
	@printf "Compiling $@ ...\n"
	@(cd $(PRINTF_PATH) && $(MAKE))
	@cp $(PRINTF_PATH)/$(PRINTF) .

$(OBJ_DIR)/%.o: $(PATH_CLIENT)/%.c
	@mkdir -p $(OBJ_DIR)
	@printf "Compiling $< ...\n"
	@gcc $(FLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME_CLIENT): $(OBJ_C) $(PRINTF)
	@gcc $(FLAGS) -I $(INCLUDES) $(OBJ_C) $(FT_PRINTF) -o $(NAME_CLIENT)
	@printf "Executable $@ created !\n"
	
$(OBJ_DIR)/%.o: $(PATH_SERVER)/%.c
	@mkdir -p $(OBJ_DIR)
	@printf "Compiling $< ...\n"
	@gcc $(FLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME_SERVER): $(OBJ_S) $(PRINTF)
	@gcc $(FLAGS) -I $(INCLUDES) $(OBJ_S) $(FT_PRINTF) -o $(NAME_SERVER)
	@printf "Executable $@ created !\n"

clean:
	@printf "Deleting objects\n"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@printf "Deleting executables\n"
	@rm -rf $(NAME_CLIENT) $(NAME_SERVER) $(PRINTF)
	@cd $(PRINTF_PATH) && $(MAKE) $@

re: fclean all

.PHONY:		all clean fclean re