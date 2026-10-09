import java.util.Scanner;

public class test{

    static class node{
        public int data;
        public node next;
    
        public node(int d){
            this.data = d;
            this.next = null;
        }
    }

    public static void insertAtEnd(int d,node head){
        while(head.next != null){
            head = head.next;
        }
        head.next = new node(d);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        node head = null;

        int d = sc.nextInt();

        while(d!=-1){
            if(head == null){
                head = new node(d);
            }
            else
                insertAtEnd(d,head);
            d=sc.nextInt();
        }

        node temp = head;

        while(temp != null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }

        sc.close();
    }
}