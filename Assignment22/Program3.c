// 3. Write a program which accept string from user and return difference
//  between frequency of small characters and frequency of capital
// characters.
// Input :   "MarvellouS"
// Output :   6 (8-2)

#include <stdio.h>

int Difference(char *str)
{
    int iSCnt = 0, iCCnt = 0, iDiff = 0;
   
    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iSCnt++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCCnt++;
        }
        str++;
        iDiff = iSCnt - iCCnt;
    }
    return iDiff;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);
    printf("%d", iRet);
    return 0;
}