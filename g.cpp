#include <bits/stdc++.h>
using namespace std;

string sortStringByFrequency(const string& s) {
    map<char, int> frequencyMap;
    for (char c : s) {
        frequencyMap[c]++;
    }

    vector<pair<char, int>> freqVector(frequencyMap.begin(), frequencyMap.end());

    sort(freqVector.begin(), freqVector.end(), [](pair<char, int>& a, pair<char, int>& b) {
        return b.second < a.second; // Sort by frequency in descending order
    });

    string sortedString;
    for (auto& entry : freqVector) {
        sortedString.append(entry.second, entry.first); // Append 'entry.first' 'entry.second' times
    }

    return sortedString;
}

int main() {
    string s;
    getline(cin, s);

    string sortedString = sortStringByFrequency(s);
    cout << sortedString << endl;

    return 0;
}
