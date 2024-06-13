#include<iostream>
using namespace std;

int main(){
    int firstValue, secondValue, thirdValue;
    cin >> firstValue >> secondValue >> thirdValue;

    if(firstValue > secondValue){
        if(firstValue > thirdValue){
            cout << "Max value is " << firstValue;
        }else{
            cout << "Max value is " << thirdValue;
        }
    }else{
        if(secondValue > thirdValue){
            cout << "Max value is " << secondValue;
        }else{
            cout << "Max value is " << thirdValue;
        }
    }  

    return 0;
}