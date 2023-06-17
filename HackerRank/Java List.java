import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        List<Integer> list=new ArrayList<Integer>();
        for(int i = 0; i < n; i++){
            list.add(input.nextInt());
        }
        int q = input.nextInt();
        for(int i = 0; i < q*2; i++){
            String demand = input.nextLine();
            
            if(demand.equals("Insert")){
                int index = input.nextInt();
                int num = input.nextInt();
                list.add(index, num);
            }
            else if(demand.equals("Delete")){
                int index = input.nextInt();
                list.remove(index);
            }
        }
        for(int i = 0; i < list.size(); i++){
            System.out.print(list.get(i) + " ");
        }
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
    }
}
