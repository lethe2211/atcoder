#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int N, M, C;
    cin >> N >> M >> C;

    vector<int> B;
    for (int i = 0; i < M; i++) {
        int tmp;
        cin >> tmp;
        B.push_back(tmp);
    }

    vector< vector<int> > A(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int tmp;
            cin >> tmp;
            A.at(i).at(j) = tmp;
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++) {
            sum += A.at(i).at(j) * B.at(j);
        }
        sum += C;

        if (sum > 0) {
            ans += 1;
        }
    }

    cout << ans << endl;
}