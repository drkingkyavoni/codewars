#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool validBraces(const char* braces) {
    size_t top = 0, len = 0;
    
    len = strlen(braces);
    char *stack = malloc(sizeof(char) * len);
    if (braces == NULL || len % 2 != 0 || stack == NULL) return false;
    for (size_t i = 0; i < len; i++)
    {
        if (braces[i] == '(' || braces[i] == '[' || braces[i] == '{')
            stack[top++] = braces[i];
        else if (braces[i] == ')' || braces[i] == ']' || braces[i] == '}')
        {
           if (top < 0) return false;
           char c = stack[--top];
           if ((braces[i] == ')' && c != '(') ||
                (braces[i] == ']' && c != '[') ||
                (braces[i] == '}' && c != '{')) 
            {
                free(stack);
                return false;
            }
        }
        else
        {
            free(stack);
            return false;
        }
    }
    return (top == 0) ? true : false;
}

int main(void)
{
    printf("%s\n", validBraces("([)]") ? "valid" : "invalid");
    printf("%s\n", validBraces("[]") ? "valid" : "invalid");
    printf("%s\n", validBraces("{[]({})}") ? "valid" : "invalid");
    printf("%s\n", validBraces("(){}[]") ? "valid" : "invalid");
    printf("%s\n", validBraces("[({})](]") ? "valid" : "invalid");
    printf("%s\n", validBraces("(}") ? "valid" : "invalid");
}