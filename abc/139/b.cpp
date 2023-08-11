#include <iostream>
using namespace std;
 
int main() {
    int A, B;
    cin >> A >> B;

    int n = 0;

    while (A * n - n + 1 < B) {
        n += 1;
    }

    cout << n << endl;

    return 0;
}