#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
 #ifndef BUFFER_SIZE
    #define BUFFER_SIZE 12
#endif
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
char *get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set)
#endif
