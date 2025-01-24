import java.util.*;
public class random {
    public static void main(String[] args) {
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("Volvo");
        cars.add("BMW");
        cars.add("Ford");
        cars.add("Mazada");

        Collections.sort(cars);

        for (String i: cars) {
            System.out.println(i);
        }
    }
}
