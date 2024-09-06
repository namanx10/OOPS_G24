#include <bits/stdc++.h>
using namespace std;

int main () {

   array<int , 5 >arr = {2,4,6,8,10};

//print the array
   for (int i = 0; i < 5; i++) {
    cout<<arr.at(i)<< " ";
   }

//Print first element of array
   cout<<endl;
   cout<<arr.front();

//Print last element of array
   cout<<endl;
   cout<<arr.back()<<endl;

// Replace the array elements by 10 and print it
   for (int i = 0; i < arr.size(); i++) {
        arr.at(i) = 10;
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr.at(i) << " ";
    }

    return 0;
}
