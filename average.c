#include <stdio.h>

int main() {
    int n;
    int sum=0;
    float avg;
    
    printf("Enter array size : \n");
    scanf("%d",&n);
    
    int a[n];
    
    printf("Enter array of %d element \n",n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n; i++)
    {
        sum +=a[i];
    }
    
    avg = sum/n;
    
    printf("Your average marks is : %.2f",avg);

    return 0;
}