#include <iostream>
using namespace std;

int main() {
    int n;
    int a[500];

    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    bool unique = true;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                unique = false;
                break;
            }
        }
        if(!unique) break;
    }

    if(unique)
        cout << "true";
    else
        cout << "false";
}
//O(n²)
