#include <iostream>
using namespace std;
int main(){
    long num;
    cout<< "Enter a number : ";
    cin >> num;
    long n = 0;
    while(num > 0){
        long digit = num % 10;
        n = n * 10 + digit;
        num /= 10;
    }
    cout << n << endl;
    return 0;
}