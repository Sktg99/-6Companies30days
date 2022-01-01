class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    long long f=0,s=0,t=0;
	    long long ans[n+1]={};
	    long long two=2;
	    long long three=3;
	    long long four=5;
	    long long res=1;
	    ans[0]=1;
	    for(int i=1;i<n;i++){
	        res=min({two,three,four});
	        ans[i]=res;
            if (res == two) {
                f++;
                two = ans[f] * 2;
            }
            if (res == three) {
                s++;
                three = ans[s] * 3;
            }
            if (res == four) {
                t++;
                four = ans[t] * 5;
            }
	    }
	    return (ull)res;
	}
};
