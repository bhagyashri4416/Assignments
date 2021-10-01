// 4. Accept Character from user and check whether it is special symbol
//  or not (!, @, #, $, %, ^, &, *).
// Input :  %
// Output :  TRUE
// Input :  d
// Output :  FALSE
#include <stdio.h>
#include <stdbool.h>

bool ChkSpecial(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
       return false;
    }
    else
    {
       return true;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }
    return 0;
}