// 2. Write a java  program which accept string from user and count number of small characters. 
// Input :   "Marvellous"
// Output :   9 

import java.util.*;

class StringDemo 
{
	public int CountSmall(String str)
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0,i = 0;
		for(i = 0;i < Arr.length;i++)
		{
			if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
			{
				iCnt++;
			}
		}
		return iCnt;		
	}
}

class Program2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		String str;
		int iRet = 0;
		System.out.println("Enter String");
		str = sobj.nextLine();

		StringDemo  sdobj = new StringDemo ();
		iRet = sdobj.CountSmall(str);
		System.out.println("Number of Small letters are :"+iRet);

	}
}