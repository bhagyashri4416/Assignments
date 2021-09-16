// 2.Write a program which accept number from user and return the count of odd digits.
// Input :  2395 Output :  3
// Input :  1018 Output :  2
// Input :  -1018 Output :  2
// Input :  8462 Output :  0

#include<stdio.h>
int CountEven(int);
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("%d ",iRet);

    return 0;
}

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo =iNo /10;
        if(iDigit % 2 != 0)
        {
            iCnt++;
        }
    }
    return iCnt++;
}