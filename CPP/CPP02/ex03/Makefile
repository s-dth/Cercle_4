# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 16:00:56 by sdeutsch          #+#    #+#              #
#    Updated: 2024/06/21 17:23:21 by sdeutsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = triangle
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