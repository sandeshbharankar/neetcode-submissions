class Solution {
public:
priority_queue<int> maxheap;
    int lastStoneWeight(vector<int>& stones) {
        for(int m:stones){
            maxheap.push(m);
        }
        while(!maxheap.empty()){
            if(maxheap.size()==1){
                return maxheap.top();
            }
            int y=maxheap.top();
        maxheap.pop();
        int x=maxheap.top();
        maxheap.pop();
        if(x==y){
        if(maxheap.empty()){
            return 0;
        }
        }else{
            maxheap.push(y-x);
        }
        }
        return maxheap.top();
       
    }
};
