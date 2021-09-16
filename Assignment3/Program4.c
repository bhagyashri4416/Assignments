//4. Accept one character from user and convert case of that character.
//Input : a   Output : A
//Input : D   Output : d
#include <stdio.h>
#include <ctype.h> 
char DisplayConvert(char CValue)
{
    if (CValue >= 'a' && CValue <= 'z')
    {
        CValue = CValue - 32;
        printf("Uppercase is: %c", CValue);
    }
    else if(CValue >= 65 && CValue <= 90)
    {
        CValue = CValue + 32;
        printf("Lowercase is: %c", CValue);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c", &cValue);
    DisplayConvert(cValue);
    return 0;
}