import java.util.*;
import java.io.*;

class Solution{
    
   public static void main(String []argh)
   {
       Map<String,Integer> contact = new HashMap<String,Integer>();
      Scanner in = new Scanner(System.in);
      int n=in.nextInt();
      in.nextLine();
      for(int i=0;i<n;i++)
      {
         String name=in.nextLine();
         int phone=in.nextInt();
          contact.put(name,phone);
         in.nextLine();
      }
      while(in.hasNext())
      {
         String s=in.nextLine();
          System.out.println(contact.get(s)==null?"Not found":s+"="+contact.get(s));
      }
   }
}
