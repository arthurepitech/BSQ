##
## EPITECH PROJECT, 2022
## C Pool
## File description:
## Makefile
##

NAME	=	bsq_bonus

SRC		+=	src/main.c						\
			src/bsq.c						\
			src/init_structure.c			\
			src/get_map.c					\
			src/print_help.c 				\
			src/load_2d_array_from_file.c 	\
			src/load_file_in_mem.c 			\
			src/get_size_of_map.c 			\
			src/mem_alloc_2d_array.c 		\
			src/find_biggest_square.c 		\
			src/is_square_of_size.c 		\
			src/print_bsq.c 				\
			src/generate_map.c 				\
			src/bonus.c 					\

OBJ		+=	$(SRC:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./lib/my/
	cc -o $(NAME) $(OBJ) -I./include -lmy -L./lib

%.o: %.c
	@@cc -g3 -W -Wall -Wextra -o $@ -c $<

unit_tests: fclean all
	cc tests/*.c -o unit_tests -I./include -L./ -lmy --coverage -lcriterion

run_tests: unit_tests
	./unit_tests

clean:
	@@$(shell find . -name "*.o" -delete)
	@@$(shell find . -name "*~" -delete)
	@@$(shell find . -name "\#*\#" -delete)
	@@$(shell find . -name "vgcore.*" -delete)

fclean: clean
	@@rm -f $(NAME)
	$(MAKE) fclean -C lib/my/

re: fclean all clean
	$(MAKE) re -C lib/my/

.PHONY: all clean fclean re
