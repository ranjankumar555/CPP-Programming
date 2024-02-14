#include <iostream>
#include<algorithm>
using namespace std;
// void swapValues(int &a, int &b){ 
//     a=a+b;
//     b=a-b; //limitation of this swap --> would not work for same value as it results 0 after swapping to both values <--
//     a=a-b;
// }
void swapValues(int &a, int &b){
  int temp = a;
  a=b;
  b=temp;

}
void selectionSort(int arr[], int N){
    int min_index, curmin;
    for(int i=0; i<N-1; i++){
        min_index = i; // Initialize min_index to the current index
        curmin = arr[i];
        for(int j=i+1; j<N; j++){
            if(curmin > arr[j]){
                min_index = j;
                curmin = arr[j];
            }
        }
        // Only swap if the minimum element is found
        if (min_index != i) {
            swapValues(arr[i], arr[min_index]);
        }
    }
}

int main()
{
    int a[5]={13,9,8,5,45};
    int n=5;
    
    //print the original Array
    cout<<"The Array before sorting: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    // call the selectionSort function
    selectionSort(a,n);
    
    //print the sorted element
    cout<<"The Array after sorting: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
