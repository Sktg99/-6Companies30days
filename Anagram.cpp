class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        map<vector<int>,vector<string>> mp;
        for(auto i:string_list){
            vector<int> f(26,0);
            for(char j:i){
                f[j-'a']++;
            }
            mp[f].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto i:mp)ans.push_back(i.second);
        return ans;
    }
};
