package GarbageCollector;

public class Garbage {
    Runtime runtime;

    public Garbage() {
        this.runtime = Runtime.getRuntime();;
    }

    public void showMemory(){
        long MB = 1024 * 1024;

        double usedMemory = 1.0 * (this.runtime.totalMemory() - this.runtime.freeMemory()) / MB;
        System.out.printf("Used memory: %.2f MB\n", usedMemory);
    }

    public void clearMemory(){
        Runtime.getRuntime().runFinalization();
        Runtime.getRuntime().gc();
    }
}
