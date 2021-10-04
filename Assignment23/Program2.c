// 2.Write a program which accept string from user and convert it into
// upper case.
// Input :   "Marvellous Multi OS"
// Output :   MARVELLOUS MULTI OS

#include <stdio.h>

void struprx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
            printf("%c", *str);
        }
        else
        {
            printf("%c", *str);
        }
        str++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s", &Arr);

    struprx(Arr);
    return 0;
}