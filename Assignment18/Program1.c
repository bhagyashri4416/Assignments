// 1. Accept N numbers from user and accept one another number as NO ,
// check whether NO is present or not.
// Input :  N :   6
//   NO:  66
//   Elements : 85 66 3 66 93 88
// Output : TRUE
// Input :  N :   6
//   NO:  12
//   Elements : 85 11 3 15 11 111
// Output : FALSE

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int  i = 0;
    bool bAns = false;

    for (i = 0; i < iLength; i++)
    {
        if (Arr[i] == iNo)
        {
            bAns = true;
            break;
        }
    }
    return bAns;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements \n");
    scanf("%d", &iSize);

    printf("Enter the number \n");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter elements \n ");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if (bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);
    return 0;
}
