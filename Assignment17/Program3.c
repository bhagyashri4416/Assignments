// 3. Accept N numbers from user check whether that numbers contains
// 11 in it or not.
// Input :  N :   6
//   Elements : 85 66 11 80 93 88
// Output : 11 is present
// Input :  N :   6
//   Elements : 85 66 3 80 93 88
// Output : 11 is absent

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int i = 0;
    bool bAns = false;
    for(i = 0; i < iLength;i++)
    {
        if(Arr[i] == 11)
        {
            bAns = true;
            break;
        }
    }
    return bAns;
}
int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *) malloc (iSize * sizeof(int));
    
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter elements");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
            scanf("%d",&p[iCnt]);
    }
    bRet = Check(p, iSize);
    if (bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
    free(p);
    return 0;
}