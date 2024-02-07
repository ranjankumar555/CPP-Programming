//Write a C program to find sum of main diagonal elements of a matrix.
#include<iostream>
using namespace std;
#define SIZE 10
int diagonalSum(int m[SIZE][SIZE], int order){
  int sum=0;
  for(int i=0;i<order;i++){
    for(int j=0;j<order;j++){
      if(i==j){
        sum+=m[i][j];
      }      
    }
  }
  return sum;
}
int main(){
  int order;
  int m[SIZE][SIZE]={{1,2,3},{4,5,6},{7,8,9}};
  cout<<"Enter the order of matrix: ";
  cin>>order;
  cout<<"The sum of diagonal of matrix: "<<diagonalSum(m,order);
  return 0;
}