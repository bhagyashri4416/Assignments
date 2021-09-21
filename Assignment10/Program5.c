// 5. Accept number of rows and number of columns from user and display below pattern.
// Input :  iRow = 3  iCol =  4
// Output :
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int rowCount = 0;
    int colCount = 0;

    for (rowCount = 1; rowCount <= iRow; rowCount++)
    {
        for (colCount = 1; colCount <= iCol; colCount++)
        {
            printf("%d ", rowCount);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns");
    scanf("%d %d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}