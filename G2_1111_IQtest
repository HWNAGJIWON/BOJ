#include <bits/stdc++.h>

using namespace std;

int N=0;
int arr[51] = {0, };

int main(void)
{
    scanf("%d", &N);

    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (N == 1)
    {
        printf("A\n");
        return 0;
    }
    if (N == 2)
    {
        if (arr[1] == arr[0])
            printf("%d", arr[0]);
        else
            printf("A\n");
        return 0;
    }
    else
    {   
        int a = 0;
        if (arr[1] - arr[0] != 0)
            a = (arr[2] - arr[1]) / (arr[1] - arr[0]);

        int b = arr[1] - arr[0] * a;
        // (arr[1] - arr[0] ) * a로 하면 틀림 뭐냐

        for(int i = 1; i<N; i++)
        {
            if (arr[i] != arr[i-1] * a + b)
            {
                printf("B\n");
                return 0;
            }
        }
        printf("%d", arr[N-1] * a + b);
    }
}
