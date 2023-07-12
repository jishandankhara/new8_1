#include<stdio.h>

void main()

{

int j,i;

printf("Enter both array size :");
scanf("%d",&i);

int a[j],b[j],sum[j];

printf("Enter the elements for first array\n");

    for(j=0;j<i;j++){
    printf("A[%d] = ",j);
    scanf("%d",&a[j]);

    }

printf("Enter the elements for second array\n");

for(j=0;j<i;j++){
printf("B[%d] = ",j);
scanf("%d",&b[j]);
}

printf("Sum of array\n");

for(j=0;j<i;j++){

sum[j]=a[j]+b[j];

}

for(j=0;j<i;j++){

printf("%d\n",sum[j]);

}

}
