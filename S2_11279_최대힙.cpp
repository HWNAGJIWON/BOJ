#include <iostream>
// #include <stack>
#include <algorithm>
#include <cstdio>
// #include <vector>
#include <stdio.h>
#include <queue>


using namespace std;

//  최대 힙

int main(void)
{
    priority_queue<int> maxHeap;
    int num, N;
    scanf("%d", &N);
    
    while (N-- > 0)
    {
        scanf("%d", &num);
        if (num == 0 && maxHeap.size() > 0)
        {
            printf("%d\n", maxHeap.top());
            maxHeap.pop();
        } 
        else if (num == 0)
            printf("0\n");
        else
            maxHeap.push(num);
    }
}


