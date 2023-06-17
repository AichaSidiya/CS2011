


Set<String> mySet = new HashSet<String>();
   
for(int i = 0; i < t; i++){
    String newString = pair_left[i] + " " + pair_right[i];
    
    mySet.add(newString);
    
    System.out.println(mySet.size());
}

