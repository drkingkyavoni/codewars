#include <stddef.h> // NULL
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

//returned buffer should be dynamically allocated and will be freed by a caller
char* solution(const char *camelCase) {
  char *s;
  if (camelCase) s = "";
  s = (char *)malloc(sizeof(char) * 2 * strlen(camelCase));
  while (*camelCase != '\0')
  {
    if (*camelCase >= 'A' && *camelCase <= 'Z') *s++ = ' ';
    else *s++ = *camelCase;
    camelCase++;
  }
  return s;
}

int main(void)
{
    printf("%s\n", solution("camelCaseS"));
    return (0);
}