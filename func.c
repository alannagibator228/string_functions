#include <stdio.h>
#include <stdlib.h>

int str_len (const char* string)
{
    int symbol_num = 0;
    while (string[symbol_num] != '\0')
    {
        symbol_num++;
    }
    return symbol_num;
}

void str_cpy (char* str1, const char* str2)
{
    int symbol_num = 0;
    while (str2[symbol_num] != '\0')
    {
        str1[symbol_num] = str2[symbol_num];
        symbol_num++;
    }
}

char* str_dub(const char* string)
{
    int size = (str_len(string));
    char* str1 = NULL;
    str1 = (char*)calloc(size, sizeof(char));
    for (int i = 0; i < size; i++)
    {
        str1[i]= string[i];
    }
    return str1;
}

char * str_chr(char * string, int symbol)
{
    int symbol_num = 0;
    while (string[symbol_num] != symbol)
    {
        symbol_num++;
    }
    char* p = string;
    return p + symbol_num;
}

int str_cmp(const char* str1, const char* str2)
{
    int equal = 0;
    int symbol_num = 0;
    while (str2[symbol_num] != '\0')
    {
        if(str1[symbol_num] != str2[symbol_num])
        {
            equal = str1[symbol_num] - str2[symbol_num];
            break;
        }
        symbol_num++;
    }
}