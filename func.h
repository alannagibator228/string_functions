#ifndef STRING_FUNCTIONS
#define STRING_FUNCTIONS

int str_len (const char* string);
void str_cpy (char* str1, const char* str2);
char* str_dub(const char* string);
char* str_chr(char* string, int symbol);
int str_cmp(const char* str1, const char* str2);

#endif