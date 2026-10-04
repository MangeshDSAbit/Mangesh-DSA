#include<iostream>
using namespace std;
int main () {
    int n = 5;
    for ( int i=0; i<n; i++ ) {
        int m = 5;
        char ch = 'A';
        for ( int j=0; j<m; j++ ) {
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
    return 0;
}