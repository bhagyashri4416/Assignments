// 5. Write Java program which accept N numbers from user and display all such elements
//  which are multiples of 11. 

// Input :  N :   6 
//   Elements : 85 66 3 55 93 88  
// Output : 66 55 88  

import java.util.*;

class Program5
{
	public static void main(String[] args) 
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0 , iCnt = 0;

		System.out.println("Enter number of Elements");
		iSize = sobj.nextInt();

		int Arr[] = new int[iSize];

		System.out.println("Enter Elements");
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
    		if(Arr[iCnt] % 11 == 0)
    		{
    			System.out.println("Multiples of 11 :"+Arr[iCnt]);
    		}
    	}
    }      
} 