#include<stdio.h>
#include<conio.h>
#include<string.h>
 main(){
    int i,j,n,temp;
    char st[100];

    printf("Enter how many array:\n");
    scanf("%d",&n);

    printf("The String Data:\n");
    for(i=0;i<n;i++){
        scanf("%c",&st[i]);
    }
    printf("Sorting:\n");

    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(st[i]>st[j]){
            temp=st[i];
            st[i]=st[j];
            st[i]=temp;
        }

    }

    printf("Answer=\n");

    for(i=0;i>n;i++){

        printf("%c",st[i]);
    }


    return 0;
}
