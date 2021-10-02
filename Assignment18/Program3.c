// 3. Accept N numbers from user and accept one another number as NO ,
// return index of last occurrence of that NO.
// Input :  N :   6
//   NO:  66
//   Elements : 85 66 3 66 93 88
// Output : 3
// Input :  N :   6
//   NO:  93
//   Elements : 85 66 3 66 93 88
// Output : 4
// Input :  N :   6
//   NO:  12
//   Elements : 85 11 3 15 11 111
// Output : -1

#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int i = 0, iResult = 0;
    for (i = iLength - 1; i >= 0; i--)
    {
        if (Arr[i] == iNo)
        {
            break;
        }
    }
    if (i == iLength)
    {
        return -1;
    }
    else
    {
        return i;
    }
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d", &iSize);

    printf("Enter the number");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = LastOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last  occurrence of number is %d", iRet);
    }

    return 0;
}