/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;


/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	static String sl,sm;
	static void multiply(String a)
	{
		BigInteger b1=new BigInteger(a);
		BigInteger c=new BigInteger("2");
		
		b1=b1.multiply(c);
		b1=b1.subtract(c);
		System.out.println(b1);
		
		
	
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=10;
		String sp;
		
		while(sc.hasNext())
		{
			sp=sc.next();
			if(sp.equals("1"))
			{
				System.out.println("1");
			}
			else if(sp.equals("0"))
			{
				System.out.println("0");
			}
			
			else
			{
				multiply(sp);
			}
		
			
		}
	}
}
