// 2. Write Java program which accept N numbers from user and display all such elements 
// which are divisible by 5. 
// Input :  N :   6 
//   Elements : 85 66 3 80 93 88  
// Output : 85 80  
  
import java.util.*;

class Program2
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

		ArrayDemo  adobj = new ArrayDemo();
		adobj.Display(Arr);


	}
}

class ArrayDemo 
{  
	public void Display(int Arr[])  
	{   
		int i = 0;

		for(i = 0;i < Arr.length;i++)
		{
			if(Arr[i] % 5 == 0)
			{
				System.out.println("Numbers are : "+Arr[i]);

			}
		}
 	} 
} 