
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#define BUFF_SIZE 1

typedef struct s_dataset
{
    int num_photos;
    char **photo;
    char orient;
    int num_tags;
    char **tags;

}       t_dataset;

typedef struct  s_slide
{
    char orient;
    int photo1;
    int photo2;
    int num_tags;
    char **tags;
}   t_slide;

void    fill_dataset(char *input);
int     get_interestval(t_slide s1, t_slide s2);
int     get_next_line(const int fd, char **line);
char	*ft_strnew(size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
void	ft_strdel(char **as);
void    fill_slides(void);