// 5. Write a program which accept string from user and copy that
// characters of that string into another string by toggling the case.
// Input :   "Marvellous Python 2"
// Output :   "mARVELLOUS pYTHON 2"

#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;
        }
        else
        {
            *src = *src - 32;
        }
        *dest = *src;
        src++;
        dest++;
    }
    printf("%s", dest); // Marvellous Multi OS
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30]; // Empty string
    StrCpyToggle(arr, brr);
    // prnitf("%s", brr); // mARVELLOUS pYTHON 2
    return 0;
}
