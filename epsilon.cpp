#include <iostream>
using namespace std;
int main() {
    float e=1;
    int n=0;
    while(1+e>1) {
        n++;
        e=e/10;
    }
    
    cout << n;
}
