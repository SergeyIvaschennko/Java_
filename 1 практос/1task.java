// //суммы элементов массива
import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    
    int[] numb = new int[5];
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    System.out.print("Введите 5 чисел\n");
    
    for (int i = 0; i < numb.length; i++) {
      numb[i] = scan.nextInt();
    }
    for (int i = 0; i < numb.length; i++) {
      count1 += numb[i];
    }
    System.out.print("Результат\n");
    System.out.print(count1 + "\n");

    int i = 0;
    while(i < numb.length) {
      count2 += numb[i];
      i++;
    }
    System.out.print("Результат\n");
    System.out.print(count2 + "\n");

    i = 0;
    do {
      count3 += numb[i];
      i++;
    } while (i < numb.length);
    System.out.print("Результат\n");
    System.out.print(count3);
  }
}
