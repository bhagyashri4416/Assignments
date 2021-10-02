// 3. Accept N numbers from user and return the difference between 
// largest and smallest number. 
// Input :  N :   6 
//   Elements : 85 66 3 66 93 88  
// Output : 90 (93 -3)

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iSize)
{
    int i = 0, iMin = Arr[0], iMax = Arr[0], iDiff = 0;

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        else if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
        iDiff = iMax - iMin;
    }
    return iDiff;
}

int main()
{
    int *Arr = NULL;
    int iRet = 0, iCnt = 0, iLength = 0;

    printf("Enter number of elements\n");
    scanf("%d", &iLength);

    Arr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter numbers\n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }

    iRet = Difference(Arr, iLength); 
    printf("Difference is : %d\n", iRet);

    free(Arr);
    return 0;
}