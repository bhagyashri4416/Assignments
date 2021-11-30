// 5. Write Java program which accept String from user and display below pattern. 

// Input :  Hello 
// Output : H   
// 			H e   
// 			H e l   
// 			H e l l   
// 			H e l l o   
// 			H e l l   
// 			H e l    
// 			H e l   
// 			H e   
// 			H    

import java.util.*;

class Program5
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        String str;

        System.out.println("Enter String");
        str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(str);
    }
}

class Pattern 
{ 
 	public void Pattern(String str)  
 	{
		int i = 0, j = 0;
    	char[] Arr = str.toCharArray();

		for(i = Arr.length -1;i != -1;i--)
 		{
 			for(j = 0;j < Arr.length - i ;j++)
 			{
	 			System.out.print(Arr[j]);
 			}
 			System.out.println();
 		}
		for(i = 1;i <= Arr.length - 1;i++)
 		{
 			for(j = 0;j < Arr.length - i;j++)
 			{
	 			System.out.print(Arr[j]);
 			}
 			System.out.println();
 		}
 	} 
}
