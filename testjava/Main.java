// ClassA라는 데이터형식 정의
// 명령함수가 없는 c언어의 구조체
class ClassA{
    int a = 10;
    int b = 20;
    String owner;
}



/* 
 *  자바에서는 실행시작점(=최초 실행함수)을 main()함수로 한다.
 *  c언어와 동일. 반드시 아래 구분을 지켜야함.
 *  public class 메인클래스명{
 *      public static void main(String[] args){
 *          프로그램코드
 *      }
 * }
 */

public class Main{
    static int a = 10;
    public static void main(String[] args) {
        System.out.println("a = " + a);

        // 홍길동의 소유한 classA형식 객체
        ClassA 홍길동객체 = new ClassA(); // ClassA형식 객체 class
        홍길동객체.owner = "홍길동";
        홍길동객체.a = 100;
        홍길동객체.b = 200;
        int c = 홍길동객체.a + 홍길동객체.b;

        System.out.println("홍길동객체의 owner : " + 홍길동객체.owner);
        System.out.println("홍길동객체의 a : " + 홍길동객체.a);
        System.out.println("홍길동객체의 b : " + 홍길동객체.b);
        System.out.println("c = " + c);


    }
}