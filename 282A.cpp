#include<iostream>
using namespace std;
int main() {
    int n;
    int result = 0;
    cin >> n;
    for (int i = 0; i<n; i++) {
        string a;
        cin >> a;
        if ((a == "X++") || (a == "++X")) {
            result+=1;
        } else if ((a == "X--") ||( a == "--X"))
        {
            result-=1;
        }
    }
    cout << result<< endl;
}
