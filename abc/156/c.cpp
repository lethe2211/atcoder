#include <iostream>
#include <vector>

#define MAX_INT 2147483647

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> X;
    for (int i = 0; i < N; i++) {
        int val;
        cin >> val;
        X.push_back(val);
    }

    int m = MAX_INT;
    for (int i = 1; i <= 100; i++) {
        int dist = 0;
        for (int j = 0; j < N; j++) dist += (X.at(j) - i) * (X.at(j) - i);
        m = std::min(dist, m);
    }

    cout << m << endl;
}