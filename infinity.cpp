#include <iostream>
using namespace std;
int main() {
    float i=1;
    int n=0;
    
    while(i*2>i) {
        n++;
        i=10*i;
    }
    cout << n;
}
