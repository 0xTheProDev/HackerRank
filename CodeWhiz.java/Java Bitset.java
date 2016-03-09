import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        BitSet[] B = new BitSet[2];
        B[0] = new BitSet(N);
        B[1] = new BitSet(N);
        while(M-->0){
            String s = sc.next();
            int i = sc.nextInt();
            int j = sc.nextInt();
            switch(s){
                case "AND": B[i-1].and(B[j-1]);
                            break;
                case "OR": B[i-1].or(B[j-1]);
                            break;
                case "XOR": B[i-1].xor(B[j-1]);
                            break;
                case "SET": B[i-1].set(j);
                            break;
                case "FLIP": B[i-1].flip(j);
                            break;
            }
            System.out.println(B[0].cardinality() + " " + B[1].cardinality());
        }
    }
}
