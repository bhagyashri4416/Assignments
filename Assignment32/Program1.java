// 1. Write Java program which accept N numbers from user and return difference between
//  summation of even elements and summation of odd elements. 

// Input :  N :   6 
// Elements : 85 66 3 80 93 88  
// Output : 53 (234 - 181) 

import java.util.*;

class Program1
{
	public static void main(String args[]) 
	{
		Scanner sobj = new Scanner(System.in);
		int iSize= 0,iCnt = 0,iRet = 0;

		System.out.println("Enter number of elements");
		iSize = sobj.nextInt();

		int Arr[] = new int[iSize];

		System.out.println("Enter elements");
		for(iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}

		ArrayDemo adobj = new ArrayDemo();
		iRet = adobj.Difference(Arr);
		System.out.println("Difference is : "+iRet);
	}
}

class ArrayDemo 
{
	public int Difference(int Arr[])
	{
		int i = 0,iSumEven = 0,iSumOdd = 0,iDiff = 0;
		for(i = 0; i < Arr.length;i++)
		{
			if(Arr[i] % 2 == 0)
			{
				iSumEven = iSumEven + Arr[i];
			}
			else
			{
				iSumOdd = iSumOdd + Arr[i];
			}
			iDiff = iSumEven - iSumOdd;

		}
		return iDiff;
	}
}
