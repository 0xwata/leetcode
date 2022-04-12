class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";

        // 文字列の長さを元に昇順にソート
        sort(strs.begin(), strs.end(), [](const string& lh, const string& rh){
            return rh.length() > lh.length();
        });

        bool finished = false;
        string memory = "";
        for (int i = 0; i < strs[0].length(); i++) {
            char memory = strs[0][i];
            for (int j = 1; j < strs.size(); j++) {
                if(memory != strs[j][i]){
                    finished = true;
                    break;
                }
            }
            if(finished) break;
            result += memory;
        }
        return result;
    }
};