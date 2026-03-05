#include <iostream>
using namespace std;

int main() {
    int n, x;
    int a[100000];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> x;

    int pos = -1;

    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            pos = i;
            break;
        }
    }

    cout << pos;
}
//O(n)
