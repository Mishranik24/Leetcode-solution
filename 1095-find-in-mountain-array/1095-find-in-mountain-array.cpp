/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution 
{
public:
    int findPeak(int l, int r, MountainArray &m, int len)
    {
        while(l<=r)
        {
            int mid=(l+r)/2;
            int curr=m.get(mid), prev=(mid-1>=0)?m.get(mid-1):-1, nex=(mid+1<len)?m.get(mid+1):-1;
            if(mid+1<len && mid-1>=0 && curr>prev && curr>nex) return mid;
            else if((mid-1>=0 && curr>prev) || (mid+1<len && nex>curr)) l=mid+1;
            else if((mid+1<len && curr>nex) || (mid-1>=0 && prev>curr)) r=mid-1;
        }
        return -1;
    }
    int findLeft(int l, int r, int t, MountainArray &m)
    {
        while(l<=r)
        {
            int mid=(l+r)/2;
            int curr=m.get(mid);
            if(curr==t) return mid;
            else if(curr<t) l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
    int findRight(int l, int r, int t, MountainArray &m)
    {
        while(l<=r)
        {
            int mid=(l+r)/2;
            int curr=m.get(mid);
            if(curr==t) return mid;
            else if(curr<t) r=mid-1;
            else l=mid+1;
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) 
    {
        int len=mountainArr.length();
        int peak=findPeak(0,len-1,mountainArr,len);
        if(mountainArr.get(peak)==target) return peak;
        int left=findLeft(0,peak-1,target,mountainArr);
        if(left!=-1) return left;
        int right=findRight(peak+1,len-1,target,mountainArr);
        return right;
    }
};