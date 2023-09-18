import java.util.Scanner;

public class Stock {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        scanner.nextLine();
        
        String[] products = new String[N];
        int[] quantity = new int[N];
        
        for (int i = 0; i < N; i++){
            String line = scanner.nextLine();
            String[] parts = line.split(" ");
            
            products[i] = parts[0];
            quantity[i] = Integer.parseInt(parts[1]);
        }
        
        String comparison = "notend";
        while(!comparison.equals("fim")){
            boolean productFound = false;
            comparison = scanner.nextLine();   

            for(int i = 0; i < N; i++){
                if (comparison.equals(products[i])){
                    int sold = scanner.nextInt();
                    scanner.nextLine();
                    System.out.println(products[i] + " " + sold);
                    quantity[i] = quantity[i] - sold;
                    productFound = true;
                }
            }
            if (!productFound && !comparison.equals("fim")) System.out.println(comparison + " produto não encontrado");
        }
        for (int i = 0; i < N; i++) {
            System.out.println(products[i] + " " + quantity[i]);
        }
    }
}  
