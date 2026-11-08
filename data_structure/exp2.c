
#include<stdio.h>

int main(){
    int arr[10],sum =0;

    for(int i=0;i<10;i++)
        {
            printf("Enter %d element :",i+1);
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
    printf("The sum : %d\n",sum);
    printf("the average of total number: %d",sum/10);
    return 0;
    
}

Enter 1 element :10
Enter 2 element :20
Enter 3 element :30
Enter 4 element :40
Enter 5 element :50
Enter 6 element :60
Enter 7 element :70
Enter 8 element :80
Enter 9 element :90
Enter 10 element :100
The sum : 550
// the average of total number: 55
