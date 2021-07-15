// C++ program to find minimum steps to reach to
// specific cell in minimum moves by Knight
#include <bits/stdc++.h>
using namespace std;

// structure for storing a cell's data
struct cell
{
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis)
        : x(x), y(y), dis(dis)
    {
    }
};

// Utility method returns true if (x, y) lies
// inside Board
bool isInside(int x, int y, int N)
{
    if (x >= 1 && x <= N && y >= 1 && y <= N)
        return true;
    return false;
}

// Method returns minimum step
// to reach target position
int minStepToReachTarget(int knightPos[], int targetPos[], int N)
{
    // x and y direction, where a knight can move
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1};

    // queue for storing states of knight in board
    queue<cell> q;

    // push starting position of knight with 0 distance
    q.push(cell(knightPos[0], knightPos[1], 0));

    cell t;
    int x, y;
    bool visit[N + 1][N + 1];

    // make all cell unvisited
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            visit[i][j] = false;

    // visit starting state
    visit[knightPos[0]][knightPos[1]] = true;

    // loop untill we have one element in queue
    while (!q.empty())
    {
        t = q.front();
        q.pop();

        // if current cell is equal to target cell,
        // return its distance
        if (t.x == targetPos[0] && t.y == targetPos[1])
            return t.dis;

        // loop for all reachable states
        for (int i = 0; i < 8; i++)
        {
            x = t.x + dx[i];
            y = t.y + dy[i];

            // If reachable state is not yet visited and
            // inside board, push that state into queue
            if (isInside(x, y, N) && !visit[x][y])
            {
                visit[x][y] = true;
                q.push(cell(x, y, t.dis + 1));
            }
        }
    }
    return 0;
}

// Driver code to test above methods
int main()
{
    int N = 8;
    string k, t;
    while (cin >> k >> t)
    {
        int x1 = k[0] - 96;
        int x2 = k[1] - 48;

        int y1 = t[0] - 96;
        int y2 = t[1] - 48;
        int knightPos[] = {x1, x2};
        int targetPos[] = {y1, y2};
        cout << "To get from " << k << " to " << t << " takes " << minStepToReachTarget(knightPos, targetPos, N) << " knight moves.\n";
        // printf("To get from %s to %s takes %d knight moves.\n", k, t, minStepToReachTarget(knightPos, targetPos, N));
    }
    return 0;
}
