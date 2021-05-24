class Solution {
public:
    bool isPalindrome(string s) {
        
        string t="";
        for(int i=0;i<s.length();++i){
            
            if(isalnum(s[i]) && s[i]!=' '){
                t += tolower(s[i]);
            }
            
        }
        cout<<t<<endl;
        
        
        int i =0;
        int j=t.length()-1;
        
        bool flag = true;
        
        while(i<j){
        
            if(tolower(t[i])==tolower(t[j])){
                
                ++i;--j;continue;
                
            }else{
                cout<<i<<" "<<j<<endl;
                
                return false;
                
            }
            
            
            
        }
        
        
        return true;
    }
};