#include<iostream>

using namespace std;

int main() {
    int N = 0;
    cin >> N;
    int *D = new int[N];
    for (int i = 0; i < N; i++)
        cin >> D[i];
    //Ready to sort
    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (D[j] > D[j + 1]) {
                int tmp = D[j];
                D[j] = D[j + 1];
                D[j + 1] = tmp;
            }
        }
    }
    cout << D[N / 2];
    return 0;
}