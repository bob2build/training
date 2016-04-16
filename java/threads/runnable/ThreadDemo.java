public class ThreadDemo {
  public static void main(String[] args){
    Task task = new Task();
    Thread thread = new Thread(task);
    thread.start();
    System.out.println("Main Thread execution completed : " + Thread.currentThread());
  }
}
