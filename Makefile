PUSH_SWAP = push_swap
CHECKER = checker
CFLAGS  = -Wall -Wextra -Werror

CC   = gcc

HEADER  = include/push_swap.h

RM   = rm -f

SRCS	=	push_swap.c

SRCS_B  =   checker.c

OBJS   = ${SRCS:.c=.o}

OBJS_B   = ${SRCS_B:.c=.o}

all:   ${PUSH_SWAP}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(PUSH_SWAP):  $(OBJS)  $(HEADER)
				$(MAKE) -C ./libft
				$(CC) $(OBJS) $(CFLAGS) -o $(PUSH_SWAP)

$(CHECKER) :	$(OBJS_B)
				$(CC) $(OBJS_B) $(CFLAGS)-o $(CHECKER)

bonus:  ${PUSH_SWAP} ${CHECKER}

clean:
	${RM} ${OBJS} ${OBJS_B}

fclean:  clean
		${RM} ${PUSH_SWAP} ${CHECKER}

re:   fclean all

.PHONY:  all clean fclean re
