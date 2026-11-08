#include<stdio.h>

void partA(){

    int arr[] = {10,20,30,40,50};
    int n = 5;
    printf("---Simple Order---\n");
    for(int i=0;i<n;i++)
        {
            printf("element %d: %d\n", i+1,arr[i]);
        }
}

void partB(){
     int arr[] = {10,20,30,40,50};
    int n = 5;
    printf("---reverse Order---\n");
    for(int i=n-1;i>=0;i--)
        {
            printf("element %d: %d\n", i+1,arr[i]);
        }
}
int main(){
    partA();
    partB();
    return 0;
}

// -- ---Simple Order---
// -- element 1: 10
// -- element 2: 20
// -- element 3: 30
// -- element 4: 40
// -- element 5: 50
// -- ---reverse Order---
// -- element 5: 50
// -- element 4: 40
// -- element 3: 30
// -- element 2: 20
// -- element 1: 10
