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
            i = p;class KthLargest {
public:
 priority_queue<int, vector<int>, greater<int>> minHeap;
int k;
    KthLargest(int k, vector<int>& nums) {
        
        this->k=k;
        for(int m: nums){
            minHeap.push(m);
            if(minHeap.size()>k){
                minHeap.pop();
                
            }
        }
        
    }
    
    int add(int val) {
        minHeap.push(val);
      if(minHeap.size()>k){
                minHeap.pop();
                
            }
            return minHeap.top();
        
    }
};

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