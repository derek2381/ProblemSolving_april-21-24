// problem link
// https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/NFS

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		while(t-- > 0){
		    int u = sc.nextInt(), v = sc.nextInt(), a = sc.nextInt(), s = sc.nextInt();

		    if(u <= v){
		        System.out.println("YES");
		    }else{
		        double val = (u*u) - (2 * a * s);
		        if(val < 0){
		            val = 0;
		        }else{
		            val = Math.sqrt(val);
		        }
		      //  System.out.println(val);
		        if(val <= v){
		            System.out.println("YES");
		        }else{
		            System.out.println("NO");
		        }
		    }
		}

	}
}
