import java.util.Scanner;

public class Laba1 {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        float num1 = N();
        float num2 = N();
        char operation = Op();
        float result = cal(num1,num2,operation);
        System.out.println("= " + result);
    }
    public static float N(){
        System.out.println("Введите число:");
        float num;
        if(scanner.hasNextFloat()){
            num = scanner.nextFloat();
        } else {
            System.out.println("Ошибка. Введите число еще раз:");
            scanner.next();
            num = N();
        }
        return num;
    }
    public static char Op(){
        System.out.println("Введите операцию:");
        char operation;
        if(scanner.hasNext()){
            operation = scanner.next().charAt(0);
        } else {
            System.out.println("Ошибка при вводе операции. Повторите ввод.");
            scanner.next();
            operation = Op();
        }
        return operation;
    }
    public static float cal(float num1, float num2, char operation){
        float result;
        switch (operation){
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                System.out.println("Операция не распознана. Повторите ввод.");
                result = cal(num1, num2, Op());
        }
        return result;
    }
}
