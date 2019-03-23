# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rberon-s <rberon-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/14 16:32:28 by rberon-s          #+#    #+#              #
#    Updated: 2019/03/23 15:10:28 by rberon-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CFLAGS = -Wall -Wextra -Werror -g

MLXFLAGS = 

SRCS = main.c\

OBJS = $(SRCS:.c=.o)

OBJS = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

MLX		= ./miniLibX/
MLX_LIB	= $(addprefix $(MLX),mlx.a)
MLX_INC	= -I ./miniLibX
MLX_LNK	= -L ./miniLibX -l mlx -framework OpenGL -framework AppKit


all: $(NAME)

$(NAME):
	make -C libft objs
	gcc $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS) libft/*.o
	ranlib $(NAME)

clean:
	rm -rf $(OBJ_DIR)
	rm -f libft/$(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: re, fclean, clean, all
