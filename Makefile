# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/02 15:49:27 by antmanue          #+#    #+#              #
#    Updated: 2026/04/16 16:32:42 by antmanue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#--Variables----------------------------------------------------------------
NAME = push_swap

CC = cc
CFLAGS 		= -Wall -Wextra -Werror -g
INCLUDES 	= -I./includes
LIBFT 		= ./libft/libft.a
PRINTF		= ./ft_printf/libftprintf.a


#--Paths------------------------------------------------------------------

SRC_DIR = src
OBJ_DIR = obj

VPATH   = $(SRC_DIR)
VPATH   += $(SRC_DIR)/parse
VPATH 	+= $(SRC_DIR)/commands
VPATH 	+= $(SRC_DIR)/sort


#--Sources-----------------------------------------------

GENERAL = main.c
COMMANDS = swap.c
COMMANDS += push.c
COMMANDS += rotate.c
COMMANDS += reverse_rotate.c
PARSE = parse.c
PARSE += list_nodes.c
SORT += sorting.c 
SORT += index_tools.c
SORT += radix.c

#BONUS = 

SRC = $(GENERAL)
SRC += $(PARSE)
SRC += $(COMMANDS)
SRC += $(SORT)

OBJ		= $(SRC:%.c=$(OBJ_DIR)/%.o)

#--Rules-----------------------------------------------



all:	$(NAME)

$(LIBFT): 
	$(MAKE)  -C ./libft

$(PRINTF): 
	$(MAKE)  -C ./ft_printf

$(OBJ_DIR):
	mkdir -p obj
	
$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT) $(PRINTF) 
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

#bonus: .bonus

#.bonus:	$(OBJ) ${BONUS_OBJS}
#		ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}
#		@touch .bonus

clean:
		$(RM) $(OBJ) $(BONUS_OBJS) .bonus
		$(MAKE) clean -C ./libft
		
fclean: clean
		$(RM) $(NAME)
		$(MAKE) fclean -C ./libft
		$(MAKE) fclean -C ./ft_printf

re: fclean all

.PHONY: all clean fclean re