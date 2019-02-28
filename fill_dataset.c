#include "header.h"

void    fill_dataset(char *input)
{
    t_dataset ds;

    ds.num_photos = atoi(input);
    printf("first char: %c\n", input[0]);
    printf("photos %d\n",ds.num_photos);
}