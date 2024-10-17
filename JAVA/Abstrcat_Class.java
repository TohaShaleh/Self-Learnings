
abstract class Animal {
   
    String name;
    int age;

    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }

    
    public abstract void makeSound();

   
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

class Dog extends Animal {

    public Dog(String name, int age) {
        super(name, age); // Call the superclass constructor
    }

    // Provide implementation for the abstract method
    @Override
    public void makeSound() {
        System.out.println(name + " says: Woof Woof!");
    }
}

public class Main {
    public static void main(String[] args) {
        
        Dog myDog = new Dog("Tommy", 5);

        myDog.displayInfo();

        // Call the abstract method's implementation in the subclass
        myDog.makeSound();
    }
}