class MyBook extends Book{
    int price;
    MyBook(String t, String a, int p){
        super(t,a);
        price=p;
    }
    public void display(){
        System.out.println("Title: "+this.title);
        System.out.println("Author: "+this.author);
        System.out.println("Price: "+this.price);
    }
}
