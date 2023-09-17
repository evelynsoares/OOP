import java.util.Scanner;

public class iptu {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int type = scanner.nextInt();
        double area = scanner.nextFloat();
        
        if ((type != 1 && type != 2) || (area < 0)){
            System.out.println("Entrada inválida!");
        }
        else {
            double price =0;
            if(area < 200 && type == 1) price = area;
            if(area < 200 && type == 2) price = area*1.1;
            if(area >=  200 && type == 1) price = area*1.2;
            if(area >=  200 && type == 2) price = area*1.3;     
            System.out.printf("%.2f", price);
        }
    }
}
