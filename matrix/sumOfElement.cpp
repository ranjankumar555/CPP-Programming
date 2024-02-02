// 3.Write a C program to find sum of all array elements. – using recursion.
#include<bits/stdc++.h>
using namespace std;
#define size 3
int sumOfElement(int m[][size]){
  int sum=0;
  for(int i=0;i<size;i++){
    for(int j=0; j<size;j++){
      sum+=m[i][j];
    }
  }
  return sum;
}
int main(){
  int a[size][size]={1,2,3,4,5,6,7,8,9};
  cout<<"The sum of matrix element is: "<<sumOfElement(a);
  return 0;
}