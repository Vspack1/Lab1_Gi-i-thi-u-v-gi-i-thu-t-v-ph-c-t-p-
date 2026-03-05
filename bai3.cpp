#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int max1 = -1000000;
    int max2 = -1000000;

    for(int i = 0; i < n; i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    cout << max2;
}
//O(n)
