import java.util.Scanner;

public class IdealWeight {
    public static void main(String[] args) {
        Scanner scanner =  new Scanner(System.in);
        float height = scanner.nextFloat();
        char sex = scanner.next().charAt(0);
        
        if (((sex != 'f' && sex != 'm' ) || height <= 0 )) {
            System.out.println("Entrada inválida!");
        }
        else{
            float idealWeight =0;
            
            switch(sex){
                case 'm':
                idealWeight = (72.7f*height) - 58;
                break;
                case 'f':
                idealWeight = (62.1f*height) - 44.7f; 
            }
            System.out.printf("%.1f kg\n", idealWeight);
       
        }
        scanner.close();
    }
}
