class Solution {
public:
double distance(vector<int>& point){
    double dis= sqrt((point[0]*point[0])+(point[1]*point[1]));
    return dis;
}


    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<double, vector<int>>>max_heap;

        for(vector<int>& p:points){
           double d=distance(p);
            max_heap.push({d,p});
            if(max_heap.size()>k){
                max_heap.pop();
            }
        }
        vector<vector<int>> ans;
        while(!max_heap.empty()){
            ans.push_back(max_heap.top().second);
            max_heap.pop();
        }
        return ans;

        
    
        
    }
};
