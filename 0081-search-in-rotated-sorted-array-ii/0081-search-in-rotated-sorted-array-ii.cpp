class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int st =0;
        int found1 = -1;
        int position = -1;
        int found = -1;
        int found3=-1;
        int n = nums.size() - 1;
        int en = n;
        int midd = st + (en - st) / 2;
        int note =0;
        if (n == 0) {
            if (nums[0] == target) {
                return true;
            } else {
                return false;
            }
        }
        else {/*
            while (st <= en) {
                if (nums[midd] >= nums[n]) {
                    if (nums[midd] > nums[midd + 1]) {
                        note = midd + 1;
                        break;
                    }
                    else if(nums[midd]==nums[midd+1])
                    {
                        st
                    }
                    else {
                        st = midd + 1;
                    }
                } 
                else {
                    en = midd - 1;
                }
                midd = st + (en - st) / 2;
            }*/
            int k=-1;
        int max=INT_MIN;// max=nums[0] isliye nhi liya kyuki agar empty input hoga toh runtime errror show krega
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1] && nums[i]>=max)//last added o(n) mei max dhund skte h + max store tabhi krna h jabh aage waala bada ho aur piche wala max
            {
                max=nums[i];
                k=i;
            }
        }
            if(k!=-1)
            {
            int s1 = 0, e1 = k;
            int mid1 = s1 + (e1 - s1) / 2;
            while (s1 <= e1) {
                if (nums[mid1] == target) {
                    return true;
                    break;
                } else if (nums[mid1] > target) {
                    e1 = mid1 - 1;
                } else {
                    s1 = mid1 + 1;
                }
                mid1 = s1 + (e1 - s1) / 2;
            }
            // maxof use krna h
            int s = k+1, e = n;
            int mid = s + (e - s) / 2;
            while (s <= e) {
                if (nums[mid] == target) {
                    return true;
                    break;
                } else if (nums[mid] > target) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
                mid = s + (e - s) / 2;
            }
            }
            else{
            int s2 = 0, e2 = n;
            int mid2 = s2 + (e2 - s2) / 2;
            while (s2 <= e2) {
                if (nums[mid2] == target) {
                    return true;
                    break;
                } else if (nums[mid2] > target) {
                    e2 = mid2 - 1;
                } else {
                    s2 = mid2 + 1;
                }
                mid2 = s2 + (e2 - s2) / 2;
            }
            }
             return false;
        }
        /*if(found!=-1)
            {
                position=found;
            }
        else if (found1!=-1)
        {
            position=found1;
        }
        else if(found3!=-1)
        {
            position=found3;
        }*/
    }
};