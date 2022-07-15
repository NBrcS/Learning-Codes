/*

// Como podemos rodar isso em um arquivo .ts sem causar erros? 

let employee = {};
employee.code = 10;
employee.name = "John";

*/


class Employee{
    private name: string;
    private code: number;

    constructor(_name_: string, _code_: number){
        this.name = _name_;
        this.code = _code_;
    }

    getName(): string{
        return this.name;
    }
    getCode(): number{
        return this.code;
    }
    setName(_name_: string): void {
        this.name = _name_;
    }
    setCode(_code_: number): void{
        this.code = _code_;
    }

    printInfo(): string{
        return "Name: " + this.name + "\nCode: " + this.code;
    }
}

let employee = new Employee("Jhon", 10);
console.log(employee.printInfo());

