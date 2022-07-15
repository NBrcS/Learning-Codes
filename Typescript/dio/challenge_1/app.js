/*

// Como podemos rodar isso em um arquivo .ts sem causar erros?

let employee = {};
employee.code = 10;
employee.name = "John";

*/
var Employee = /** @class */ (function () {
    function Employee(_name_, _code_) {
        this.name = _name_;
        this.code = _code_;
    }
    Employee.prototype.getName = function () {
        return this.name;
    };
    Employee.prototype.getCode = function () {
        return this.code;
    };
    Employee.prototype.setName = function (_name_) {
        this.name = _name_;
    };
    Employee.prototype.setCode = function (_code_) {
        this.code = _code_;
    };
    Employee.prototype.printInfo = function () {
        return "Name: " + this.name + "\nCode: " + this.code;
    };
    return Employee;
}());
var employee = new Employee("Jhon", 10);
console.log(employee.printInfo());
