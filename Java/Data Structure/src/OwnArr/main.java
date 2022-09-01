package OwnArr;

public class main {
    public static void main(String[] args) {
        OwnArr arr = new OwnArr(1);

        System.out.println(arr.getSize());

        for(int i = 0; i < 10; i++){
            System.out.println(arr.add("adding " + i) + " - " + i);
        }

        System.out.println(arr.toString());
        System.out.println(arr.get(40));
        System.out.println(arr.have("Adding"));
        System.out.println(arr.have("adding 0"));

        System.out.println(arr.add("testing", 2));
        System.out.println(arr.toString());

        System.out.println(arr.delete(3));
        System.out.println(arr.toString());

        System.out.println(arr.lastIndexOf("testing"));
        System.out.println(arr.contains("0"));
    }
}
