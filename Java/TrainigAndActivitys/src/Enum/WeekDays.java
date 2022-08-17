package Enum;

public enum WeekDays {
    SUNDAY(1),
    MONDAY(2),
    TUESDAY(3),
    WEDNESDAY(4),
    THURSDAY(5),
    FRIDAY(6),
    SATURDAY(7);
    private int value;

    WeekDays(int day_){
        this.value = day_;
    }

    public int getValue(){
        return this.value;
    }
}
