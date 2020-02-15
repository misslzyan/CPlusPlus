#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        if(arr.empty()) return true;
        std::size_t n_size = arr.size();
        if(n_size==1) return true;
        std::sort(arr.begin(), arr.end());
        vector<int> counts;
        int count;
        for(int i = 0;i<n_size;i++){
            count++;
            if(i==n_size-1){
                counts.push_back(count);
            }else{
                if(arr[i]==arr[i+1]){
                    continue;
                }else{
                    counts.push_back(count);
                    count = 0;
                }
            }
        }
        for(auto i : counts){
            std::cout << i << " ";
        }
        std::cout << "\n";
        if(counts.size()==1)return true;
        n_size = counts.size();
        std::sort(counts.begin(), counts.end());
        for(int i = 0 ;i< n_size;i++){
            if(i>0&&counts[i]==counts[i-1]){
                return false;
            }
        }
        return true;
    }
};

void trimLeftTrailingSpaces(string &input) {
    input.erase(input.begin(), find_if(input.begin(), input.end(), [](int ch) {
        return !isspace(ch);
    }));
}

void trimRightTrailingSpaces(string &input) {
    input.erase(find_if(input.rbegin(), input.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), input.end());
}

vector<int> stringToIntegerVector(string input) {
    vector<int> output;
    trimLeftTrailingSpaces(input);
    trimRightTrailingSpaces(input);
    input = input.substr(1, input.length() - 2);
    stringstream ss;
    ss.str(input);
    string item;
    char delim = ',';
    while (getline(ss, item, delim)) {
        output.push_back(stoi(item));
    }
    return output;
}

string boolToString(bool input) {
    return input ? "True" : "False";
}

int main() {
    string line;
    while (getline(cin, line)) {
        vector<int> arr = stringToIntegerVector(line);
        
        bool ret = Solution().uniqueOccurrences(arr);

        string out = boolToString(ret);
        cout << out << endl;
    }
    return 0;
}
