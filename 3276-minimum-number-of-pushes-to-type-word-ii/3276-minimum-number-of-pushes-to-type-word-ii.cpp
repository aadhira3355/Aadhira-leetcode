#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>

class Solution {
public:
    int minimumPushes(std::string word) {
        std::unordered_map<char, int> hash;
        for (char c : word) {
            hash[c]++;
        }

        std::vector<std::pair<char, int>> dic;
        for (const auto& entry : hash) {
            dic.emplace_back(entry);
        }

        std::sort(dic.begin(), dic.end(), [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
            return a.second > b.second;
        });

        int section = 1;
        int totalPushes = 0;
        for (int i = 0; i < dic.size(); ++i) {
            if (i % 8 == 0 && i != 0) {
                ++section;
            }
            totalPushes += dic[i].second * section;
        }
        
        return totalPushes;
    }
};
