class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for(auto it : strs) {

            vector<int> freq(26, 0);
            for(char ch : it) {
                freq[ch - 'a']++;
            }
            // build unique key
            string key = "";
            for(int i = 0; i < 26; i++) {
                key += to_string(freq[i]) + "#";
            }
            // group anagrams
            mp[key].push_back(it);
        }
        vector<vector<string>> result;
        for(auto it : mp) {
            result.push_back(it.second);
        }
        return result;
    }
};