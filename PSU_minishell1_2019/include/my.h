/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** prototype h
*/

#include <stddef.h>
#include <stdbool.h>

int guess_nbr_base(int nbr, int base);
int my_putstr_non_print(char *str);
int my_putstrerror(char *str);
char *put_to_norme(char *str, int malloc);
int my_putbase_hexa(int nbr, int type);
int my_getnbr_base(int nbr, int base);
void my_putpointer(size_t p);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_cpy_from(char *found, char *to_copy, int from);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char *str);
int my_conv_base(int nbr, int base);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int my_str_compare(char const *s1, char const *s2);
char **my_str_to_wordtab(char *str);
char **my_path_to_wordtab(char *str);