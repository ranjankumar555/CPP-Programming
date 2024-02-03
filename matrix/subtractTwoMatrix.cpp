//Write a C program to subtrct two matrices.
#include<bits/stdc++.h>
using namespace std;
#define N 3
void addTwoMatrix(int a[N][N], int b[N][N]){
  int sum=0;
  int c[N][N];
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      c[i][j]=a[i][j]-b[i][j];
    }
  }
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      cout<<c[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
}
int main(){
  int m1[N][N]={1,2,3,4,5,6,7,8,9};
  int m2[N][N]={9,8,7,6,5,4,3,2,1};
  addTwoMatrix(m1,m2);
  return 0;
}