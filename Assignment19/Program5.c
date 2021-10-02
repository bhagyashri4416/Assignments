// 5. Accept N numbers from user and display summation of digits of
// each number.
// Input :  N :   6
//   Elements : 8225  665 3 76 953 858
// Output : 17 17 3 13 17 21

#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int i = 0, j = 0, iDigit = 0, iNo = 0;
    int iSum = 0;
    for (i = 0; i < iLength; i++)
    {

        while (Arr[i] != 0)
        {
            iDigit = Arr[i] % 10;
            iSum = iSum + iDigit;
            Arr[i] = Arr[i] / 10;
        }
        printf("%d\t", iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    p = (int *)malloc((iSize * sizeof(int)));

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

    DigitsSum(p, iSize);
    free(p);

    return 0;
}