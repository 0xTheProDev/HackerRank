import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {    

      public static void print(int A[],int i){
          try{
                System.out.println(A[i]);
            }
          catch(ArrayIndexOutOfBoundsException e)
            { 
              int N = A.length;
              int min,max;
              min = max = 0;

              for(int j = 0; j < N; j++)
              {
                  if(min > A[j]) min = A[j];
                  else if(max < A[j]) max = A[j];
              }

              System.out.println(max + " " + min);
              System.out.println("java.lang.ArrayIndexOutOfBoundsException");
              return;
          }
            
          int N = A.length;
          int min,max;
          min = max = 0;

    for(int j = 0; j < N; j++)
        {
        if(min > A[j]) min = A[j];
        else if(max < A[j]) max = A[j];
    }

    System.out.println(max + " " + min);

	}
	public static void main(String[] args) {
        int N;
        Scanner st=new Scanner(System.in);
        N=st.nextInt();
        int A[]=new int[N];
        for(int i=0;i<N;i++)
        {
           A[i]=st.nextInt();
        }
        int i=st.nextInt();
        try
        {
            print(A,i);

        }
        catch(Exception e){
            System.out.println(e.getClass().getName());
        }
        
   }// end of main
}// end of Solution
