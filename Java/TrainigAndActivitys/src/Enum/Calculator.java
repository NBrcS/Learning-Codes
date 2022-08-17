package Enum;

public enum Calculator {

    PRODUCT("*"){
        @Override
        public double execute(double x, double y) {
            return x * y;
        }
    },

    SUM("+") {
        @Override
        public double execute(double x, double y) {
            return x + y;
        }
    },

    SUB("-") {
        @Override
        public double execute(double x, double y) {
            return x - y;
        }
    },

    DIVIDE("/") {
        @Override
        public double execute(double x, double y) {
            return x / y;
        }
    };

    private String symbol;

    Calculator(String symbol_){
        this.symbol = symbol_;
    }

    public abstract double execute(double x, double y);

    public String toString(){
        return this.symbol;
    }
}
