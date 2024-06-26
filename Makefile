# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lilmende <lilmende@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 15:34:39 by lilmende          #+#    #+#              #
#    Updated: 2023/11/08 18:32:23 by lilmende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_memchar \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strdup \
		ft_calloc \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_toupper \
		ft_tolower \
		ft_strchr \
		ft_strrchr \
		ft_strncmp \
		ft_strnstr \
		ft_atoi \
		ft_substr \
		ft_itoa \
		ft_strjoin \
		ft_strtrim \
		ft_striteri \
		ft_split \
		ft_strmapi \

FILES_B = ft_lstnew \
		ft_lstadd_front \
		ft_lstadd_back \
		ft_lstsize \
		ft_lstlast \
		ft_lstdelone \
		ft_lstclear \
		ft_lstiter \
		ft_lstmap \

SRCS_DIR =
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR =
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

ifdef WITH_BONUS
	FILES += $(FILES_B)
endif

all: $(NAME)

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<
$(NAME): $(OBJS)
	$(AR) $@ $?
	@printf "Compiled\n"

bonus:
	@$(MAKE) WITH_BONUS=TRUE --no-print-directory

clean:
	@$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	@$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
