
import java.io.IOException;

public class ExceptionHandlingExample {
    public static void main(String[] args) {

        try {
            int result = divide(10, 0); // This will throw an ArithmeticException
            System.out.println("Result: " + result);

        } catch (Exception e) {
            System.out.println("Error: "+e.getMessage());

        } finally {
            System.out.println("Finally block executed.");
        }
    }

    public static int divide(int a, int b) throws Exception {
        if (b == 0) {
            throw new Exception("Cannot divide by zero man .... ");
        }

        return a / b;
    }
}