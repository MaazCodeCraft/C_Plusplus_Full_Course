#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Enter the value of nth : ";
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i <= n) {
        sum = sum + i;
        i = i + 1;
    }

    cout << "Sum of nth numbers =  " << sum << endl;
}
