#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> frequency;
    
    for (string s : stringList) {
        frequency[s]++;
    }

    vector<int> answer;

    for (string query : queries) {
        answer.push_back(frequency[query]);
    }

    return answer;
}
