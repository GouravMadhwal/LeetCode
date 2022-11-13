class MedianFinder
{
    public:
        // MedianFinder() {}
    priority_queue<int, vector < int>, greater < int>> right;
    priority_queue<int> left;
    void addNum(int num)
    {
        right.push(num);
        left.push(right.top());
        right.pop();
        if (right.size() < left.size())
        {
            right.push(left.top());
            left.pop();
        }
    }

    double findMedian()
    {
        if (left.size() < right.size())
        {
            return right.top();
        }
        return (left.top() + right.top()) / 2.0;
    }
};

/**
 *Your MedianFinder object will be instantiated and called as such:
 *MedianFinder* obj = new MedianFinder();
 *obj->addNum(num);
 *double param_2 = obj->findMedian();
 */