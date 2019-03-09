/**
 * O(N + M)のコード
 * 累積和の構築という前処理により
 * 計算量を改善した．
 */

#include <stdio.h>

#define MAX_N 100000

int array[MAX_N + 10];
int cumsum[MAX_N + 10];

int main(){

    int N, M;
    scanf("%d", &N);
    for(int i = 0;i < N;i++) scanf("%d", &array[i]);
    
    for(int i=0;i < N;i++) cumsum[i+1]+=array[i] + cumsum[i];

    scanf("%d",&M);
    while(M--){
        int l, r;
        scanf("%d %d",&l, &r);
        
        printf("%d\n", cumsum[r]-cumsum[l - 1]);
    }

    return 0;
}
