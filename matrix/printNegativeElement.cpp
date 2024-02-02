#include<bits/stdc++.h>
using namespace std;
#define SIZE 3

void printNegativeElement(int matrix[SIZE][SIZE]){
  cout<<"Negative element: ";
  for(int i=0; i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
      if(matrix[i][j]<0){
        cout<<matrix[i][j]<<" ";
      }
    }
  }
  cout<<endl;
}
int main(){
  int a[SIZE][SIZE]={{1,2,-8},{6,-45, 7},{-23, 45, 65}};
  printNegativeElement(a);
  return 0;
}