import java.util.Scanner;

public class ElectricEnergy {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        double consume = scanner.nextFloat();
        float fee  = 5;
        double payment = 0;
        
        if (consume <= 500) payment = consume*0.02;
        if (consume > 500 && consume <= 1000) payment = 500*0.1 + (consume-500)*0.05;
        if (consume > 1000) payment = 1000*0.35 + (consume-1000)*0.1;
        
        System.out.printf("%.2f %.2f %.2f\n", payment, fee, (fee+payment));
    }
}
