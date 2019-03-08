/**
 * O(NM)のコード．
 * N <= 1e5，M <= 1e5のため
 * 間に合わない．
 */

#include <stdio.h>

#define MAX_N 100000

int array[MAX_N + 10];

int main(){

    int N, M;
    scanf("%d", &N);
    for(int i = 0;i < N;i++) scanf("%d", &array[i]);
    
    scanf("%d",&M);
    while(M--){
        int l, r;
        scanf("%d %d",&l, &r);
        l--;
        int ans = 0;
        for(int i = l; i < r;i++) ans += array[i];
        
        printf("%d\n", ans);
    }

    return 0;
}
