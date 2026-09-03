#include <bits/stdc++.h>
using namespace std;

int main(){
    // swap algorithm
    int n[2];
    n[0] = 1;
    n[1] = 2;

    for(int i = 0; i < 2; i++){
        int temp = n[i];
        n[i] = n[i+1];
        n[i+1] = temp;
    }

    cout << "n[0] " << n[0] << ",n[1] " << n[1] << endl;
    
    n[0] = 1;
    n[1] = 2;
    swap(n[0], n[1]);
    cout << "n[0] " << n[0] << ",n[1] " << n[1] << endl;

    // search algorithm

    int data[4] = {1,2,3,4};
    int maks = data[3];
    for (int i = 1; i < 4; i++) {
    if (data[i] > maks)
        maks = data[i];
    }
    cout << maks << endl;
    
    // sum algorithm
    
    int total = 0;
    for (int i = 0; i < 4; i++) {
        total += data[i];
    }
    cout << total << endl;
    
}