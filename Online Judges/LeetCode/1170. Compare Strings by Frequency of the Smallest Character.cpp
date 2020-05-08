class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>ans,bs;
        for(int i=0;i<words.size();i++)
        {
            char mn = 'z';
            for(auto u : words[i])
            {
                mn = min(mn,u);
            }
            int r = 0;
            for(auto u : words[i])
            {
                if(u ==  mn)
                    r++;
            }
            bs.push_back(r);
        }
        sort(bs.begin(),bs.end());
        for(int i=0;i<queries.size();i++)
        {
            char mn = 'z';
            for(auto u : queries[i])
            {    
                mn = min(mn,u);
            }
            int r = 0;
            for(auto u : queries[i])
            {
                if(u ==  mn)
                    r++;
            }
            ans.push_back(words.size() - (upper_bound(bs.begin(),bs.end(),r) - bs.begin())); 
        }
        
        return ans;
    }
};
