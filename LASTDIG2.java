import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
class Ideone
{
	static String sl,sm;
	static void multiply(String a,String b)
	{
		BigInteger b1=new BigInteger(a);
		BigInteger c=new BigInteger("10");
		BigInteger b2=new BigInteger(b);
		BigInteger b3=b1.modPow(b2,c);
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
