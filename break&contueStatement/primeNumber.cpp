#include<iostream>
using namespace std;

int main (){

    int n, i;
    cout << "Enter an integer number: ";
    cin >> n ;

    if(n == 1){
        cout << "1 is a prime number";
    }

    for(i = 2; i < n; i++){
        if(n % i == 0){
            cout << n << " is not a prime number";
            break;
        }       
    }

    if(i == n){
            cout << n << " is a prime number";
        }

    return 0;
}