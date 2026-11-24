// #include<bits\stdc++.h>
// using namespace std;

// int * p;

// void fun (){

//     int x = 10;
//     p = &x;
//     cout << "Fun" << *p << endl;
//     return;
// }


// int main(){

//  fun();
//     cout << "Main" << *p;
//     return 0;
// }



//--------Dynamic Variable--------

#include<bits\stdc++.h>
using namespace std;

int * p;

int fun (){

    int *x = new int;
    *x = 10;
    p = x;
    cout << "Fun" << *p << endl;
    return x;
}


int main(){

 fun();
    cout << "Main" << *p;
    return 0;
}