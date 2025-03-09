//day1 solution 1
class Solution {
    public:
        bool isUgly(int n) {
                 if (n <= 0) return false;
            
            while (n % 2 == 0){
                 n /= 2;}
            while (n % 3 == 0){
                 n /= 3;}
            while (n % 5 == 0){ 
                n /= 5;}
            
            return n == 1;
        }
    };

    //day1 solution 2
    class Solution {
        public:
          long long reversedBits(long long x) {
              long long r=0;
              for(int i=0;i<32;i++)
              {
                  long long b=x&1;
                  x=x>>1;
                  r=r<<1;
                  r=r|b;
                  
              }
              return r;
          }
      };
      
    