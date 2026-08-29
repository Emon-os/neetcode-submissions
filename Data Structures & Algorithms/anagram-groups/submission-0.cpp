class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grps;

        for(string word : strs){
            string storeword = word;

            sort(storeword.begin(),storeword.end());

            grps[storeword].push_back(word);
        }

        vector<vector<string>> ans;

        for(auto grp : grps){
            ans.push_back(grp.second);
        }

        return ans;
    }
};
