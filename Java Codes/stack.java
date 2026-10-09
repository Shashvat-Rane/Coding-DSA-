
public class stack {

    public int[] arr;
    public int size;
    public int i;

    public stack(int size){
        arr = new int[size];
        this.size = size;
        this.i = -1;
    }

    public void push(int val){
        if(i == size-1){
            System.out.println("Stack Overflow");
            return;
        }

        i++;
        arr[i] = val;

    }

    public int pop(){
        if(i==-1){
            System.out.println("Stack Underflow");
            return -1;
        }
        int t = arr[i];
        i--;
        return t;
    }

    public int peek(){
        if(i==-1){
            System.out.println("Stack is empty.");
            return -1;
        }
        return arr[i];
    }
    public static void main(String[] args) {
        stack st = new stack(5);

        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(50);
        st.push(60);

        System.out.println(st.pop());
        System.out.println(st.pop());
        System.out.println(st.pop());
        System.out.println(st.peek());
        System.out.println(st.pop());

    }    
}
