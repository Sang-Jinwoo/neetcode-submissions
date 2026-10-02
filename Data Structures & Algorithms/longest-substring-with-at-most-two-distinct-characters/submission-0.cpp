class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        int result=0,begin=0,end=0,counter=0;
        vector<int> map(128,0);
        while(end<s.size())
        {
            if(map[s[end]]==0) counter++;
            map[s[end]]++;
            end++;
            while(counter>2)
            {
                if(map[s[begin]] == 1) counter--;
                map[s[begin]]--;
                begin++;
            }
            result = max(result,end-begin);
        }
        return result;
    }
};