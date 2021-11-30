// 3. Write Java program which accept N numbers from user and display all such elements
//  which are even and divisible by 5. 
                                           
// Input :  N :   6 
//   Elements : 85 66 3 80 93 88  
// Output : 80 

import java.util.*;

class Program3
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0,iCnt = 0;

		System.out.println("Enter number of elements");
		iSize = sobj.nextInt();

		int Arr[] = new int[iSize];

		System.out.println("Enter elements");
		for(iCnt = 0;iCnt < Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}

		ArrayDemo adobj = new ArrayDemo();
		adobj.Display(Arr);
	}
}

class ArrayDemo 
{  
    public void Display(int Arr[])  
    {   
    	int iCnt = 0;

    	for(iCnt = 0;iCnt < Arr.length;iCnt++)
    	{
    		if(Arr[iCnt] % 2 == 0 && Arr[iCnt] % 5 == 0)
    		{
    			System.out.println("Elements are : "+Arr[iCnt]);
    		}
    	}
    } 
} 