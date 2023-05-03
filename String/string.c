#include <stdio.h>
#include <string.h>

int main(void)
{
    char *word = "String";

    for (int i = 0; i < strlen(word); i++)
        printf("%s\n", word + i);
}