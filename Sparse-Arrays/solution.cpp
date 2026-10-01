#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    vector<int> answer;

    for (string query : queries) {
        int count = 0;

        for (string s : stringList) {
            if (s == query) {
                count++;
            }
        }

        answer.push_back(count);
    }

    return answer;
}
