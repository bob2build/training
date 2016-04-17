class StackDemo {
  public static void main(String[] args){
    Stack s1 = new Stack();
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    while(!s1.is_empty())
    {
      System.out.println(s1.pop());
    }

  }
}
