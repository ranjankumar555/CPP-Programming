//Write a C program to perform Scalar matrix multiplication.
#include<bits/stdc++.h>
using namespace std;

#define n 3
void scalerMatrixMultiplication(int a[n][n], int m){
  int result[n][n];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      result[i][j]= m*a[i][j];
    }
  }
  //print the matrix
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int multiplier;
  cout<<"Enter the multiplier: "<<endl;
  cin>>multiplier;
  int a[n][n]={1,2,3,4,5,6,7,8,9};
  cout<<"Matrix after multiplied by a scaler["<<multiplier<<"]"<<endl;
  scalerMatrixMultiplication(a,multiplier);
  return 0;
}