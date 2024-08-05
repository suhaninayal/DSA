#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    map<char, int> mp;

    vector<pair<char, int>> v;
    for (int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }

    for (auto it : mp) {
        v.push_back({it.first, it.second});
    }

    auto lambda = []( pair<char, int>& P1, pair<char, int>& P2) {
        return P1.second > P2.second;
    };
    
    sort(v.begin(), v.end(), lambda);

    string temp;
    for (auto it : v) {
        temp.append(it.second,it.first); // Append character 'it.first' 'it.second' times
    }
    
    cout << temp << endl;

    return 0;
}
