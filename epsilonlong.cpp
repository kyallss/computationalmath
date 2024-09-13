#include <iostream>
using namespace std;
int main() {
    long double e=1;
    int n=0;

    while(1+e>1) {
        e=e/10;
        n++;
    }
    cout << n;
}
