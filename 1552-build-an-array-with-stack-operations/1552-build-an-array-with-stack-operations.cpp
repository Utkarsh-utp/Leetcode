class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int max = target[target.size() - 1];
        for(int i = 1 , j = 0 ; i <= max ; i++)
        {
            if( i == target[j])
            {
                ans.push_back("Push");
                j++;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");

            }
        }
        return ans;
    }
};