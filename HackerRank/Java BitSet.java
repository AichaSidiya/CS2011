import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int m = scan.nextInt();
        
        BitSet b1 = new BitSet(n);
        BitSet b2 = new BitSet(n);
           
        for(int i = 0; i < m; i++){
            String command = scan.next();
            
            if(command.equals("AND")){
                int num1 = scan.nextInt();
                scan.nextInt(); 
                if(num1 == 1){ 
                    b1.and(b2); 
                }
                else if(num1 == 2){
                    b2.and(b1);
                }
            }
            
            else if(command.equals("OR")){
                int num1 = scan.nextInt();
                scan.nextInt(); 
                if(num1 == 1){ 
                    b1.or(b2); 
                }
                else if(num1 == 2){
                    b2.or(b1);
                }
            }
                
            
            
            else if(command.equals("XOR")){
                int num1 = scan.nextInt();
                scan.nextInt(); 
                if(num1 == 1){ 
                    b1.xor(b2); 
                }
                else if(num1 == 2){
                    b2.xor(b1);
                }
            }
                
            
            else if(command.equals("SET")){
                int num1 = scan.nextInt();
                int index = scan.nextInt(); 
                if(num1 == 1){ 
                    b1.set(index); 
                }
                else if(num1 == 2){
                    b2.set(index);
                }
            }
            
            else if(command.equals("FLIP")){
                int num1 = scan.nextInt();
                int index = scan.nextInt(); 
                if(num1 == 1){ 
                    b1.flip(index);; 
                }
                else if(num1 == 2){
                    b2.flip(index);
                }
            } 
           System.out.println(b1.cardinality() + " " + b2.cardinality()); 
        }
        
    }
}
