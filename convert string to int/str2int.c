#include <stdio.h>

int string_to_number(const char *src);

int main(void)
{
    printf("%d\n",string_to_number("1234"));
    printf("%d\n",string_to_number("605"));
    printf("%d\n",string_to_number("1405"));
    printf("%d\n",string_to_number("-7"));
}

int string_to_number(const char *src)
{
    int result = 0, sum = 1;
    if (*src == '-') return -1;
    if (*src == '\0') return 0;
    return (*src - '0') + 10 * (string_to_number(src + 1));
}