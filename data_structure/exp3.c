#include<stdio.h>

int main(){
    int mat[2][2] ;
    int i,j;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    printf("the matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d",mat[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
