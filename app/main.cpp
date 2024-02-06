#include <iostream>
#include <queue>

void BFS();

static int Sender[] = {0, 0, 1, 1, 2, 2};
static int Receiver[] = {1, 2, 0, 2, 0, 1};

static bool visited[201][201];
static bool answer[201];
static int now[3];

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::cin >> now[0] >> now[1] >> now[2];
    BFS();

    for (int i = 0; i <= now[2]; i++)
    {
        if (answer[i])
        {
            std::cout << i << ' ';
        }
    }
}

void BFS() {
    std::queue<std::pair<int, int>> queue;
    queue.push(std::make_pair(0, 0));
    visited[0][0] = true;
    answer[now[2]] = true;

    while (!queue.empty()) {
        std::pair<int, int> p = queue.front();
        queue.pop();

        int A = p.first;
        int B = p.second;
        int C = now[2] - A - B;

        for (int i = 0; i < 6; i++) {
            int next[3] = {A, B, C};
            next[Receiver[i]] += next[Sender[i]];
            next[Sender[i]] = 0;
            if (next[Receiver[i]] > now[Receiver[i]]) {
                next[Sender[i]] = next[Receiver[i]] - now[Receiver[i]];
                next[Receiver[i]] = now[Receiver[i]];
            }
            if (!visited[next[0]][next[1]]) {
                visited[next[0]][next[1]] = true;
                queue.push({next[0], next[1]});
                if (next[0] == 0) {
                    answer[next[2]] = true;
                }
            }
        }
    }


}