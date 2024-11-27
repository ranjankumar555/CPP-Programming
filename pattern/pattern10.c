#include<stdio.h>
void main(){
        int n = 5;
        char ch;
        // outer loop
        for(int i =0; i<n; i++){
                ch = 'A';
                
                // for space
                for(int k = 0; k<n-1-i; k++){
                        printf("  ");
                }

                // for data
                for(int j=0; j<=i; j++){
                        if(i%2==0){
                                printf("# ");
                        }
                        else{
                                printf("%c ",ch++);
                        }
                }
                printf("\n");
        }
}