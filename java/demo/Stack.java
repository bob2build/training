import java.util.*;
class Stack {
  //int array[] = new int[10];
  //int tos = -1;
  private LinkedList<Integer> list = new LinkedList<Integer>();

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
