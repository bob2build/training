import java.util.*;

class Name{
  public String firstName;
  public String lastName;

  public Name(String firstName, String lastName){
    this.firstName = firstName;
    this.lastName = lastName;
  }

  public String toString(){
    return firstName + " " + lastName;
  }
}

class FirstNameComparator implements Comparator<Name>{
  public int compare(Name n1, Name n2){
    return n1.firstName.compareTo(n2.firstName);
  }
}



class SortDemo{
  public static void main(String[] args){
    int arr[] = new int[]{1, 5,4,2,3};
    String strArr[] = new String[]{"basket", "apple", "orange"};
    Name names[] = new Name[]{
      new Name("Bobby", "Fisher"),
      new Name("Adam", "Burks"),
      new Name("Amy", "Watson")
    };
    System.out.println("Before Sort");
    System.out.println(Arrays.toString(arr));
    System.out.println(Arrays.toString(strArr));
    System.out.println(Arrays.toString(names));
    Arrays.sort(arr);
    Arrays.sort(strArr);
    Arrays.sort(names, new FirstNameComparator());
    System.out.println("After Sort");
    System.out.println(Arrays.toString(strArr));
    System.out.println(Arrays.toString(names));
  }

}
