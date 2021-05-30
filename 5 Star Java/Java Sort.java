import java.util.*;
class Student{
	int id;
	String fname;
	double cgpa;
	public Student(int id, String fname, double cgpa) {
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
}
class chck implements Comparator<Student> {                //create a comparision function
        public int compare(Student a,Student b)
        {
            int gpa = ((b.cgpa>a.cgpa)?1:((b.cgpa==a.cgpa)?0:-1));    //to handle precision problem in a lazy way
            int nm = a.fname.compareTo(b.fname);
            int Id = a.id-b.id;
            return ((gpa == 0) ? ((nm==0)?Id: nm ): gpa);        //nested ternary
        }
}
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
        Collections.sort(studentList, new chck());                      //collections.sort is required
      	for(Student st: studentList)
			    System.out.println(st.getFname());
	}
}
