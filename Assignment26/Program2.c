// 2. Write a program which accept string from user and copy that
// characters of that string into another string by removing all
// white spaces.
// Input :   “Marvel   lous Pyth   on”
// Output :   “MarvellousPython”

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    int i = 0, j = 0;
    while (src[i] != '\0')
    {
        if (src[i] != ' ')
            dest[j++] = src[i];
        i++;
    }
    printf("%s", dest); // MarvellousPython
}
int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30]; // Empty string
    StrCpyX(arr, brr);
    return 0;
}