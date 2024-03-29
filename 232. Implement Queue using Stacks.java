class MyQueue {
        Deque<Integer> in;
    Deque<Integer> out;

    /** Initialize your data structure here. */
    public MyQueue() {
        this.in = new LinkedList<Integer>();
        this.out = new LinkedList<Integer>();
    }
    
    /** Push element x to the back of queue. */
    public void push(int x) {
        in.offerFirst(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    public int pop() {
        move();
        return out.pollFirst();
    }
    
    /** Get the front element. */
    public int peek() {
        move();
        return out.peekFirst();
    }
    
    /** Returns whether the queue is empty. */
    public boolean empty() {
        return in.size() == 0 && out.size() == 0;
    }
    
    /** Move all the elements from stack_in to stack_out */
    private void move() {
        if (out.isEmpty()) {
            while (!in.isEmpty()) {
                out.offerFirst(in.pollFirst());
            }
        }
    }

}
