import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        
        ArrayList<ArrayList<Integer>> list2D = new ArrayList<ArrayList<Integer>>();

for (int i = 0; i < n; i++) {
    ArrayList<Integer> row = new ArrayList<Integer>();
    int d = scan.nextInt();
    
    for (int j = 0; j < d; j++) {
        row.add(scan.nextInt());
    }
    list2D.add(row);
}   
      int q = scan.nextInt();
      
      for(int i = 0; i < q; i++){
          int x = scan.nextInt();
          int y = scan.nextInt();
          
          try {
              list2D.get(x-1).get(y-1);
              System.out.println(list2D.get(x-1).get(y-1));
              } 
          catch ( IndexOutOfBoundsException e ) {
                System.out.println("ERROR!");
                }
      }    
      }
      
}
