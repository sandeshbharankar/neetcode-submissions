class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int length=temperatures.size();
        vactor<int> output(length, 0);

        for(int i=0;i<length;i++){
            for(int j=i+1;j<length;j++){

                if(temperatures[i]< temperatures[j]){
                    output[i]=i-j;
                }

            }
            
        }
        return output;
        
    }
};
