//метод факториал
import java.util.Scanner;
class Test {
	static int calculateFactorial(int n){
		int result = 1;
		for (int i = 1; i <=n; i++){
			result = result*i;
		}
		return result;
	}	
	public static void main(String[] args){
    Scanner scan = new Scanner(System.in);
    System.out.println("Введите число");
    int n = scan.nextInt();
		System.out.println(calculateFactorial(n)); 
	}
}
