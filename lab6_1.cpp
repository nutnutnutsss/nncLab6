#include<iostream>
using namespace std;

int main(){

    int N, even = 0, odd = 0;
    cout << "Enter an integer: ";
    cin >> N;

    while(N != 0){
        if(N%2 == 0){
            even += 1;
        } else {
            odd += 1;
        }
        cout << "Enter an integer: ";
        cin >> N;
    }


    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
