import java.util.Scanner;

public class Calc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("첫번째 정수를 입력해 주세요.");
        int i = sc.nextInt();
        System.out.println("두번째 정수를 입력해 주세요.");
        int j = sc.nextInt();
        
        int sum = i + j;
        System.out.printf("%d + %d = %d", i, j, sum);
        
        sc.close();

    }
}