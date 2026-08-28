class KthLargest {
    set<pair<int,int>> s;
    int k, id = 0;

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for (int x : nums) {
            s.insert({x, id++});

            if (s.size() > k)
                s.erase(s.begin());
        }
    }

    int add(int val) {
        s.insert({val, id++});

        if (s.size() > k)
            s.erase(s.begin());

        return s.begin()->first;
    }
};