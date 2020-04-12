#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    long long int a[100][100] = {0};
    scanf("%d %d",&n, &k);
    for(int i=0; i<=n; i++){
        for(int j=0; j<=k; j++){
            if(i==j){
                *(*(a+i)+j) = 1;
            }
            else if(j==0){
                *(*(a+i)+j) = 1;
            }
            else if(i>j){
                *(*(a+i)+j) = *(*(a+i-1)+j) + *(*(a+i-1)+j-1);
                //printf("i = %d j = %d a[%d][%d]+a[%d][%d] = %d\n", i, j, i-1, j, i-1, j-1, a[i-1][j]+a[i-1][j-1]);
            }
        }
    }
/*
    for (int i=0; i<=n; i++){
        printf("%2d: ",i);
        for(int j=0; j<=k; j++){
            printf("%5lld ",(*(a+i))[j]);
        }
        printf("\n");
    }
*/
    printf("ANS: %lld ", *(*(a+n)+k));
    return 0;
}
