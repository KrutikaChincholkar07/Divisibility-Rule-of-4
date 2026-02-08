#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int lastTwo = num % 100;

    if (lastTwo % 4 == 0)
        cout << num << " is divisible by 4";
    else
        cout << num << " is not divisible by 4";

    return 0;
}
