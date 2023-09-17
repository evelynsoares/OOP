import java.util.Scanner;

public class AccessControl {
    public static void main(String[] args){
        Scanner scanner =  new Scanner(System.in);
        char gender = 'a';
        int women = 0;
        int men = 0;
        double total;
        
        while(gender != 'q'){
            gender = scanner.next().charAt(0);
            if (gender == 'm') women++;
            if (gender == 'h') men++;
        }
        System.out.printf("%d %d\n", men, women);
        total = ((men*12.5)+(women*7.4));
        System.out.printf("%.2f %.2f %.2f\n", (men*12.5), (women*7.4), total);
    
    }
}
