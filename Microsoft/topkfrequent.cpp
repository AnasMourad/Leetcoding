class Solution {
public:

    struct Node{
        int num;
        int freq;
    };

    static bool cmp(Node a, Node b){

        return a.freq>b.freq;
    }


    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int, int> freq;

        for(int i=0;i<nums.size();++i){
            freq[ nums[i] ]++;
        }

        //store map, vector<node>
        vector<Node> v;
        for(auto a:freq){

            Node temp;
            temp.num = a.first;
            temp.freq = a.second;

            v.push_back(temp);
        }

        sort(v.begin(),v.end(), cmp);

        vector<int> ret;
        for(int i=0;i<k;++i){
            ret.push_back(v[i].num);
        }


        return ret;

    }
};
