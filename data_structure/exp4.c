// 3x3 matrix additon

#include<stdio.h>

int main(){
    int matA[3][3],matB[3][3],matC[3][3];
    int i,j;

    printf("=====Enter your first matrix======\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matA[i][j]);
        }
    }
    printf("=====Enter your second matrix======\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matB[i][j]);
        }
    }

    printf("==== Matrixs A =======\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",matA[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    printf("==== Matrixs B =======\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",matB[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    printf("==== Sum of Matrixs A & B =======\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d",matC[i][j]=matA[i][j]+ matB[i][j]);
            printf(" ");
        }
        printf("\n");
    }

}
