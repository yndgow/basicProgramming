abstract class Animal{
    String name;
    int legs;
    String sound;
    abstract void isInBackYard();
    public Animal(String name, int legs, String sound) {
        this.name = name;
        this.legs = legs;
        this.sound = sound;
    }
    public void Cry(){
        print(this.name + " " + this.sound);
    }
    public void print(String msg){
        System.out.printf("%s", msg + " is Sound.");
    }
    public Animal() {};
    
}

class Chiken extends Animal{
    public Chiken() {
        super("myChiken", 2, "ggoggo");
    }
    public void isInBackYard(){
        System.out.println("우리집 닭이 마당에 있습니다.");
    }
}

class Goose extends Animal{
    public Goose() {
        super("myGoose", 2, "kwakkkwaak");   
    }
    public void isInBackYard(){
        System.out.println("우리집 거위가 마당에 있습니다.");
    }
}
class Puppy extends Animal{
    public Puppy() {
        super("myPuppy", 4, "bowow");
    }
    public void isInBackYard(){
        System.out.println("우리집 강이지가 마당에 있습니다.");
    }
}
class Cat extends Animal{
    public Cat() {
        super("myCat", 4, "miya");
    }
    public void isInBackYard(){
        System.out.println("우리집 고양이가 마당에 있습니다.");
    }
}

public class AnimalTest {
    public static void main(String[] args) {
        Chiken myChiken = new Chiken();
        Goose myGoose = new Goose();
        Puppy myPuppy = new Puppy();
        Cat myCat = new Cat();
    
        myChiken.Cry();
        System.out.println();
        myGoose.Cry();
        System.out.println();
        myPuppy.Cry();
        System.out.println();
        myCat.Cry();
        
        

        
        
    }    
}
