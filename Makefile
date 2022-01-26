PUSH_SWAP = push_swap
CHECKER = checker
CFLAGS  = -Wall -Wextra -Werror

CC   = gcc

HEADER  = 					include/push_swap.h

RM   = rm -f

SRCS	=					push_swap.c 			./src/check_error_part1.c	./src/check_error_part2.c	\
							./src/commandos_part1.c	./src/commandos_part2.c		./src/commandos_part3.c		\
							./src/find_mark.c		./src/ft_atoi.c				./src/ft_free_arr.c			\
							./src/ft_isdigit.c		./src/ft_split.c			./src/ft_strlen.c			\
							./src/init.c			./src/parse_input.c			./src/sort_3.c				\
							./src/sort_5.c			./src/sort_utils.c			./src/sort_utils2.c			\
							./src/commandos_part4.c

SRCS_B  =   checker.c

OBJS   = ${SRCS:.c=.o}

OBJS_B   = ${SRCS_B:.c=.o}

all:   ${PUSH_SWAP}


.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(PUSH_SWAP):  $(OBJS)  $(HEADER)
				$(CC) $(OBJS) $(CFLAGS) -o $(PUSH_SWAP)

$(CHECKER) :	$(OBJS_B)
				$(CC) $(OBJS_B) $(CFLAGS)-o $(CHECKER)

bonus:  ${PUSH_SWAP} ${CHECKER}

clean:
	${RM} ${OBJS} ${OBJS_B}

fclean:  clean
		${RM} ${PUSH_SWAP} ${CHECKER}

re:   fclean all

test1:
		./test.sh

.PHONY:  all clean fclean re
