class Calculator {
    int power(int n, int p) throws Exception{
        int pow = 1;
        if(n<0 || p<0){
            Exception ex = new Exception("n and p should be non-negative");
            throw ex;            
        }
        else{
            while(p-->0)
                pow*=n;            
        }
        return pow;
    }
}
