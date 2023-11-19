#include<iostream>
using namespace std;

int main(){

    //declaration of two integer variable
    int a;
    int b;

    //Asking input from user
    cout<<"Enter the the value of a: ";
    cin>>a;
    cout<<"Enter the the value of b: ";
    cin>>b;

    // performing operation
    int c = a+b;

    //prints the result
    cout<<"The sum of "<< a <<" and "<< b << " is "<< c <<endl;
    return 0;

}