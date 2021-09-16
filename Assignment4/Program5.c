//5.Write a program which accept number from user and return difference between summation
//of all its factors and non factors.
//Input :  12 Output : -34  (16 - 50)  //Input :  10  Output : -29 (8 - 37)
#include <stdio.h>
int FactDiff(int iNo)
{ 
    int iCnt = 0; int iSum1 = 0;int iSum2 = 0; int diff = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else { iSum2 = iSum2 + iCnt; }
        diff = iSum1 - iSum2;
    }
    return diff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number");
    scanf("%d", &iValue);
    iRet = FactDiff(iValue);
    printf("%d", iRet);
    return 0;
}
