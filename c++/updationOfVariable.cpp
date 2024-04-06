#include<iostream>
using namespace std;
int main(){

    int x = 5;
    cout<<x<<endl; 

    x = 8;
    cout<<x<<endl;  
// this is called overwriting

    x = x+2; //x becomes 8+2, which is 10
// this is not equals to, but this is an assignment operator
    cout<<x<<endl;

    x = x-10; //x becomes 10-10, which is 0
    cout<<x<<endl;

    // or you can write x += 2, it also means same

}