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

void reverse(){
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
    reverse();
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

// partB  

void partB(){
    int arr[10];
    
    for(int i=0;i<10;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("%d element : %d\n",i+1,arr[i]);
        
    }
    
}
int main(){
    partB();
    return 0;
}

// Enter 1 element: 1
// Enter 2 element: 2
// Enter 3 element: 3
// Enter 4 element: 4
// Enter 5 element: 5
// Enter 6 element: 6
// Enter 7 element: 7
// Enter 8 element: 8
// Enter 9 element: 9
// Enter 10 element: 10
// 1 element : 1
// 2 element : 2
// 3 element : 3
// 4 element : 4
// 5 element : 5
// 6 element : 6
// 7 element : 7
// 8 element : 8
// 9 element : 9
// 10 element : 10
