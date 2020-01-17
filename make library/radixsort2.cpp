package Workshop2.Question2;

import java.util.Scanner;

public
class ArrayDriver
{

public
    static Scanner in = new Scanner(System.in);

public
    static void main(String args[])
    {
        int choice = Validation.checkInputIntLimit(1, 3);
        switch (choice)
        {
        case 1:
            System.out.println("Option 1 selected");
            function1();
            break;
        case 2:
            System.out.println("Option 2 selected");
            function2();
            break;
        case 3:
            System.out.println("Exit selected");
            running = false;
            break;
        default:
            System.out.println("Invalid selection");
            break;
        }
    }
} static void function1()
{
    System.out.println("chua lam");
}
static void function2()
{
    System.out.println("chua lam luon");
}
}
}
