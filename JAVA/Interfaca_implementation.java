
interface Animal {
    
    void makeSound();  
    void displayInfo(); 
}

class Dog implements Animal {
    
    String name;
    int age;

    public Dog(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public void makeSound() {
        System.out.println(name + " says: Woof Woof!");
    }

    @Override
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

public class Main {
    public static void main(String[] args) {
       
        Dog myDog = new Dog("Buddy", 5);

        myDog.displayInfo();
        myDog.makeSound();
    }
}







// Solution of Multiple inheritace in JaVa !!

interface toha {
    
    void send();  
    
}

interface anik{
    void send();
}

class mobile implements toha,anik{

    @Override
    public void send()
    {
        System.out.println("\nI can send wheanever i just want !! \n");
    }
}

public class Main {
    public static void main(String[] args) {
       
       mobile obj=new mobile();
       obj.send();
    }
}


