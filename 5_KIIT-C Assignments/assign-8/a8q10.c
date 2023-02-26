#include <stdio.h>

int main()
{
    int arr[3][3],*p,i,j;
    printf("Enter Input for matrix:\n");
    for ( i=0;i<3;i++ ){
        for (j=0;j<3;j++){
            printf("a[%d],[%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    p=arr[0];
    int lg = 0;
    for(i=0;i<9;i++){
            if(*(p+i)>lg){
                lg = *(p+i);
            }
        }
    /*for(i=0;i<9;i++){
            printf("%d ", *(p + i));
        }*/
    printf("Maximum element is %d.\n",lg);
}