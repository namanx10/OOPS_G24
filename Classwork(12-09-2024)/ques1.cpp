#include<iostream>
using namespace std;

int main() {
long long A, B, C, D;
cin >> A >> B >> C >> D;

long long last_two_digits = ((((A % 100) * (B % 100)) % 100) * ((C % 100) * (D % 100))) % 100;

     if(last_two_digits < 10){
        cout << "Last 2 digits : " << 0 << last_two_digits;
    }
    else{
        cout << last_two_digits;
    }

    return 0;
}
