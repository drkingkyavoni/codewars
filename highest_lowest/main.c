#include "main.h"

int main(void)
{
    char *result;
    high_and_low("1 2 3 4 5", result);  // result "5 1"
    high_and_low("1 2 -3 4 5", result); // result "5 -3"
    high_and_low("1 9 3 4 -5", result); // result "9 -5"
}