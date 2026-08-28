class KthLargest {
    multiset<int> s;
    int k;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for (int x : nums) {
            s.insert(x);

            if (s.size() > k)
                s.erase(s.begin());
        }
    }

    int add(int val) {
        s.insert(val);

        if (s.size() > k)
            s.erase(s.begin());

        return *s.begin();
    }
};