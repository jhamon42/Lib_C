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

SRC = ft_printf_s.c ft_isdigit.c ft_printf_c.c ft_printf_ss.c ft_strequ.c ft_itoa_base.c \
ft_printf_cc.c ft_printf_u.c ft_strlen.c ft_atoi.c ft_memalloc.c ft_printf_i.c \
ft_printf_x.c ft_strncpy.c ft_care_is_me.c ft_memset.c ft_printf_o.c \
ft_printparms.c ft_strsub.c ft_charcmp.c ft_printf.c ft_printf_p.c \
ft_put_wchar.c ft_strupper.c ft_charnumb.c ft_printf_pc.c ft_resetprset.c \
ft_strcmp.c ft_color.c ft_printf_b.c ft_memdel.c\

OBJ = $(SRC:.c=.o)
FLAG = -Wall -Werror -Wextra
NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	@ar -rc $(NAME) $(OBJ)

%.o: %.c
	@gcc -c $(FLAG) $< -o $@ 

clean : 
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
