#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int friends[N];
    for (int i = 0; i < N; i++) {
        cin >> friends[i];
    }
    
    int lizaNumber;
    cin >> lizaNumber;
    
    int index = -1;
    for (int i = 0; i < N; i++) {
        if (friends[i] == lizaNumber) {
            index = i;
            break;
        }
    }
    
    if (index != -1) {
        for (int i = index; i < N - 1; i++) {
            friends[i] = friends[i + 1];
        }
        
        for (int i = 0; i < N - 1; i++) {
            cout << friends[i] << " ";
        }
    } else {
        for (int i = 0; i < N; i++) {
            cout << friends[i] << " ";
        }
    }
    
    return 0;
}
