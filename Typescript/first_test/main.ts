const but = document.getElementById("bt");
const inp1 = document.getElementById("in1") as HTMLInputElement;
const inp2 = document.getElementById("in2") as HTMLInputElement;

function sum(num1: number, num2: number): number{
    return num1 + num2;
}

if(but){
    but.addEventListener("click", () =>{
        if(inp1 && inp2){
            console.log(sum(Number(inp1.value), Number(inp2.value)));
        }
    });
}


