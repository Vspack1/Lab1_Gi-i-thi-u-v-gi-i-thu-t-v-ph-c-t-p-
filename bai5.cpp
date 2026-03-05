#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100];
    int count = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++) {

        if(a[i] < 2)
            continue;

        bool prime = true;

        for(int j = 2; j * j <= a[i]; j++) {
            if(a[i] % j == 0) {
                prime = false;
                break;
            }
        }

        if(prime)
            count++;
    }

    cout << count;
}
//O(n√m)
