# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: RAUL <RAUL@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/09 17:07:17 by rgarcia-          #+#    #+#              #
#    Updated: 2021/03/15 12:27:11 by RAUL             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

HEADER	=	libft.h

SRCS	=	ft_memset.c					\
			ft_bzero.c					\
			ft_memcpy.c					\
			ft_memccpy.c				\
			ft_memmove.c				\
			ft_memchr.c					\
			ft_memcmp.c					\
			ft_strlen.c					\
			ft_strlcpy.c				\
			ft_strlcat.c				\
			ft_strchr.c					\
			ft_strrchr.c				\
			ft_strnstr.c				\
			ft_strncmp.c				\
			ft_atoi.c					\
			ft_isalpha.c				\
			ft_isdigit.c				\
			ft_isalnum.c				\
			ft_isascii.c				\
			ft_isprint.c				\
			ft_toupper.c				\
			ft_tolower.c				\
			ft_calloc.c					\
			ft_strdup.c					\
			ft_substr.c					\
			ft_strjoin.c				\
			ft_strtrim.c				\
			ft_split.c					\
			ft_itoa.c					\
			ft_strmapi.c				\
			ft_putchar_fd.c				\
			ft_putstr_fd.c				\
			ft_putendl_fd.c				\
			ft_putnbr_fd.c				\

BONUS	=	ft_lstnew.c					\
			ft_lstadd_front.c			\
			ft_lstsize.c				\
			ft_lstlast.c				\
			ft_lstadd_back.c			\
			ft_lstdelone.c				\
			ft_lstclear.c				\
			ft_lstiter.c				\
			ft_lstmap.c					\

OBJS	=	$(SRCS:.c=.o)

OBJS_B	=	$(BONUS:.c=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
		@ar -rcs $(NAME) $(OBJS)

bonus	:	$(OBJS) $(OBJS_B)
		@ar -rcs $(NAME) $(OBJS) $(OBJS_B)

%.o:%.c	$(HEADER)
		@gcc -Wall -Wextra -Werror -o $@ -c $< -I $(HEADER)

clean	:
		@/bin/rm -f $(OBJS) $(OBJS_B)

fclean	:	clean
		@/bin/rm -f $(NAME)

re		:	fclean all