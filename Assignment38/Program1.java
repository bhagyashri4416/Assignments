// 1. Write Java program which accept String from user and display below pattern. 

// Input :  Hello 
// Output : H e l l o    
// 			H e l l o    
// 			H e l l o    
// 			H e l l o  

import java.util.*;

class Program1
{
	public static void main(String[] args) 
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
 		int i = 0;

 		 char [] a=str.toCharArray();
        for ( i = 0; i < a.length; i++) {
                System.out.print(a);
            	System.out.println();
        }

 	} 
}
