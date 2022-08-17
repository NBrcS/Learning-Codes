import java.io.*;

public class main {
    public static void main(String[] args) throws IOException {

        File file = new File("itens.txt");

        if(!file.exists()){
            System.out.println("Won`t exists");
            return;
        }

        try{
            FileWriter writer = new FileWriter(file);
            writer.write("I don`t know what write here\n" +
                            "well, don`t care\n" +
                            "i`m going to the gym\n" +
                            "this is being so awesome for my mind");
            writer.close();


            FileReader reader = new FileReader(file);
            int data = reader.read();

            while(data != -1) {
                System.out.print((char) data);
                data = reader.read();
            }
        }
        catch(IOException e){
            e.printStackTrace();
        }

    }
}
