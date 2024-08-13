#include<iostream>
using namespace std;

int main(){

    int lowestNum, highestNum;

    cout << "Enter lowest value: ";
    cin >> lowestNum;

    cout << "Enter highest value: ";
    cin >> highestNum;

    for(int num = lowestNum; num <= highestNum; num++){
        int i;
        for(i = 2; i < num; i++){
            if(num % i == 0 ){
                break;
            }
        }
        if(i == num){
            cout << num << endl;
        }
    }

    return 0;
}