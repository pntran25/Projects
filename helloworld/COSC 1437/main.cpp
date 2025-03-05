#include <iostream>
using namespace std;

int main() {

    int num, digit, result = 0;
    cout << "Enter NUm:" << endl;
    cin >> num;

    while (num != 0){
        digit = num % 10;
        result += digit;
        num /= 10;
    }

    cout << "The sum of the digits is:" << result << endl;

    
}
