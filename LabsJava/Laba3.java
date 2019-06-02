import java.text.DecimalFormat;
import java.util.Scanner;

public class Laba3 {

    public static void main(String[] args) {
        DecimalFormat df = new DecimalFormat("#.###");
        System.out.println("Введите числа:");
        Scanner scan = new Scanner(System.in);
        String source_data = scan.nextLine();

        String[] items = source_data
                .replaceAll("\\s", "")
                .split(",");

        double[] result = new double[items.length];
        double summa = 0;
        for (int i = 0; i < items.length; i++) {
            try {
                result[i] = 1/(Double.parseDouble(items[i])*3);
                System.out.println("1/(" + Double.parseDouble(items[i]) + " * 3):\t" + df.format(result[i]));
                summa += result[i];
            } catch (NumberFormatException nfe) {
                System.out.println("Ошибка, попробуйте еще раз");
            };
        }
        System.out.println("Sum = " + df.format(summa));


    }
}