import java.util.Scanner;

public class DivisibleBy4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();

        int lastTwo = num % 100;

        if (lastTwo % 4 == 0)
            System.out.println(num + " is divisible by 4");
        else
            System.out.println(num + " is not divisible by 4");
    }
}
