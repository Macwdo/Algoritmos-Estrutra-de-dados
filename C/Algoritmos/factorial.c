#include <stdio.h>


int factorial(int number){
    printf("Factorial Calling Number %d\n", number);
    if (number > 1) {
       return number * factorial(number-1);
    };

    return 1;
};

int main(){
    int result;
    result = factorial(5);
    printf("%d", result);

};