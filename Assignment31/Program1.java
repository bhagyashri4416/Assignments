// 1.Write a Java program which accept string from user and count number of capital characters. 
// Input :   "Marvellous Multi OS"
// Output :   4 

import java.util.*;

class Marvellous extends StringX
{
	public int CountCapital()
	{
		char Arr[] = str.toCharArray();
		int iCnt = 0,i = 0;
		for(i = 0;i < Arr.length;i++)
		{
			if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String");
		str = sobj.nextLine(); 
	}
	public void Display()
	{
		System.out.println("String is : "+str);
	}
}

class Program1
{
	public static void main(String[] args) 
	{
		Marvellous mobj = new Marvellous();
		int iRet = 0;
		mobj.Accept();
		mobj.Display();
		iRet = mobj.CountCapital();
		System.out.println("Number of Capital letters are :"+iRet);
	}
}
