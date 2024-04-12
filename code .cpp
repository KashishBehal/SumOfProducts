class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        // code here
       long long ans = 0;

        for(int i = 0;i < 32; i++) {
            long long count = 0;
            for(int j = 0;j < n; j++) {
                if(arr[j] & (1<<i))
                    count++;
            }

            ans += 1ll*(count*(count-1)/2)*(1ll<<i);
        }

        return ans;
    }
    //  vector<int>v;
    //     for(int i=0;i<n-1;i++){
    //         for(int j=i+1;j<n;j++){
    //             int a=arr[i]&arr[j];
    //             v.push_back(a);
    //         }
    //     }
    //     int sum=0;
    //     for(int i=0;i<v.size();i++)
    //     {
    //         sum=sum+v[i];
    //     }
    //     return sum;
};
