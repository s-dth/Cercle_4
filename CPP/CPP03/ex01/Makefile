# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/21 18:58:42 by sdeutsch          #+#    #+#              #
#    Updated: 2024/06/21 20:16:06 by sdeutsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = scavtrap
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