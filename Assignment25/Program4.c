// 4. Write a program which accept string from user and copy
// small characters of that string into another string.
// Input :   “Marvellous multi OS”
// Output :   “arvellous multi”

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
   while (*src != '\0')
   {
      if ((*src >= 'a') && (*src <= 'z'))
      {
         *dest = *src;
         dest++;
      }
      src++;
   }
   printf("%s", dest); // arvellous multi
}
int main()
{
   char arr[30] = "Marvellous multi OS";
   char brr[30]; // Empty string
   StrCpySmall(arr, brr);
   return 0;
}