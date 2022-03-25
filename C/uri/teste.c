#include <stdio.h>
#include <math.h>

long int Factorial(int n){
    int j;
    long int factorial = 1;

    for (j = n; j>=1; j--)
    {
        factorial *= j;
    }
    return factorial;
}

int IsPrime(int x){
    int k;
    int numberOfDivisors=0;

    //for a number to be prime, it is required that it has no divisors in the interval [2, sqrt X]
    for (k=2; k<=sqrt(x); k++){
        if(x%k==0){
            numberOfDivisors++;
        }
    }

    if(numberOfDivisors == 0){
        return x;
    }
    else{
        return 1;
    }
}

int main(){
    int n;  //n is a prime number
    long int sum = 0;   // sum of factorial of prime numbers between 2 and n:
    int i;

    //asking the user the value of n
    printf("Value of n: ");
    scanf("%d", &n);

    //sum of factorial of prime numbers:
    for (i = 2; i <= n; i++)
    {
        sum += Factorial(IsPrime(i));
    }

    printf("%ld", sum);

    return 0;
}
