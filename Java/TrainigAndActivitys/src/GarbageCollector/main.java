package GarbageCollector;

public class main {
    public static void main(String[] args) {
        Person[] people = new Person[10000000];
        Garbage trashInfo = new Garbage();

        for(int i = 0; i < people.length; i++){
            people[i] = new Person(
                    "Person ",
                    "" + i,
                    i,
                    "day " + i
            );
        }
        trashInfo.showMemory();

        people = null;
        trashInfo.clearMemory();

        trashInfo.showMemory();
    }
}
