import java.util.Scanner;

public class count2 {
    public static void main(String[] args) {
        Scanner count = new Scanner(System.in);
        System.out.print("Enter number for counting : ");
      int  num = count.nextInt();
        for (int i = 0; i <= num; i++) {
            System.out.println( i );
        }
        
    }
}
