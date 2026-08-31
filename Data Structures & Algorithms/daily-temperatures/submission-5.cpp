class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int length= temperatures.size();
       stack<int> st;
       vector<int> result(length,0);

       for(int i=0;i<length;i++){

        while(!st.empty()&& temperatures[i]>temperatures[st.top()]){
            int prev= st.top();
            st.pop();
            result[prev]=i-prev;
        }
        st.push(i)
       }
       return result;
    }
};
