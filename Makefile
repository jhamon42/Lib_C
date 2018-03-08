# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhamon <jhamon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 16:45:22 by jhamon            #+#    #+#              #
#    Updated: 2017/12/12 16:02:07 by jhamon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_atoi.c ft_isdigit.c ft_memcpy.c ft_strcmp.c ft_strncat.c ft_strstr.c ft_bzero.c ft_isprint.c ft_memmove.c ft_strcpy.c ft_strncmp.c ft_tolower.c ft_isalnum.c ft_memccpy.c ft_memset.c ft_strdup.c ft_strncpy.c ft_toupper.c ft_isalpha.c ft_memchr.c ft_strcat.c ft_strlcat.c ft_strnstr.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_strrchr.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstiter.c ft_lstadd.c ft_lstmap.c
OBJ = $(SRC:.c=.o)
FLAG = -Wall -Werror -Wextra
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJ)
	@gcc -c $(SRC) $(FLAG)
	@ar -rc $(NAME) $(OBJ)

%.o: %.c
	@gcc -c $(FLAG) $< -o $@ 

clean : 
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
