// 1.Write a program which accept radius of circle from user and calculate its area. 
// Consider value of PI as 3.14. (Area = PI * Radius * Radius) 
// Input :  5.3  Output :  88.2026   
// Input :  10.4  Output :  339.6224 

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0;
    float fPI = 3.14;

    dArea = fPI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double fRet = 0.0;

    printf("Enter Number\n");
    scanf("%f",&fValue);

    fRet = CircleArea(fValue);
    printf("Area of Circle is : %lf",fRet);

    return 0;
}
