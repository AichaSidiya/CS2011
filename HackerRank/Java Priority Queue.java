import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.*;

class Student implements Comparable<Student>{
    private int id;
    private String name;
    private double cgpa;
    public Student(int id, String name, double cgpa) {
        super();
        this.id = id;
        this.name = name;
        this.cgpa = cgpa;
    }
    public int getID() {
        return id;
    }
    public String getName() {
        return name;
    }
    public double getCGPA() {
        return cgpa;
    }
    public int compareTo(Student s){
        if(this.getCGPA() == s.getCGPA()){
            if(this.getName().equals(s.getName())){
                if(this.getID() > s.getID()){
                    return 1;
                }
                else{
                    return -1;
                }
            }
            else{
                return this.getName().compareTo(s.getName());
            }
        }
        else if(this.getCGPA() < s.getCGPA()){
            return 1;
        }
        else{
            return -1;
        }
    }
}

class Priorities{
    List<Student> getStudents(List<String> events){
        PriorityQueue<Student> studentPQ = new PriorityQueue<Student>();
        for(int i = 0; i < events.size(); i++){
            String[] parts = (events.get(i)).split(" ");
            if((parts[0]).equals("ENTER")){

                String fname = parts[1];
                double cgpa =Double.parseDouble(parts[2]);
                int id = Integer.parseInt(parts[3]);

                Student st = new Student(id, fname, cgpa);

                studentPQ.add(st);
            }
            else if((parts[0]).equals("SERVED")){
                studentPQ.poll();
            }

        }
        List<Student> result = new ArrayList<>(studentPQ.size());
        while(!studentPQ.isEmpty()){
            result.add(studentPQ.poll());
        }
        return result;
    }
}
