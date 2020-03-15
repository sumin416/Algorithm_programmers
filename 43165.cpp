/**************************************************************

프로그래머스 DFS/BFS  > 타겟넘버
https://programmers.co.kr/learn/courses/30/lessons/43165


***************************************************************/


#include <string>
#include <vector>

using namespace std;
int cnt = 0;
void dfs(vector<int> numbers, int target, int sum, int idx)
{
    if (idx == numbers.size()) {
        if (sum == target) ++cnt;
        return;
    }

    dfs(numbers, target, sum + numbers[idx], idx + 1);
    dfs(numbers, target, sum - numbers[idx], idx + 1);
}

int solution(vector<int> numbers, int target) {

    dfs(numbers, target, 0, 0);

    return cnt;
}