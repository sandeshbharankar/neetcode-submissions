class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string, vector<pair<int, string>>> map;
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({timestamp, value});
        
        
    }
    
    string get(string key, int timestamp) {
        int left=0;
    int right=map[key].size()-1;
    int ans;
    
    while(left<=right){
        
        int mid= left+(right-left)/2;
        if(map.find(key)==map.empty()){
            return "";
        }
        if(map[key].first <= timestamp){
            ans=mid.second;
            left=mid+1;

        }else{
            right=mid-1;
        }
    }
    return ans;
        
    }
};
