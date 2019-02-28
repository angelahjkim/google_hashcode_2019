
#include "header.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;
    int flag;
    int photos;
      
	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	while (get_next_line(fd, &line) == 1)
	{
		printf("%s\n",line);
        if(!flag){
            printf("first line, so check no. of photos\n");
            photos = atoi(line);
            printf("number of photos found %d\n", photos);
            flag++;
        }
        else
        {


        }
		free(line);
	}
	if (argc == 2)
		close(fd);
}