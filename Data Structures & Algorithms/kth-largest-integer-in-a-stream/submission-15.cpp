class KthLargest {
    vector<int> heap;
    int k;

    void push(int x) {
        heap.push_back(x);

        int i = heap.size() - 1;

        while (i > 0) {
            int p = (i - 1) / 2;

            if (heap[p] <= heap[i])
                break;

            swap(heap[p], heap[i]);
            i = p;
        }
    }

    void pop() {
        heap[0] = heap.back();
        heap.pop_back();

        int i = 0;

        while (true) {
            int l = 2 * i + 1;
            int r = 2 * i + 2;
            int smallest = i;

            if (l < heap.size() && heap[l] < heap[smallest])
                smallest = l;

            if (r < heap.size() && heap[r] < heap[smallest])
                smallest = r;

            if (smallest == i)
                break;

            swap(heap[i], heap[smallest]);
            i = smallest;
        }
    }

public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for (int x : nums) {
            push(x);

            if (heap.size() > k)
                pop();
        }
    }

    int add(int val) {
        push(val);

        if (heap.size() > k)
            pop();

        return heap[0];
    }
};