SRCS	= ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_split.c  \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c

BONUS = ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstnew.c \
			ft_lstsize.c 

NAME		=	libft.a
OBJS		=	${SRCS:%.c=%.o}
OBJS_BONUS	= ${BONUS:%.c=%.o}
CC			=	clang
CFLAGS		=	-Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
			$(AR) rc $(NAME) $(OBJS)

%.o : %.c
			$(CC) $(CFLAGS) -c $< -o $@

bonus:	$(NAME) $(OBJS_BONUS)
			$(AR) rc $(NAME) $(OBJS_BONUS)
clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:	clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:	clean re all fclean 
