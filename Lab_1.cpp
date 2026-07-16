#include <iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter a number: ";
    cin >> num;
    string n = "";
    while(num > 0){
        int digit = num % 10;
        n += to_string(digit);
        num /= 10;
    }
    cout << n << endl;
    return 0;
}