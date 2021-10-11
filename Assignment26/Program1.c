// 1. Write a program which accept string from user and copy that
// characters of that string into another string in reverse order.
// Input :   “Marvellous Python”
// Output :   “nohtyP suollevraM”

#include <stdio.h>

void StrCpyRev(char *src, char *dest)
{
    int i, j = 0, Length = 0;
    char temp;
    i = 0;
    while (src[i] != '\0')
    {
        Length++;
        i++;
    }

    j = Length - 1;
    printf("%d", Length);
    printf("%d", j);

    for (i = 0; src[i] < Length; i++)
    {
        dest[i] = src[j];
        j--;
    }
    printf("\nString After Reverse: %s", dest);
}
int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30]; // Empty string
    StrCpyRev(arr, brr);
    return 0;
}