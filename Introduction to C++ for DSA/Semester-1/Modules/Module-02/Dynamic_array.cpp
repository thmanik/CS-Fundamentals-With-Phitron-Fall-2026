#include<bits/stdc++.h>

using namespace std;
int main(){
  
    //    int a[6];
    int *a = new int[6];

    for( int i = 0; i < 5; i++){
        cin >> a[i] ;
    }
    for( int i = 0; i < 5; i++){
        cout << a[i] <<" " ;
    }


    return 0;
}