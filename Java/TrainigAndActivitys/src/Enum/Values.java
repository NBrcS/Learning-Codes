package Enum;

public class Values {

    // The .values() method returns in an array all
    // the values contain in the Enum type
    public static WeekDays[] days = WeekDays.values();

    // Do not need this method, but now appear a bit more than a class
    public WeekDays[] getDays(){
        return this.days;
    }
}
