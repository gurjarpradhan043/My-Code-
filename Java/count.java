import java.util.Scanner;
public class count {
    public static void main(String[] args) {
        Scanner count = new Scanner(System.in);
        System.out.print("Enter number for counting : ");
      int  num = count.nextInt();
        for (int i = 1; i <= num; i++) {
            System.out.println( i );
        }
        
    }
}
