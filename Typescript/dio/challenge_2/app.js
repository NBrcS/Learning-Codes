// Como podemos melhorar o esse código usando TS? 
var Person = /** @class */ (function () {
    function Person(_name_, _age_, _work_) {
        this.name = _name_;
        this.age = _age_;
        this.work = _work_;
    }
    return Person;
}());
var pessoa1 = new Person("Maria", 29, "Atriz");
var pessoa2 = new Person("roberto", 19, "Padeiro");
var pessoa3 = new Person("laura", 32, "Atriz");
var pessoa4 = new Person("carlos", 19, "padeiro");
console.log(pessoa1);
console.log(pessoa2);
console.log(pessoa3);
console.log(pessoa4);
