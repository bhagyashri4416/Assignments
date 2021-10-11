// 4. Write a program which accept string from user and copy that
// characters of that string into another string by converting all
// capital characters into small case.
// Input :   “Marvellous Python 2”
// Output :   “marvellous python 2”

#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;
            *dest = *src;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    printf("%s", dest); // marvellous python 2
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30]; // Empty string
    StrCpySmall(arr, brr);
    return 0;
}