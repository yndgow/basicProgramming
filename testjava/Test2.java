import java.util.Scanner;

public class Test2 {
    
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        int i = 0;
        int j = 0;
        int k = 0;
        int result = 0;

        System.out.println("첫번째 수를 입력하세요.");
        i = sc.nextInt();
        System.out.println("두번째 수를 입력하세요.");
        j = sc.nextInt();
        System.out.println("세번째 수를 입력하세요.");
        k = sc.nextInt();

        result = i + j - k;
        System.out.printf("%d + %d - %d = %d", i, j, k, result);
        sc.close();
    }
}
