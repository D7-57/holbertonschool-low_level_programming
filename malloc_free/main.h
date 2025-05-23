#ifndef MAIN_H
#define MAIN_H

char **strtow(char *str);
char *argstostr(int ac, char **av);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *create_array(unsigned int size, char c);

#endif /* MAIN_H */
