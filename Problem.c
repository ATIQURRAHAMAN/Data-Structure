#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
    int i,n,a[10],max,min,sum;
    printf("How many number=");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("Maximum Value=%d\n",max);
    min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min)
            min=a[i];
    }
    printf("Minimum Value=%d\n",min);
    sum=0;
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("Total Value=%d\n",sum);
    printf("Average Value=%d\n",sum/n);
    for(i=0;i<n;i++){
            printf("Sine Value=%d\n",sin(a[i]));
    }

    return 0;
}
