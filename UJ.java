import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
class Ideone
{
	static void multiply(String a,String b)
	{
		BigInteger b1=new BigInteger(a);System.out.println((b1.pow(Integer.parseInt(b))).toString());
		}
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		while(true)
		{
			String sp=sc.next();String sq=sc.next();
			if(sp.equals("0") && sq.equals("0"))
	        {break;}
	        else
	        {multiply(sp,sq);}}}}

