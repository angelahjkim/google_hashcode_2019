
#include "header.h"

int ft_assign_line(char **line, char **str, int fd, int ret)
{
    int len;
    char *tmp;

    len = 0;
    while(str[fd][len] != '\n' && str[fd][len] != '\0')
        len++;
    if (str[fd][len] == '\n')
    {
        *line = ft_strsub(str[fd], 0, len);
        tmp = strdup(str[fd] + len + 1);
        free(str[fd]);
        str[fd] = tmp;
    }
    else if(str[fd][len] == '\0')
    {
        if (ret == BUFF_SIZE)
            return (get_next_line(fd, line));
        *line = strdup(str[fd]);
        ft_strdel(&str[fd]);
    }
    return (1);
}

int     ft_read_line(int fd, char *buff, char **str)
{
    int ret;
    char *tmp;

    while((ret = read(fd, buff, BUFF_SIZE)) > 0)
    {
        buff[ret] = '\0';
        tmp = ft_strjoin(str[fd], buff);
        free(str[fd]);
        str[fd] = tmp;
        if (strchr(buff, '\n'))
            break ;
    }
    return (ret);
}

int get_next_line(const int fd, char **line)
{
    static char *str[255];
    char        buff[BUFF_SIZE + 1];
    int         ret;

    if (fd < 0 || !line || read(fd, buff, 0) < 0)
        return (-1);
    if (str[fd] == NULL)
        str[fd] = ft_strnew(1);
    ret = ft_read_line(fd, buff, str);
    if (ret < 0)
        return (-1);
    else if (ret == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
        return (0);
    return(ft_assign_line(line, str, fd, ret));
}