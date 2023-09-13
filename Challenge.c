#include <stdio.h>
#define SIZE 101

int visit[SIZE];
int a[SIZE][SIZE];

void dfs(int start, int n){
    if(visit[start] == 1)
        return;
    visit[start] = 1;

    for(int i = 0; i <= n; i++){
        if(a[start][i] == 1 && visit[i] != 1)
            dfs(i, n);
    }
}

int main(void){
    int computer, connect, x, y;
    int ans = 0;

    scanf("%d", &computer);
    scanf("%d", &connect);

    while(connect--){
        scanf("%d %d", &x, &y); // 방문한 노드들은 1로 만들기
        a[x][y] = 1;
        a[y][x] = 1;

        for(int i = 1; i <= computer; i++){    
            for(int j = 1; j <= computer; j++){
                if (a[i][j] != 1)
                    a[i][j] = 0;    // 방문하지 않는 노드들은 0으로 만들기
            }
        }
    }

    dfs(1, computer);

    for(int k = 2; k <= computer; k++){
        if(visit[k] == 1)
            ans++;
    }
    printf("%d",ans);
    return 0;
}