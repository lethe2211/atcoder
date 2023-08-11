#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    bool flag = false;
    for (int i = 1; i <= 50000; i++) {
        if (floor(i * 1.08) == N) {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    
    if (!flag) cout << ":(" << endl;

    return 0;
}