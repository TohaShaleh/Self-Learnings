
class Animal {
    String name = "Animal";

    Animal() {
        System.out.println("Animal constructor is called.");
    }

    Animal(String type)
    {
        System.out.println("The Animal is a "+type);
    }

    void sound() {
        System.out.println("Animals make different sounds.");
    }
}

class Dog extends Animal {
    String name = "Dog";

    Dog() {
        // Calling the parent class constructor using super keyword
        // We can also pass parameters here if needed based on the situation...

        super();  // if i would not use super() here , then also the constructor in parent class will inveked automatically
        System.out.println("Dog constructor is called.");
    }

    Dog(String type)
    {
        super(type);
    }

    @Override
    void sound() {
        super.sound(); 
        System.out.println("Dogs bark.");
    }

    void showName() {
        System.out.println("Name in child class: " + name); 
        System.out.println("Name in parent class: " + super.name); 
    }
}

public class Main {
    public static void main(String[] args) {

        System.out.println();
        Dog dog1 = new Dog();  // Calling the default Constructor 
        dog1.sound();
        dog1.showName();

        System.out.println("\n\n");

        Dog dog2=new Dog("Cat");  // Calling the Parameterized Constructor 
        dog2.sound();
        dog2.showName();
    }
}