public class NonSyncCounter{
  public static void main(String[] args) throws Exception{
    Counter counter = new Counter();
    Thread t1 = new Thread(new CounterTask(counter));
    Thread t2 = new Thread(new CounterTask(counter));
    Thread t3 = new Thread(new CounterTask(counter));
    t1.start();
    t2.start();
    t3.start();
    t1.join();
    t2.join();
    t3.join();
    System.out.println(counter);
  }
}

class CounterTask implements Runnable{
  private Counter counter;
  public CounterTask(Counter counter){
    this.counter = counter;
  }

  public void run(){
    for(int i = 0;i<10;i++){
      System.out.println("Increment : " + Thread.currentThread());
      counter.increment();
    }
  }
}

class Counter {
  int count;
  public synchronized void increment(){
    int t = count;
    try{
      Thread.sleep(100);
    } catch(InterruptedException e){
      System.err.println("Error while trying to sleep");
    }
    count = t + 1;
  }
  public String toString(){
    return String.valueOf(count);
  }
}
