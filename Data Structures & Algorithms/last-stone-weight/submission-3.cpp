class Solution {
public:
priority_queue<int , vector<int> , greater<int>> minheap;
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end(), greater<int>());
        for(int m:stones){
            minheap.push(m);
            
          
            if(minheap.size()==2){
                int x_a=minheap.top();
         
            minheap.pop();
            int y_a = minheap.top();
            minheap.pop();
            minheap.push(x_a);
            minheap.push(y_a);
                if(x_a==y_a){
                    minheap.pop();
                    minheap.pop();
                    return 0;
                }else{
                    minheap.pop();
                    int n=minheap.top();
                    minheap.pop();
                    minheap.push(n-x_a);
                }
            }
        }
        return minheap.top();
        
    }
};
