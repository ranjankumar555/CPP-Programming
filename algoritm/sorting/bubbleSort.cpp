#include<iostream>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a=b;
    b=temp;
}
void bubbleSort(int arr[], int N){
    bool flag = true; // Initialize flag to true to enter the loop at least once
    for(int i = 0; i < N - 1 && flag; i++){ // Only continue if flag is true
        flag = false; // Reset flag for each pass
        for(int j = 0; j < N - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                flag = true; // Set flag to true if a swap occurred
            }
        }
    }
}

int main(){
    int arr[5]={3,9,8,5,2};
    int n=5;
    cout<<"Array before sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // call the bubbleSort function
    bubbleSort(arr,n);
    cout<<"Array after sorting: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}