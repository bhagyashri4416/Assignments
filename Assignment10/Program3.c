// 3. Accept number of rows and number of columns from user and display below pattern.
// Input :  iRow = 3  iCol = 5
// Output :
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int rowCount = 0;
    int colCount = 0;

    for (rowCount = iRow; rowCount > 0; rowCount--)
    {
        for (colCount = iCol; colCount > 0; colCount--)
        {
            printf("%d \t", colCount);
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
