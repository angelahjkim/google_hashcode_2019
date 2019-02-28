
#include "header.h"
#include <string.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int fd;
    int ret;
    char buff[BUFF_SIZE + 1];
    int count;

    i = 0;
    j = 0;
    count = 0;
    if (argc == 2)
    {
        fd = open(argv[1], O_RDONLY);
        while ((ret = read(fd, buff ,BUFF_SIZE)) > 0)
        {
            buff[ret] = '\0';
            fill_dataset(buff);
            if (strchr(buff,'\n'))
            {
                
                printf("found it\n");
                count++;
            }
        }
        printf("%d\n",count);
    }
    else
    {
        printf("Please input a photo file\n");
    }
//    file_read();
    
    return 0;

}