//1.Write a program which accept one number from user and print that number of even 
//numbers on screen.  
//Input :  7  
//Output:  2 4  6  8  10  12  14
#include<stdio.h>
void printEven(int);
int main()
{
    int iValue = 0;
    printf("Enter Number");
    scanf("%d",&iValue);
    printEven(iValue);
    return 0;
}
void printEven(int iNo)
{
    int iCnt = 0;
    if (iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= iNo*2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ",iCnt);
        }
    }
}
