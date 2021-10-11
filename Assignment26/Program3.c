// 3. Write a program which accept string from user and copy that
// characters of that string into another string by converting all
// small characters into capital case.
// Input :   “Marvellous Python 2”
// Output :   “MARVELLOUS PYTHON 2”

#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'a' && *src <= 'z')
        {
            *src = *src - 32;
            *dest = *src;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    printf("%s", dest); // MARVELLOUS PYTHON 2
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30]; // Empty string
    StrCpyCap(arr, brr);
    return 0;
}