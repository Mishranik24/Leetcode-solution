/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    vector<int>result;
    int i=0;
   void Solve(vector<NestedInteger>nestedList) 
   {
       for(auto u:nestedList) 
       {
            if(u.isInteger())
            {
                result.push_back(u.getInteger());
            }
            else 
            {
                Solve(u.getList());
            }
        }
    }
    
    NestedIterator(vector<NestedInteger> &nestedList) 
    {
        Solve(nestedList);
    }
    
    int next() 
    {
        return result[i++];
    }
    
    bool hasNext() 
    {
        if(i < result.size())
        {
            return true;
        }
        return false;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */