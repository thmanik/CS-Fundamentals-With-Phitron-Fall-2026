#include<bits/stdc++.h>

using namespace  std;

int main (){
  
    int* x = new int[3];
    for(int i = 0; i < 3; i++){
        cin >> x[i];
    }

    int* y = new int[5];
   
    for( int i = 0; i < 5; i++){
         y[i] = x[i];
    }

     y[3] = 6;
     y[4] = 7;
     delete[] x;
     for(int i = 0; i < 5; i++){
        cout << y[i] << " ";
    }

    

    return 0;
}



