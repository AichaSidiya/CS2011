import java.util.*;
class Solution{
	
	public static void main(String []argh)
	{
		Scanner sc = new Scanner(System.in);
		
		while (sc.hasNext()) {
			String input=sc.next();
            Stack<Character> myStack = new Stack<Character>();
            boolean balanced = true;
            if(input.isEmpty()){
                System.out.println("true");
            }
            else if(input.length() > 0){
            for(int i = 0; i < input.length(); i++){
                char x = input.charAt(i);
                if(x == '{' || x == '[' || x == '('){
                    myStack.push(x);
                }
                else if(myStack.isEmpty() && (x == '}' || x == ']' || x == ')')){
                    balanced = false;
                }
                else if (x == '}' && myStack.peek() == '{' || x == ']' && myStack.peek() == '['|| x == ')' && myStack.peek() == '('){
                    myStack.pop();
                }
            }
            
            if(!balanced || !myStack.isEmpty()){
                System.out.println("false");
            }
            else{
                System.out.println("true");
            }
		}
        }
		
	}
}



