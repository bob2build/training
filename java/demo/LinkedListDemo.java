import java.util.*;
class Stack {
  LinkedList<Integer> list = new LinkedList<Integer>();
  public void push(int e){
    list.add(0, e);
  }

  public int pop(){
    int x = list.get(0);
    list.remove(0);
    return x;
  }

  public boolean is_empty(){
    return list.isEmpty();
  }
}
