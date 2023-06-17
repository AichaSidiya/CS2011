import java.util.*;

class Student implements Comparable<Student>{
	private int id;
	private String fname;
	private double cgpa;
	public Student(int id, String fname, double cgpa) {
		super();
		this.id = id;
		this.fname = fname;
		this.cgpa = cgpa;
	}
	public int getId() {
		return id;
	}
	public String getFname() {
		return fname;
	}
	public double getCgpa() {
		return cgpa;
	}
    public int compareTo(Student s){
        if(this.getCgpa() == s.getCgpa()){
            if(this.getFname().equals(s.getFname())){
                if(this.getId() > s.getId()){
                    return 1;
                }
                else{
                    return -1;
                }
            }
            else{
                return this.getFname().compareTo(s.getFname());
            }
        }
        else if(this.getCgpa() < s.getCgpa()){
            return 1;
        }
        else{
            return -1;
        }
    }
}

//Complete the code
public class Solution
{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int testCases = Integer.parseInt(in.nextLine());
		
		List<Student> studentList = new ArrayList<Student>();
		while(testCases>0){
			int id = in.nextInt();
			String fname = in.next();
			double cgpa = in.nextDouble();
			
			Student st = new Student(id, fname, cgpa);
			studentList.add(st);
			
			testCases--;
		}
        // for(int i = 0; i < studentList.size(); i++)
        // {
        //     for(int j = 0; j < studentList.size() - i - 1; j++){
        //       if(studentList.get(j).getCgpa() < studentList.get(j+1).getCgpa())
        //     {
        //        Collections.swap(studentList, j, j+1); 
        //     }
        //     else if(studentList.get(j).getCgpa() == studentList.get(j+1).getCgpa())
        //     {
        //         if(studentList.get(j).getFname().compareTo(studentList.get(j+1).getFname()) > 0)
        //         {
        //             Collections.swap(studentList, j, j+1); 
        //         }
        //         else if(studentList.get(j).getFname().compareTo(studentList.get(j+1).getFname()) == 0)
        //         {
        //             if(studentList.get(j).getId() > studentList.get(j+1).getId())
        //             {
        //                Collections.swap(studentList, j, j+1);  
        //             }
        //         } 
        //     }  
        //     }
            
        // }
        Collections.sort(studentList);
      	for(Student st: studentList){
			System.out.println(st.getFname());
		}
	}
}



