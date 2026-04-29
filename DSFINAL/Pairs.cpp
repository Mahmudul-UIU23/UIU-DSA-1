#include <bits/stdc++.h>
using namespace std;
class Pair {
public:
    string s;
    int i;
    Pair(string s, int i) {
        this->s = s;
        this->i = i;
    }
};
class cmp {
public:
    bool operator()(Pair a, Pair b) {
        if (a.s == b.s) {
            return a.i < b.i;
        }
        return a.s > b.s;
    }
};

int main() {
    int n;
    cin >> n;
    priority_queue<Pair, vector<Pair>, cmp> pq;
    for (int j = 0; j < n; j++) {
        string name;
        int id;
        cin >> name >> id;
        pq.push(Pair(name, id));
    }
    while (!pq.empty()) {
        cout << pq.top().s << " " << pq.top().i << endl;
        pq.pop();
    }
    
    return 0;
}
