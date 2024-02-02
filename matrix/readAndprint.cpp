// 1. Write a C program to read and print elements of array. – using recursion.
#include<iostream>
using namespace std;

void readAndPrintMatrix(int m,int n){
  cout<<"enter the element first matrix"<<endl;
  int a[3][3];

  //read matrix input
  for(int i=0; i<m;i++){
    for(int j=0;j<n;j++){
      cin>>a[i][j];
    }
  }

  //print the matrix element
  for(int i=0; i<m;i++){
    for(int j=0;j<n;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
}
int main(){
  int n,m;
  cout<<"enter the row size of matrix: ";
  cin>>n;
  cout<<"enter the column size of matrix: ";
  cin>>m;

  //call the function
  readAndPrintMatrix(n,m);
  return 0;
  }