class Solution {
public:
    int subtractProductAndSum(int n) {
       
        long long mul = 1;
        long long sum = 0;
        
        //n = 234 -> n = 23
        while(n){
            mul *= n % 10;
            sum += n % 10;
            
            n /= 10;
        }
        
        return mul - sum;
        
    }
};
