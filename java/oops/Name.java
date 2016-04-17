public class Name implements Comparable {
  public String firstName;
  public String lastName;

  public Name(String firstName, String lastName){
    this.firstName = firstName;
    this.lastName = lastName;
  }

  public String toString(){
    return firstName + " " + lastName;
  }

  public int compareTo(Object o){
    Name n = (Name)o;
    return this.firstName.compareTo(n.firstName);
  }
}
/*
class PassportName extends Name{
  public String initials;
}


Name n = new PassportName();

Name n = new Object();

new Name() -> object of Name, instance of Name, Object
new PassportName() -> object of PassportName, instance of Name, PassportName, Object











*/
