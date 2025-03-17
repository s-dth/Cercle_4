# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/14 16:27:36 by sdeutsch          #+#    #+#              #
#    Updated: 2024/06/17 16:54:54 by sdeutsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = zombie
SRCS = *.cpp
HEADERS = *.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADERS)
		$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean all