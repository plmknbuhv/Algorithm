#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> meetings(n);
    for (int i = 0; i < n; i++) {
        cin >> meetings[i].first >> meetings[i].second;
    }

    // 시작 시간 기준 정렬
    sort(meetings.begin(), meetings.end());

    // 종료 시간을 저장하는 우선순위 큐 (최소 힙)
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) {
        int start = meetings[i].first;
        int end = meetings[i].second;

        // 회의실 재사용 가능하면 pop
        if (!pq.empty() && pq.top() <= start) {
            pq.pop();
        }

        pq.push(end); // 새 회의 넣기 (기존 회의 재사용 또는 새 강의실)
    }

    cout << pq.size(); // 필요한 강의실 개수
    return 0;
}
