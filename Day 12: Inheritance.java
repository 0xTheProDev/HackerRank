class Grade extends Student{
   private int score;
   Grade (String fname, String lname, int p, int sc){
       super(fname,lname,p);
       score = sc;
   }
    char calculate(){
        if(score<=100 && score>=90) 
            return 'O';
        else if(score<90 && score>=75) 
            return 'E';
        else if(score<75 && score>=60) 
            return 'A';
        else if(score<60 && score>40)
            return 'B';
        else
            return 'D';
    }
}
