#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rberon-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/14 16:32:28 by rberon-s          #+#    #+#              #
#    Updated: 2019/02/14 16:32:30 by rberon-s         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fdf

CFLAGS = -Wall -Wextra -Werror 

SRCS = *.c

OBJS = *.o

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
	rm -f $(OBJS)
	rm -f libft/$(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all