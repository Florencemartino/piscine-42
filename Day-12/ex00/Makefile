# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpham <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/11 17:03:40 by cpham             #+#    #+#              #
#    Updated: 2019/04/11 17:03:53 by cpham            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRC = srcs/*.c
HEADER = includes

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -I $(HEADER) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean

re: fclean al
