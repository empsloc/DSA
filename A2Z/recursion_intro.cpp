#include <iostream>
using namespace std;

void printHello(int n) {
 
    if (n == 0)
        return;

    // Print the message
    cout << "Hello" << endl;

   
    printHello(n - 1);
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    printHello(N);

    return 0;
}
