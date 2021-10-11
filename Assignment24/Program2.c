// 2.Write a program which accept string from user and accept one character.
// Return frequency of that character.
// Input :   "Marvellous Multi OS"    M
// Output :   2
// Input :   "Marvellous Multi OS"    W
// Output :   0

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int i = 0, iCnt = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (ch == str[i])
        {
            iCnt++;
        }
    }
    return iCnt;
}
int main()
{
    char arr[20], cValue;
    int iRet = 0;

    printf("Enter string \n");
    scanf("%[^'\n']s", arr);

    printf("Enter character\n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d:", iRet);
    return 0;
}