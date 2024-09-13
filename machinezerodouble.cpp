#include <iostream>
using namespace std;
int main() {
    double z=1;
    int n=0;

    while(2*z>z) {
        n++;
        z=z/2;
    }
    cout << n;
}
