public class Sec1241 implements Sec124{

    @Override
    public int add(int x, int y) {
        return x + y;
    }

    @Override
    public double div(int x, int y) {
        return x / y;
    }

    @Override
    public int mul(int x, int y) {
        return x * y;
    }

    @Override
    public int sub(int x, int y) {
        return x - y;
    }

    public int sqr(int x){
        return x * x;
    }
    public static void main(String[] args) {
        int a = 2;
        int b = 4;
        Sec1241 calc = new Sec1241();
        System.out.println("add : " + calc.add(a, b));
        System.out.println("sub : " + calc.sub(a, b));
        System.out.println("div : " + calc.div(a, b));
        System.out.println("mul : " + calc.mul(a, b));
        System.out.println("sqr : " + calc.sqr(a));
    }
    
}
