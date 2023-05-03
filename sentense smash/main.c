#include "main.h"

int main(void)
{
    smash({"a", "b", "c", "d"},"a b c d");
	smash({"hello", "world"},"hello world");
	smash({"singleword"}, "singleword");
	smash ({},"");
    return (0);
}