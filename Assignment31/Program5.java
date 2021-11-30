// 5. Write a java program which accept string from user and display it in reverse order. 
// Input :   "MarvellouS"
// Output :  "SuollevraM" 

import java.util.*;

class StringDemo 
{  
	public void Reverse(String str)  
	{  
		char[] Arr = str.toCharArray();
		int iStart = 0,iEnd = Arr.length - 1;
		char temp;

		while(iStart < iEnd)
		{
			temp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = temp;
			iStart++;
			iEnd--;
		}
		System.out.println(Arr);
		// for(i = 0;i < Arr.length;i++)
		// {

		// }
	} 
}
	
class Program5
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		String str;

		System.out.println("Enter String");
		str = sobj.nextLine();
		 
		StringDemo sdobj = new StringDemo();
		sdobj.Reverse(str);
		
	}
}
