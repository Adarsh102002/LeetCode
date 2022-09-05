class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ansv;
        
        string ans ="";
    for(int i=1;i<=n;i++){
       ans="";
       if(i%3 == 0)
          ans+="Fizz";
         if(i%5 == 0)
           ans+="Buzz";
        if(ans=="")
           ans+=to_string(i);
           
       ansv.push_back(ans);
     }
        return ansv;
    }
        
        
};