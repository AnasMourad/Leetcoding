class Solution {
public:
    bool isPalindrome(string s) {
        
        string str="";
        for(int i=0;i<s.length();++i){
            
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
            
        }
        
        cout<<str<<endl;
        
        int ptr1=0;
        int ptr2 = str.length()-1;
        while(ptr1<ptr2){
            
            
            if(str[ptr1]==str[ptr2]){
                ++ptr1;
                --ptr2;
            }else{
                
                return false;
            }
            
            
        }
        
        return true;
        
        
        
    }
};