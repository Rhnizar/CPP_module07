# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 11:21:48 by rrhnizar          #+#    #+#              #
#    Updated: 2023/09/17 20:28:17 by rrhnizar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


Name = exec

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

CXX = c++

RFLAG = ${CXX} -Wall -Werror -Wextra -std=c++98

%.o : %.cpp
	${RFLAG} -c $< -o $@

all : ${Name}

${Name} : ${OBJ} Array.hpp
	${RFLAG} ${OBJ} -o ${Name}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${Name}

re : fclean all
