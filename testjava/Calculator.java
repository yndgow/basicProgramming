public abstract class Calculator implements Sec124{

    @Override
    public int add(int x, int y) {
        return x + y;
    }

    @Override
    public double div(int x, int y) {
        //double xd = (double)x;
        double yd = (double)y;
        
        return x / yd;
    }

    @Override
    public int mul(int x, int y) {
        return x * y;
    }

    @Override
    public int sub(int x, int y) {
        return x - y;
    }

    abstract public int sqr(int x);
    
}
