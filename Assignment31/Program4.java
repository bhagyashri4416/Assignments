// 4. Write a java program which accept string from user and check whether it contains 
// vowels in it or not. 
// Input :   "marvellous"
// Output :   TRUE 
// Input :   "Demo"
// Output :   TRUE 
// Input :   "xyz"
// Output :   FALSE

import java.util.*;

class Program4
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		
		String str;
		boolean bRet = false;

		System.out.println("Enter String");
		str = sobj.nextLine();

		StringDemo sdobj = new StringDemo();
		bRet = sdobj.ChkVowel(str);

		if(bRet == true)
		{
			System.out.println("True");
		}
		else
		{
			System.out.println("False");

		}
	}
	
}

class StringDemo 
{  
	public boolean ChkVowel(String str)  
	{  
		char Arr[] = str.toCharArray();
		int i = 0;
		boolean bRet = false;
		for(i = 0;i < Arr.length;i++)
		{
			if((Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u'))
			{
				return true;
			}
		}
		return false;
	}                                       
}