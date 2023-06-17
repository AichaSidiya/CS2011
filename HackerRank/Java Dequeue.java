    import java.util.*;
    public class test {
        public static void main(String[] args) {
            Scanner in = new Scanner(System.in);
            Deque<Integer> deque = new ArrayDeque<Integer>();
            HashSet<Integer> sub = new HashSet<Integer>();   
            int n = in.nextInt();
            int m = in.nextInt();
            int max = 0;
            for (int i = 0; i < n; i++) {
                int num = in.nextInt();
                
                deque.addLast(num);
                sub.add(num); 
                
                if(deque.size() == m){
                    if(max < sub.size()){
                        max = sub.size();
                    }
                    int old = deque.removeFirst();
                    if(!deque.contains(old)){
                    sub.remove(old);
                }
                }
                
                
                
            }
            
            
            System.out.println(max);
            
            
        }
    }



