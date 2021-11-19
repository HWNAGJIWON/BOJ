#include <bits/stdc++.h>


using namespace std;

int maze[101][101] = {0, };
long answer[101][101] = {0, };  // long으로 바꿨더니 맞춤
queue <pair<int, int> > q;

// 2178 미로탐색


int main(void)
{
    int N,M;
    scanf("%d %d", &N, &M);
    char str[M];
    for(int i = 0; i<N;i++)
    {
        scanf("%s", str);
        for(int j = 0; j < M;j++)
        {
            maze[i][j] = str[j] - 48;
        }
    }

    
    answer[0][0] = 1;
    q.push(make_pair(0,0));
    while(!q.empty())
    {
        pair<int, int> temp = q.front();
        q.pop();
        int cur = answer[temp.first][temp.second];


        //상 가능
        if (0 <= temp.first-1 && temp.first-1 < N && maze[temp.first-1][temp.second] == 1 && answer[temp.first-1][temp.second] == 0)
        {
            answer[temp.first-1][temp.second] = cur + 1;
            q.push(make_pair(temp.first-1, temp.second));
            // printf("q.push(%d, %d)\n", temp.first-1, temp.second);
        }
        // 하 가능
        if (0 <= temp.first+1 && temp.first+1 < N && maze[temp.first+1][temp.second] == 1 && answer[temp.first+1][temp.second] == 0)
        {
            answer[temp.first+1][temp.second] = cur + 1;
            q.push(make_pair(temp.first+1, temp.second));
            // printf("q.push(%d, %d)\n", temp.first+1, temp.second);
        }
        // 우 가능
        if (0 <= temp.second+1 && temp.second+1 < M && maze[temp.first][temp.second+1] == 1&& answer[temp.first][temp.second+1] == 0)
        {
            answer[temp.first][temp.second+1] = cur + 1;
            q.push(make_pair(temp.first, temp.second+1));
            // printf("q.push(%d, %d)\n", temp.first, temp.second+1);
        }
        // 좌 가능
        if (0 <= temp.second-1 && temp.second-1 < M && maze[temp.first][temp.second-1] == 1 && answer[temp.first][temp.second-1] == 0)
        {
            answer[temp.first][temp.second-1] = cur + 1;
            q.push(make_pair(temp.first, temp.second-1));
            // printf("q.push(%d, %d)\n", temp.first, temp.second-1);
        }
    }

    printf("%ld", answer[N-1][M-1]);


}
