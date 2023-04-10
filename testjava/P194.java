class Parent {
    void show(){
        System.out.println("parent");
    }
}
class Child extends Parent{
    @Override
    void show() {
        System.out.println("child");
    }
    void show1() {
        System.out.println("child");
    }
    void show2() {
        System.out.println("child");
    }
}

public class P194 {
    public static void main(String[] args) {
        Parent pa = new Child();
        pa.show();
        
    }    
}
