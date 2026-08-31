class KthLargest {
    map<int, int> freq;
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for (int x : nums)
            freq[x]++;
    }

    int add(int val) {
        freq[val]++;

        int count = 0;

        for (auto it = freq.rbegin(); it != freq.rend(); ++it) {
            count += it->second;

            if (count >= k)
                return it->first;
        }

        return -1;
    }
};v