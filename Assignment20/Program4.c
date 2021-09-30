// 4. Accept Character from user and check whether it is small case
// or not (a-z).
// Input :  g
// Output :  TRUE
// Input :  D
// Output :  FALSE

#include <stdbool.h>
#include <stdio.h>

bool ChkSmall(char ch)
{ 
    if ((ch >= 'a' && ch <= 'z'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);
    if (bRet == true)
    {
        printf("It is Small case character");
    }
    else
    {
        printf("It is not a Small case character");
    }
    return 0;
}