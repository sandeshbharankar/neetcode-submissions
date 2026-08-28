class KthLargest {
    vector<int> freq;
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        freq.resize(20001);

        for (int x : nums)
            freq[x + 10000]++;
    }

    int add(int val) {
        freq[val + 10000]++;

        int count = 0;

        for (int x = 20000; x >= 0; x--) {
            count += freq[x];

            if (count >= k)
                return x - 10000;
        }

        return -1;
    }
};