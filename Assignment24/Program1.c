// 1.Write a program which accept string from user and accept one character.
// Check whether that character is present in string or not.
// Input :   "Marvellous Multi OS"    e
// Output :   TRUE
// Input :   "Marvellous Multi OS"    W
// Output :   FALSE

#include <stdio.h>
#include <stdbool.h>

bool ChkChar(char ch, char *str)
{
    if (*str == ch)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter string \n");
    scanf("%[^'\n']s", arr);

    printf("Enter character\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(cValue, arr);

    if (bRet == true)
    {
        printf("It is character\n");
    }
    else
    {
        printf("It is not character\n");
    }
    return 0;
}
