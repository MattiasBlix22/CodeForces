#include<iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    int result;
    while(a<=b) {
        a*=3;
        b*=2;
        result++;
    }
    cout<<result<<endl;
}