// 3. Write a java program which accept string from user and return difference between 
// frequency of small characters and frequency of capital characters. 
// Input :   "MarvellouS"
// Output :   6 (8-2)

import java.util.*;


class StringDemo 
{  
	public int CountDiff(String str)  
	{ 
		char Arr[] = str.toCharArray();
		int evenCnt = 0,oddCnt = 0,i = 0,iDiff = 0;
		for(i = 0;i < Arr.length;i++)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
			{
				evenCnt++;
			}
			else
			{
				oddCnt++;
			}
		}
		iDiff = oddCnt - evenCnt;
		return iDiff;
	} 
} 

class Program3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		String str;
		int iRet = 0;
		System.out.println("Enter String");
		str = sobj.nextLine();

		StringDemo  sdobj = new StringDemo ();
		iRet = sdobj.CountDiff(str);
		System.out.println("Difference between Capital and Small letters are :"+iRet);

	}
}