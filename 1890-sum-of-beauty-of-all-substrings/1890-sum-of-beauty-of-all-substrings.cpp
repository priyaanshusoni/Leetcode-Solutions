class Solution {
public:


int beautySum(string s) {
        
    
    vector<int>freqCnt;
    int totalBeauty =0;
  
    for(int i=0;i<s.size();i++){
        
        map<char,int>mpp;
         for(int j=i;j<s.size();j++){
            mpp[s[j]]++;
            if(j-i>=2){
                 int maxfreq = INT_MIN;
                 int minfreq = INT_MAX;

                 for(auto it : mpp){
                 maxfreq = max(maxfreq,it.second);
                 minfreq = min(minfreq,it.second);

                  }

                totalBeauty+=maxfreq-minfreq;

            }
          
        }
        mpp.clear();
    }





      

          return totalBeauty;


    }
};