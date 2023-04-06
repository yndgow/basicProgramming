class A{
    int a;
    int b;
}

public class P190 {
    static void func1(A m){
        m.a *= 10;
    }
    static void func2(A m){
        m.a += m.b;
    }
    public static void main(String[] args) {
        A m = new A();
        // m 객체 생성 직후
        System.out.println("m.a = "+ m.a + " m.b = " + m.b);
        m.a = 100;
        System.out.println("m.a = "+ m.a + " m.b = " + m.b);
        func1(m);
        m.b = m.a;
        func2(m);
        System.out.println("m.a = "+ m.a + " m.b = " + m.b);
        System.out.printf("%d", m.a);
        
    }
}
