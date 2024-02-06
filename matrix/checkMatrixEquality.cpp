/******************************************************************************
 Write a C program to check whether two matrices are equal or not.
*******************************************************************************/

#include<iostream>
using namespace std;
#define n 10
class matrix{
    private:
    int rows;
    int column;
    public:
    matrix(int x, int y){
        rows=x;
        column=y;
    }
    void checkEqualMatrix(int[][n], int[][n]);
};
void matrix:: checkEqualMatrix(int m1[n][n],int m2[n][n]){
    int counter=0;
    for(int i=0;i<rows;i++){
        for(int j=0; j<column;j++){
            if(m1[i][j]==m2[i][j]){
                counter++;
                
            }else{
                break;
            }
        }
    }
    int totalElement=rows*column;
    if(totalElement==counter){
        cout<<"Both matrix are equal";
    }
    else{
        cout<<"Both matrix are Not equal";
    }
}
int main(){
    int a,b;
    cout<<"Enter the rows and column of matrix: ";
    cin>>a>>b;
    int arr1[n][n]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[n][n]={{1,2,9},{4,5,6},{7,8,9}};
    matrix obj(a,b);
    obj.checkEqualMatrix(arr1,arr2);
    
    return 0;
}