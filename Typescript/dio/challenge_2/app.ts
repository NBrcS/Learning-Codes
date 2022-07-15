// Como podemos melhorar o esse código usando TS? 

class Person{
    public name: string;
    public age: number;
    public work: string;

    constructor(_name_: string, _age_: number, _work_: string){
        this.name = _name_;
        this.age = _age_;
        this.work = _work_;
    }
}

let pessoa1 = new Person("Maria", 29, "Atriz");
let pessoa2 = new Person("roberto", 19, "Padeiro");
let pessoa3 = new Person("laura", 32, "Atriz");
let pessoa4 = new Person("carlos", 19, "padeiro");

console.log(pessoa1);
console.log(pessoa2);
console.log(pessoa3);
console.log(pessoa4);

