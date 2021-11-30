// 2.Write a program which accept number from user and return the count of odd digits. 
// Input :  2395  Output :  3 
// Input :  1018 Output :  2 
// Input :  -1018 Output :  2 
// Input :  8462 Output :  0 

import java.util.*;

class Program2
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		int iValue = 0,iRet = 0;

		System.out.println("Enter number");
		iValue = sobj.nextInt();

		Digit dobj = new Digit();
		iRet = dobj.CountOdd(iValue);

		System.out.println("Count of odd digits is : "+iRet);
	}
}

class Digit 
{  
	public int CountOdd(int iNo)  
	{
		int iDigit = 0,iCnt = 0;

		while(iNo != 0)
		{
			iDigit = iNo % 10;
			if(iDigit % 2 != 0)
			{
				iCnt++;
			}
			iNo = iNo / 10;
		}
		return iCnt;
	} 
} 