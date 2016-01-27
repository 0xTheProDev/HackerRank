import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        int[] fixed_date = new int[3];
        int[] return_date = new int[3];
        
        Scanner s = new Scanner(System.in);
        for(int i=2; i>=0 ;i--)
            return_date[i] = s.nextInt();
        for(int i=2; i>=0 ;i--)
            fixed_date[i] = s.nextInt();
        if(fixed_date[0]>=return_date[0])
            {
            if(fixed_date[1]>=return_date[1])
                {
                if(fixed_date[2]>=return_date[2])
                    System.out.println(0);
                else
                    System.out.println(15 * (return_date[2] - fixed_date[2]));
            }
            else
                System.out.println(500 * (return_date[1] - fixed_date[1]));
        }
        else
            System.out.println(10000);
    }
}
