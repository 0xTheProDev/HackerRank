class Palindrome {
    LinkedList stack = new LinkedList();
    LinkedList queue = new LinkedList();
    
    public void pushCharacter(char c){
        stack.push(c);
    }
    public char popCharacter(){
        char c = (char) stack.pop();
        return c;
    }
    public void enqueueCharacter(char c){
        queue.add(c);
    }
    public char dequeueCharacter(){
        char c = (char) queue.poll();
        return c;
    }
}
