# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdeutsch <sdeutsch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 17:42:07 by sdeutsch          #+#    #+#              #
#    Updated: 2024/06/06 17:51:01 by sdeutsch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone
SRCS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
		$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean :
	rm -rf $(NAME)

re : fclean all