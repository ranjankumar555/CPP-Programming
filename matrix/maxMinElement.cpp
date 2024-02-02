// 4. Write a C program to find maximum and minimum element in an array./ – using recursion.
#include<bits/stdc++.h>
using namespace std;
#define size 3
int maxElement(int m[][size]){
  int max=0,curmax=0;
  for(int i=0;i<size;i++){
    for(int j=0; j<size;j++){
      curmax=m[i][j];
      if(curmax>max){
        max=curmax;
      }
    }
  }
  return max;
}
int minElement(int m[][size]){
  int curmin=0;
  int min=INT_MAX;
  for(int i=0;i<size;i++){
    for(int j=0; j<size;j++){
      curmin=m[i][j];
      if(curmin<min){
        min=curmin;
      }
    }
  }
  return min;
}
int main(){
  int a[size][size]={16,9,6,4,5,8,7,2,31};
  cout<<"The maximum element is: "<<maxElement(a)<<endl;;
  cout<<"The minimum element is: "<<minElement(a)<<endl;
  return 0;
}