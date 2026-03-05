#include <iostream>
using namespace std;

int main() {
    int n, x;
    int a[100];
    int count = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cin >> x;

    for(int i = 0; i < n; i++) {
        if(a[i] == x)
            count++;
    }

    cout << count;
}
//O(n)
