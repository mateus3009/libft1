# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/29 22:28:00 by msales-a          #+#    #+#              #
#    Updated: 2020/05/30 12:27:22 by msales-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

DIRECTORY = .

HEADERS = $(shell find $(DIRECTORY) -name '*.h')

SOURCES = $(shell find $(DIRECTORY) -name '*.c')

OBJECTS = $(SOURCES:.c=.o)

LIBRARY = ../libft.a

all: $(NAME)

$(NAME) : $(OBJECTS) $(HEADERS)
	@gcc -Wall -Wextra -Werror -g $(OBJECTS) $(LIBRARY) -o $(NAME)
	@./$(NAME)

%.o: %.c
	@gcc -Wall -Wextra -Werror -g -c $< -o $@

clean : 
	@rm -f $(OBJECTS)

fclean :
	@rm -f $(NAME)

re : clean all