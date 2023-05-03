#include <stdio.h>

void high_and_low (const char *strnum, char *result)
{
  int min = 2147483647;
  int max = -2147483648;
  char *ptr = strnum;
  int num = 0;
  while (*ptr)
  {
    printf("%s", ptr);
    num = (int) strtoul(ptr, &ptr, 10);
    if (num > max) max = num;
    if (num < min) min = num;
  }
	sprintf(result, "%d %d", max, min); // print your answer to result
}