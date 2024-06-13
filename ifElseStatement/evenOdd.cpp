#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter a integer value: ";
    cin >> num;
    cout << endl;

    if(num % 2 == 0){
        cout << num << " is a even number.\n";
    }else{
        cout << num << " is a odd number. \n";
    }

    
    return 0;
}