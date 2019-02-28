#include "header.h"

void    output(void)
{
    FILE *fp;

    fp = fopen("./slideshow.txt", "w");
    fprintf(fp, "3\n1 2\n0\n3\n");
    fclose(fp);
}

int main()
{
    output();
}