	public static  Node insert(Node head,int data)
	{
        Node node = new Node(data);
        if(head==null){
            head = node;
        }
        else{
        Node temp = null;
            for(temp=head;temp.next!=null;temp=temp.next);
        temp.next=node;
    }
    return head;
	}
