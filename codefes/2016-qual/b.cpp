#include <iostream>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    string S;
    cin >> S;

    int domestic_rank = 0;
    int overseas_rank = 0;
    for (int i = 0; i < S.size(); i++) {
        char c = S.at(i);

        switch (c) {
        case 'a':
            if (domestic_rank + overseas_rank < A + B) {
                domestic_rank += 1;
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        case 'b':
            if (domestic_rank + overseas_rank < A + B && overseas_rank < B) {
                overseas_rank += 1;
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        case 'c':
            cout << "No" << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}