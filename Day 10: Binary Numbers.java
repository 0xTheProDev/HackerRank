import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0 ; i<t ; i++)
            {
            int n = sc.nextInt();
            String s = "";
            while(n!=0)
                {
                s= s + (n%2);
                n/=2;
            }
            int len = s.length();
            StringBuilder b = new StringBuilder(len);
            for(int j=len-1;j>=0;j--){
                b.append(s.charAt(j));
            }
            System.out.println(b.toString());
        }
    }
}
