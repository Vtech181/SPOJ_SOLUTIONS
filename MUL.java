/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;


/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	static String sl,sm;
	static void multiply(String a,String b)
	{
		BigInteger b1=new BigInteger(a);
		BigInteger b2=new BigInteger(b);
		BigInteger b3=b1.multiply(b2);
		System.out.println(b3.toString());
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t;
		t=sc.nextInt();
		while(t>0)
		{
			String sp=sc.next();
			
			String sq=sc.next();
			multiply(sp,sq);
			t--;
		}
	}
}
