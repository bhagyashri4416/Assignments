//2. Write a program which accept number from user and print even factors of that number.  
//Input :  24 
//Output:  1 2 4 6 8 12 

#include<stdio.h>

void DisplayFactor(int);
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    DisplayFactor(iValue);
    return 0;
}

void DisplayFactor(int iNo)
{
    int iCnt = 0;

     if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0 )
        {
            printf("%d ",iCnt);
        }
    }
}