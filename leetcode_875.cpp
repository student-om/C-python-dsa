class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start,end=0,mid,total_time,ans=0;
        long long sum=0;
        int n=piles.size();
        for (int i=0;i<n;i++){
            sum+=piles[i];
            end=max(end,piles[i]);
        }
        start=sum/h;
        if(!start)
            start=1;
        while (start<=end){
            mid=start+(end-start)/2;
            total_time=0;
            for (int i=0;i<n;i++){
                total_time+=piles[i]/mid;
                if (piles[i]%mid){//total_time is decimal it has to get approxed to 1 more than that number
                    total_time+=1;
                }

            }
            if(total_time>h){
                start=mid+1;
            }
            else{//ate all the bananas i.e condition satisfied,so decrease speed to get minimum time diff
                ans=mid;
                end=mid-1;
            }
        }
        return ans;

    }
};
