class Solution {
public:
    
    string getOrigin(string str){
        
        sort(str.begin(), str.end());//eat aet
        return str;
        
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string> > ret;
        map<string, vector<string> > myMap;
        
        for(int i=0;i<strs.size();++i){
            //eat aet
            //tea aet
            string sortedStr = getOrigin(strs[i]);
            vector<string> temp = myMap[sortedStr];
            temp.push_back(strs[i]);
            myMap[sortedStr] = temp;
        }
        
        map<string, vector<string> >::iterator iter =myMap.begin();
        while(iter!=myMap.end()){
            ret.push_back(iter->second);
            ++iter;
        }
        return ret;
        
        
    }
};