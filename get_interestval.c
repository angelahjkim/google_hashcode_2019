#include "header.h"

int     lowest(int shared, int s1, int s2)
{
    if (shared < s1 && shared < s2)
        return (shared);
    if (s1 < s2 && s1 < shared)
        return (s1);
    if (s2 < s1 && s2 < shared)
        return (s2);
}

t_slide largest(t_slide s1, t_slide s2)
{
    if (s1.num_tags < s2.num_tags)
        return (s2);
    else
        return (s1);
}

t_slide smallest(t_slide s1, t_slide s2)
{
    if (s1.num_tags < s2.num_tags)
        return (s1);
    else
        return (s2);
}

int     get_interestval(t_slide s1, t_slide s2)
{
    int shared_cnt;
    int s1_uniq;
    int s2_uniq;
    t_slide smaller;
    t_slide larger;
    int i;
    int j;

    shared_cnt = 0;
    larger = largest(s1, s2);
    smaller = smallest(s1, s2);
    i = 0;
    while (i < smaller.num_tags)
    {
        j = 0;
        while (j < larger.num_tags)
        {
            if (strcmp(smaller.tags[i], larger.tags[i]))
                shared_cnt++;
            j++;
        }
        i++;
    }
    s2_uniq = s2.num_tags - shared_cnt;
    s1_uniq = s1.num_tags - shared_cnt;
    return (lowest(shared_cnt, s1_uniq, s2_uniq));
}