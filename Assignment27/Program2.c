// 2. Write a program which checks whether 5th & 18th bit is On or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0x00020010;
    UINT iResult = 0;
    
    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {   return true; }  
    else
    {    return false;  }
}
int main()
{
    UINT iValue = 0;
    bool bRet = false;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        printf("5th and 18th  bits are ON\n");
    }
    else
    {
        printf("5th and 18th bits are OFF\n");
    }
    
    return 0;
}
