/*
    Sourav Kumar Dubey
*/
 
#include <bits/stdc++.h>
using namespace std;

#define lli               long long int
#define forn(i,x,n)       for (i = x; i <= n; i++)
#define rev(n,i)          for(i=N-1;i>=0;i--)
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pb                push_back
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
 
const long long INF=1e18;
const long long int M=1e9+1;
const int32_t MM=998244353;
 
/*int power(int x, int n) 
{
    int res = 1;
    
    while (n > 0) {
        
        if (n & 1) res = (res * x);
        x = (x * x);
        n >>= 1;
 
    }
    
    return res;
}*/

/*vector < int > seive;

void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
  
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
  
    for (int p=2; p<=n; p++)
      if (prime[p])
          seive.push_back(p);
}*/
 
/*
int lengthOfLIS(vector<lli>& nums) {
    int n = nums.size();
    set<int> se;
    int flag = 0;
    for(int i = 0; i<n; ++i){
        if(se.lower_bound(nums[i]) != se.end()){
            se.erase(se.lower_bound(nums[i]));
        }
        se.insert(nums[i]);
    }
    return se.size() ;
}*/
 
//------------------------------------------------------------------------------
 
void insert ( vector < lli > &vec , lli n ) {
    
    for ( int i = 0 ; i < n ; i++ ) {
        
        cin >> vec[i];
        
    }
    
}

void print ( vector < lli > &vec , lli n ) {
    
    for ( int i = 0 ; i < n ; i++ ) {
        
        cout << vec[i] << " ";
        
    }
    
    cout << "\n";
    
}

bool isPrime(lli n) {
    
    for ( int i = 2 ; i <= sqrt(n) ; i++ ) {
        
        if ( n % i ) continue;
        else return false;
        
    }
    
    return true;
    
}

// const lli mod = 998244353 ;

void test_case() {
    
    lli n;
    cin >> n;
    
    vector < lli > vec(n) , vec2(n) , dp1(n , 0) , dp2(n , 0);
    insert(vec , n);
    insert(vec2 , n);
    
    if ( n == 1 ) {
        
        cout << 0 << "\n";
        return;
        
    }

    
    for ( int i = 1 ; i < n ; i++ ) {
        
        dp1[i] = min( vec2[i - 1] , vec[i] );
        dp1[i] += dp1[i - 1];
        
        // cout << dp1[i] << "\n";
        
    }

    lli ans = 0;
    
    ans = dp1[n-1];
    
    cout << ans << "\n";
    
    return;
    
}

signed main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    
    int t = 1;  
    cin >> t;
    
    while ( t-- ) {
    
      test_case();
      
    }
    return 0;
}
