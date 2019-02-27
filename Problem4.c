#include<stdio.h>
#include<conio.h>

main(){
    int i,j,n,a[10],temp,temp1;

    printf("How many numbers=",n);
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    printf("Desending order:\n");
    for(i=0;i<n;i++){
    printf("%d\n",a[i]);
    }

    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(a[i]<a[j]){
            temp1=a[i];
            a[i]=a[j];
            a[i]=temp1;

        }

    }
    printf("Asending Order:\n");
    for(i=0;i>n;i++){

        printf("%d\n",a[i]);
    }

    return 0;
}
