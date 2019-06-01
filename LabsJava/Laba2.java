import java.util.Scanner;

public class Laba2 {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        System.out.println("Введите число: ");
        double num  = scanner.nextDouble();
        double n;
        double sqrt = num / 2;
        do {
            n = sqrt;
            sqrt = (n + (num / n)) / 2;
        } while ((n - sqrt) != 0);
        System.out.println("Результат: " + sqrt);
    }
}