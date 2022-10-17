package map;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String login, password;
        Map<String, String> users = new HashMap<>(){
            {
                put("gabriel123", "gabriel");
                put("francisco123", "francisco");
                put("andre123", "andre");
                put("ademar123", "ademar");
                put("joao123", "joao");
                put("mateus123", "mateus");
            }
        };

        System.out.print("type here your login: ");
        login = scanner.next();

        System.out.print("type here your password: ");
        password = scanner.next();

        if(users.containsKey(login) &&
                users.containsValue(password)){
            System.out.println("Welcome " + login + "!!");

            System.out.print("All users: \n\n");
            for(Map.Entry<String, String> entry : users.entrySet()) {
                System.out.println("\nuser : " + entry.getKey() + "\n" +
                                    "password: " + entry.getValue());
            }

            Map<String, String> treeMap = new TreeMap<>();
            treeMap = users;
            System.out.print("All users organized: \n\n");
            for(Map.Entry<String, String> entry : treeMap.entrySet()) {
                System.out.println("\nuser : " + entry.getKey() + "\n" +
                        "password: " + entry.getValue());
            }

        }
        else
            System.out.println("user not found");
    }
}
