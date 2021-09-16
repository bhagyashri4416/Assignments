// 2.Write a program which accept number from user and check whether it contains 0 in it or not. 
// Input :  2395  Output :  There is no Zero 
// Input :  1018 Output :  It Contains Zero 
// Input :  9000 Output :  It Contains Zero 
// Input :  10687 Output :  It Contains Zero 

#include<stdio.h>
#define TRUE 1
#define FALSE 0
//  BOOL ChkZero(int);
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            iCnt++;
            return TRUE;
        }
    }
    return iCnt;
}
int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    int iCntRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    iCntRet = Count(iValue);

    printf("it contains :%d\n",iCntRet);
    if(bRet == TRUE)
    {
        printf("It contains zero");
        printf("");
    }
    else{
        printf("There is no Zero");
    }
    return 0;
}

