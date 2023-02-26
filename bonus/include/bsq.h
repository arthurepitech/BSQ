/*
** EPITECH PROJECT, 2022
** Bootstrap
** File description:
** bsq
*/

#ifndef BSQ_H_
    #define BSQ_H_

    #include "my.h"
    #include <stddef.h>
    #include <stdlib.h>

    #define BLUE 1
    #define RED 2
    #define GREEN 3
    #define YELLOW 4
    #define PURPLE 5

typedef struct square_s{
    int pos_row;
    int pos_col;
    int biggest_square_size;
    int current_square_size;
} square_t;

typedef struct bsq_s {
    square_t sq;
    char **map;
    int nb_rows;
    int nb_cols;
    char *generation_path;
    int i;
    char empty;
    char obstacle;
    char here;
    int color;
} bsq_t;


int bonus(bsq_t *find_biggest_square ,int ac, char **av);


int bsq(int ac, char **av);
void init_structure(bsq_t *bsq);
int print_help(void);

/*      GET FILE CONTENT        */
int get_map(char *filepath, bsq_t *bsq);

char **load_2d_array_from_file(char const *filepath, bsq_t *bsq);
char *load_file_in_mem(char const *filepath);
int get_size_rows(char *file_content);
int get_size_cols(char *file_content);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);

/*     GET BIGGEST SQUARE      */
int find_biggest_square(bsq_t *bsq);
int is_square_of_size(bsq_t *bsq, int x, int y);

int print_bsq(bsq_t *bsq);

int generate_map(bsq_t *bsq, char **av);
int my_str_is_valid_for_map(char *str);

#endif /* !BSQ_H_ */
