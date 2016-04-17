import java.util.*;
class PolyDemo{
  public static void main(String[] args){
    Name names[] = new Name[]{
      new Name("Bobby", "Fisher"),
      new Name("Adam", "Burks"),
      new Name("Amy", "Watson")
    };
    System.out.println("Before Sort");
    System.out.println(Arrays.toString(names));
    Arrays.sort(names);
    System.out.println("After Sort");
    System.out.println(Arrays.toString(names));
  }
}
