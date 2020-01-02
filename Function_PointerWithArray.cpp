#include <iostream>
using namespace std;

void input(int & _n, int *&_a) {

    cin>> _n;
    _a = new int [_n];
    
    int *temp  =new int[_n];
    for(int i = 0 ; i < _n ; i++) {
        cin >>_a[i];
    }
}

int main() {

    int n;
    int *a;
    // cout << "Input: " << endl;
    input(n, *&a);

    // cout << " Output: ";
    for ( int i = 0 ; i < n ; i ++)
        cout << a[i] << " ";
    free(a);
}