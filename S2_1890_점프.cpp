#include <bits/stdc++.h>

using namespace std;

int game_board[101][101] = {0, };
long dp[101][101] = {0, };

int main(void)
{
    int N;
    scanf("%d", &N);
    for(int i = 0; i<N;i++)
    {
        for(int j = 0; j < N;j++)
        {
            scanf("%d", &game_board[i][j]);
        }
    }

    dp[0][0] = 1;
    for(int i = 0; i < N;i++)
    {
        for(int j = 0; j < N;j++)
        {
            if ((i == N-1 && j == N-1) || dp[i][j] == 0)
                continue;
            int now = game_board[i][j];
            int down = now + i;
            int right = now + j;

            //아래로
            if (down < N)
                dp[down][j] += dp[i][j];
            //오른쪽으로
            if (right < N)
                dp[i][right] += dp[i][j];
        }
    }
    printf("%ld", dp[N-1][N-1]);
}
