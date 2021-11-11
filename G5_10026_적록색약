#include <bits/stdc++.h>

using namespace std;
int N;
int input[101][101];
int color_blind[101][101];
int normal[101][101];
bool visit[101][101];

vector<int > answer;

//왼, 오, 위, 아래
int xx[4] = {-1, 1, 0, 0};
int yy[4] = {0, 0, 1, -1};


//10026 적록색맹

// 1 = R, 2 = G, 3 = B
// 적록색맹 = (R==G)
queue<pair<int, int> > q;
void BFS_normal(int x, int y)
{
    visit[x][y] = true;
    q.push(make_pair(x,y));

    while(!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i = 0; i<4;i++)
        {
            int nx = x + xx[i];
            int ny = y + yy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                continue;
            if (normal[nx][ny] == normal[x][y] && !visit[nx][ny])
            {
                visit[nx][ny] = true;
                q.push(make_pair(nx, ny));
            }

        }
    }
}

queue<pair<int, int> > q_color_blind;
void BFS_color_blind(int x, int y)
{
    visit[x][y] = true;
    q_color_blind.push(make_pair(x,y));

    while(!q_color_blind.empty())
    {
        x = q_color_blind.front().first;
        y = q_color_blind.front().second;
        q_color_blind.pop();

        for(int i = 0; i<4;i++)
        {
            int nx = x + xx[i];
            int ny = y + yy[i];
            // printf("nx = %d, ny = %d\n", nx,ny);

            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                continue;
            if (color_blind[nx][ny] == color_blind[x][y] && !visit[nx][ny])
            {
                visit[nx][ny] = true;
                // printf("visit(%d, %d)\n", nx, ny);
                q_color_blind.push(make_pair(nx, ny));
            }
            // printf("(x,y) = %d, (nx, ny) = %d\n", color_blind[x][y], color_blind[nx][ny]);

        }
    }
}




void reset()
{
    for(int i = 0;i<101;i++)
    {
        for(int j = 0; j<101;j++)
        {
            visit[i][j] = false;
        }
    }

}

int main(void)
{
    memset(normal, 0, sizeof(normal));
    memset(color_blind, 0, sizeof(color_blind));
    scanf("%d\n", &N);
    char enter_trash;

    for(int i=0; i<N;i++)
    {
        for(int j=0; j<N;j++)
        {
            char temp;
            scanf("%c", &temp);
            if (temp == 'R')
                normal[i][j] = 1;
            else if (temp == 'G')
                normal[i][j] = 2;
            else if (temp == 'B')
               normal[i][j] = 3;
        }
        scanf("%c", &enter_trash);
    }
    // show_normal();
    // printf("\n");

    for(int i = 0; i<N;i++)
    {
        for(int j = 0; j<N;j++)
        {
            int temp = normal[i][j];
            if (temp == 3)
                color_blind[i][j] = 2;
            else if (temp <= 2)// R, G
                color_blind[i][j] = 1;
        }
    }

    // show_color_blind();

    int normal_ans = 0;
        for(int i = 0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if (!visit[i][j])
                {
                    BFS_normal(i, j);
                    normal_ans++;
                }
            }
        }
    printf("%d ", normal_ans);
    reset();

    int color_blind_ans = 0;
    for(int i = 0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if (!visit[i][j])
            {
                BFS_color_blind(i, j);
                color_blind_ans++;
            }
        }
    }
    printf("%d", color_blind_ans);
    
}
