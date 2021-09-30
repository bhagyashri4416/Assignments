// 3. Accept Character from user and check whether it is digit or not (0-9).
// Input :  7
// Output :  TRUE
// Input :  d
// Output :  FALSE

#include <stdbool.h>
#include <stdio.h>

bool ChkDigit(char ch)
{ 
 if ((ch >= '0' && ch <= '9'))
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

    bRet = ChkDigit(cValue);
    if (bRet == true)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    return 0;
}