// //Вывод аргументов командной строки
import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.print("Введите 5 чисел\n");
    int[] numb = new int[5];
    for (int i = 0; i < numb.length; i++) {
      numb[i] = scan.nextInt();
    }
    System.out.print("Результат\n");
    for (int i = 0; i < numb.length; i++) {
      System.out.print(numb[i] + " ");
    }
  }
}