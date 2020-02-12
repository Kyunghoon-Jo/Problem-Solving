#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> tmp;
    for(int i=0; i<commands.size(); i++) {
        tmp.clear();
        for(int j=commands[i][0]-1; j<=commands[i][1]-1; j++)
            tmp.push_back(array[j]);
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[commands[i][2]-1]);
    }
    return answer;
}