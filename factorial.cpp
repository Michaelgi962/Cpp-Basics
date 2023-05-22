#include <iostream>

int factorial(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){
    int n;
    std::cout << "Enter a number to find its factorial: ";
    std::cin >> n;
    std::cout << "The factorial of " << n << " is " << factorial(n) << std::endl;
    return 0;
}