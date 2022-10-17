package streams;

import java.util.Arrays;
import java.util.List;
import java.util.Set;
import java.util.function.Consumer;
import java.util.stream.Collectors;

public class main {
    public static void main(String[] args) {
        List<String> randomNumbers = Arrays.asList("4", "3", "1", "0", "9", "6", "2", "8");


        System.out.println("""
                all numbers -\s
                short form:\s
                """);
        randomNumbers.stream().
                forEach(System.out::println);

        System.out.println("long form: ");
        randomNumbers.stream()
                        .forEach(new Consumer<String>() {
                            @Override
                            public void accept(String s) {
                                System.out.println(s);
                            }
                        });


        System.out.println("take the first 5 numbers and put in a set: ");
        randomNumbers.stream()
                .limit(5)
                .collect(Collectors.toSet())
                .forEach(System.out::println);

        System.out.println("saving...");
        Set<String> collectSet =
                randomNumbers.stream()
                        .limit(5)
                        .collect(Collectors.toSet());


        System.out.println("String to int: ");
        randomNumbers.stream()
                .map(Integer::parseInt)
                .toList()
                .forEach(System.out::println);

        List<Integer> randomIntegerNumbers =
                randomNumbers.stream()
                        .map(Integer::parseInt)
                        .toList();


        List<Integer> pairNumbers =
                randomNumbers.stream()
                        .map(Integer::parseInt)
                        .filter(integer -> (integer % 2 == 0 && integer > 2))
                        .toList();
        System.out.println(pairNumbers);


        System.out.println("mid value: ");
        Double midValue = randomNumbers.stream()
                .mapToInt(Integer::parseInt)
                .average()
                .getAsDouble();
        System.out.println(midValue);







    }
}
