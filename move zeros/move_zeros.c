#include <stddef.h>
#include <string.h>
#include <stdio.h>

void move_zeros(size_t len, int arr[len])
{
    int a[len];
    size_t j = 0;
    memset(a, 0, len*sizeof(a[0]));
    for (size_t i = 0; i < len; i++)
    {
      if (arr[i] != 0) 
      {
        a[j] = arr[i];
        j++;
      }
    }
    for (size_t i = 0; i < len; i++)
    {
        arr[i] = a[i];
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(void)
{
    move_zeros(8, (int []){0, 1, 0, 2, 0, 3, 4, 5});
    move_zeros(20, (int []){9, 0, 0, 9, 1, 2, 0, 1, 0, 1, 0, 3, 0, 1, 9, 0, 0, 0, 0, 9});
    move_zeros(1, (int []){0, 0});
    move_zeros(0, (int []){});
    return (0);
}