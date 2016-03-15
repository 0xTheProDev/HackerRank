import java.util.*;

class Student{
    private int token;
    private String fname;
    private double cgpa;
    public Student(int id, String fname, double cgpa) {
        super();
        this.token = id;
        this.fname = fname;
        this.cgpa = cgpa;
    }
    public int getToken() {
        return token;
    }
    public String getFname() {
        return fname;
    }
    public double getCgpa() {
        return cgpa;
    }
}

class StudentComparator implements Comparator<Student>{

    @Override
    public int compare(Student s1, Student s2) {

        double cgpa1 = s1.getCgpa();
        double cgpa2 = s2.getCgpa();

        if(cgpa1 == cgpa2){
            int fnameCom = s1.getFname().compareTo(s2.getFname());
            if(fnameCom==0){
                return s1.getToken()-s2.getToken(); 
            }
            return fnameCom;
        }

        return (cgpa1<cgpa2)?1:(cgpa1>cgpa2?-1:0);
    }

}

public class Solution
{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int totalEvents = Integer.parseInt(in.nextLine());

        Queue<Student> studentPQ = new PriorityQueue<Student>(10, new StudentComparator());
        while(totalEvents>0){
            String event = in.next();
            if(event.equals("ENTER")){
                String fname = in.next();
                double cgpa = in.nextDouble();
                int token = in.nextInt();

                Student st = new Student(token, fname, cgpa);
                studentPQ.add(st);
            }
            else if(event.equals("SERVED")){
                studentPQ.poll();
            }
            totalEvents--;
        }
        boolean flag=true;
        while(!studentPQ.isEmpty()){
            Student st = studentPQ.poll();
            System.out.println(st.getFname());
            flag=false;
        }
        if(flag){
            System.out.println("EMPTY");
        }
    }
}
