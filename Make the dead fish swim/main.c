#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int *parse (const char *program)
{
    int *temp;
    int i = 0, j = 0;
    temp = (int *)malloc(sizeof(int) * strlen(program));
    for (; *program != '\0'; *program++)
    {
        if (*program == 'o')
        {
            temp[j] = i;
            printf("i => %d\n", i);
            j++;
        }
        else
        { 
            i += (*program == 'i') ? 1 :
                (*program == 'd') ? -1 :
                (*program == 's') ? i*i : 0;
        }
    }
    temp = realloc(temp, j);
    return temp;
}

int main(void)
{
    printf("%ls\n", parse("isoisoiso"));
    return 0;
}