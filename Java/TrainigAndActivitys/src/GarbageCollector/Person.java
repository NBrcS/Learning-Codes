package GarbageCollector;

public class Person {
    String name = "undefined";
    String secondName = "undefined";

    int age = 0;
    String birthDay = "undefined";


    public Person(String name, String secondName, int age, String birthDay) {
        this.name = name;
        this.secondName = secondName;
        this.age = age;
        this.birthDay = birthDay;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSecondName() {
        return secondName;
    }

    public void setSecondName(String secondName) {
        this.secondName = secondName;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getBirthDay() {
        return birthDay;
    }

    public void setBirthDay(String birthDay) {
        this.birthDay = birthDay;
    }

}
