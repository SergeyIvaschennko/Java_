//рандом
import java.util.Arrays;
import java.util.Random;
class Main {
  public static void main(String[] args) {
    int[] numb = new int[5];
    for (int i = 0; i < numb.length; i++) {
      int les = (int) (Math.random()*100);
      numb[i] = les;
    }
    for (int i = 0; i < numb.length; i++) {
      System.out.print(numb[i] + " ");
    }
    Arrays.sort(numb);
    System.out.println(" ");
    for (int i = 0; i < numb.length; i++) {
      System.out.print(numb[i] + " ");
    }
    
    System.out.println("\n");
    
    int[] rnumb = new int[5];
    for (int i = 0; i < rnumb.length; i++) {
      Random rnd = new Random();
      rnumb[i] = rnd.nextInt(100);
    }
    for (int i = 0; i < rnumb.length; i++) {
      System.out.print(rnumb[i] + " ");
    }
    System.out.println(" ");
    Arrays.sort(rnumb);
    for (int i = 0; i < rnumb.length; i++) {
      System.out.print(rnumb[i] + " ");
    }
  }
}

