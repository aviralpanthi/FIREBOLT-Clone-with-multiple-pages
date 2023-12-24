#include<iostream>
using namespace std;
 int subset(int a[],int n){
    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0) {
                cout << a[j] << " ";
            }
        }
 
        cout << endl;
    }
 }
 int main(){
    int a[]={1,2,3};
    cout<<subset(a,3);
 }