#include <stdio.h>
#include <string.h>
#include "func.h"

int main()
{
    ///////////
    printf("strlen: %d\n", str_len ("12345"));
    ///////////
    char str_1[2048] = {};
    str_cpy (str_1, "Hello world");
    printf("strcpy: %s\n", str_1);
    ///////////
    char* str_2 = str_dub("I was made for lovin you baby");
    printf("strdub: %s\n", str_2);
    ///////////
    char*  string = "1 2 3 4 5 6 7 8 9 10";
    char* new_str = str_chr(string, '5');
    printf("strchr: %s\n", new_str);
    ///////////
    int x = str_cmp("abcdefg", "abcdefe");
    printf("strcmp: %d\n", x);
    ///////////

    return 0;
}