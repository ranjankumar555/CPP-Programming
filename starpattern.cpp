#include<iostream>
using namespace std;
void nForest(int n) {
	// Write your code here.
	string str = "*";
	for(int i =1; i<=n; i++){
		//start to print first (*)star i.e. first Row and 
		//then it follow with below lines of code.
		cout<<str;

		//break line to print for the next row.
		cout<<endl; 

		// Append the one * in each iteration to 
		//fulfill the number of * for the next row.
		str +=" *";		
	}
}
int main(){
    int n;
    cout<<"Enter the number of the row: ";
    cin>>n;

    //call the nforest pattern
    nForest(n);
    return 0;
}