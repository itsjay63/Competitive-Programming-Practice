#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
#define flush  cin.ignore(numeric_limits<streamsize>::max(),'\n')
//#define fill(w,t) memset(w,t,sizeof(w))
#define google cout<<"Case #"<<countu<<": "
#define S(t) (ll)t.size()
#define bl '\n'
#define nl cout<<bl
#define cout1(a) cout<<a<<bl
#define cout2(a,b) cout<<a<<" "<<b<<bl
#define cout3(a,b,c) cout<<a<<" "<<b<<" "<<c<<bl
#define cout4(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<bl
#define print(azz,szz,ezz) for(ll i=szz;i<=ezz;i++){ cout<<azz[i]<<" "; }
#define rprint(azz,szz,ezz) for(ll i=szz;i>=ezz;i--){ cout<<azz[i]<<" "; }
#define input(azz,szz,ezz) sfor(pzz,szz,ezz) cin>>azz[pzz]
#define all(v) v.begin(),v.end()
#define ldb long double
#define db double
#define ull unsigned long long
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mk make_pair
#define pll pair<ll,ll>
#define pldb pair<ldb,ldb>
#define fi first
#define se second
#define vull vector<ull>
#define vll vector<ll>
#define vb vector<bool>
#define vldb vector<ldb>
#define vpll vector< pll >
#define vpldb vector< pldb >
#define pqmin priority_queue<ll,vector<ll>,greater<ll> >     //minheap
#define pq priority_queue<ll>                                //maxheap ll
#define pqpll priority_queue<pll>                            //maxheap pll
#define pqpllmin priority_queue<pll, vector<pll>, greater<pll> >   //minheap pll
#define mll map<ll,ll>
#define mldb map<ldb,ldb>
#define umll unordered_map<ll,ll>
#define sll set<ll>
#define usll unordered_set<ll>
#define sfor(i,azz,bzz) for (ll i = (azz); i <= (bzz); ++i)
#define rfor(i,bzz,azz) for (ll i = (bzz); i >= (azz); --i)
const ll MOD = 1e9+8;
const long long mod = 1000000007;
 //const ll MOD=99824435673 ;
const ll maxn = 1e6+1;
const ll llmax = (1ll<<60);
const int intmax = (1<<30);
const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899863;
vll fct , ifct;
vll primes;
vll spfa; 
vll grp[500009];
ll fctoriall[500009];
ll ta[500009];
vll dr;
ll grrp[100][100];
struct mod_int {
	ll val;
 
	mod_int(ll v = 0) {
		if (v < 0)
			v = v % MOD + MOD;
 
		if (v >= MOD)
			v %= MOD;
 
		val = v;
	}
		static ll mod_inv(ll a, ll m = MOD) {
		ll g = m, r = a, x = 0, y = 1;
 
		while (r != 0) {
			ll q = g / r;
			g %= r; swap(g, r);
			x -= q * y; swap(x, y);
		}
 
		return x < 0 ? x + m : x;
	}
	explicit operator ll() const {
		return val;
	}
	mod_int& operator+=(const mod_int& other) {
		val += other.val;
		if (val >= MOD) val -= MOD;
		return *this;
	}
	mod_int& operator-=(const mod_int& other) {
		val -= other.val;
		if (val < 0) val += MOD;
		return *this;
	}
	static unsigned fast_mod(uint64_t x, unsigned m = MOD) {
		return x % m;
	}
 
	mod_int& operator*=(const mod_int& other) {
		val = fast_mod((uint64_t)val * other.val);
		return *this;
	}
 
	mod_int& operator/=(const mod_int& other) {
		return *this *= other.inv();
	}
 
	friend mod_int operator+(const mod_int& a, const mod_int& b) { return mod_int(a) += b; }
	friend mod_int operator-(const mod_int& a, const mod_int& b) { return mod_int(a) -= b; }
	friend mod_int operator*(const mod_int& a, const mod_int& b) { return mod_int(a) *= b; }
	friend mod_int operator/(const mod_int& a, const mod_int& b) { return mod_int(a) /= b; }
	mod_int& operator++() {
		val = val == MOD - 1 ? 0 : val + 1;
		return *this;
	}
 
	mod_int& operator--() {
		val = val == 0 ? MOD - 1 : val - 1;
		return *this;
	}
		mod_int operator++(int) { mod_int before = *this; ++* this; return before; }
	mod_int operator--(int) { mod_int before = *this; --* this; return before; }
 
	mod_int operator-() const {
		return val == 0 ? 0 : MOD - val;
	}
 	bool operator==(const mod_int& other) const { return val == other.val; }
	bool operator!=(const mod_int& other) const { return val != other.val; }
 
	mod_int inv() const {
		return mod_inv(val);
	}
 
	mod_int pow(long long p) const {
		assert(p >= 0);
		mod_int a = *this, result = 1;
			while (p > 0) {
			if (p & 1)
				result *= a;
				
			a *= a;
			p >>= 1;
		}
 
		return result;
	}
 	friend ostream& operator<<(ostream& stream, const mod_int& m) {
		return stream << m.val;
	}
};
namespace NTT {
	vector<mod_int> roots = { 0, 1 };
	vector<int> bit_reverse;
	ll max_size = -1;
	mod_int root;
 
	bool is_power_of_two(int n) {
		return (n & (n - 1)) == 0;
	}
 
	ll round_up_power_two(int n) {
		assert(n > 0);
 
		while (n & (n - 1))
			n = (n | (n - 1)) + 1;
 
		return n;
	}
	ll get_length(ll n) {
		assert(is_power_of_two(n));
		return __builtin_ctz(n);
	}	
	void bit_reorder(ll n, vector<mod_int>& values) {
		if ((int)bit_reverse.size() != n) {
			bit_reverse.assign(n, 0);
			ll length = get_length(n);
 
			for (ll i = 0; i < n; i++)
				bit_reverse[i] = (bit_reverse[i >> 1] >> 1) + ((i & 1) << (length - 1));
		}
 
		for (ll i = 0; i < n; i++)
			if (i < bit_reverse[i])
				swap(values[i], values[bit_reverse[i]]);
	}
 
	void find_root() {
		ll order = MOD - 1;
		max_size = 1;
 
		while (order % 2 == 0) {
			order /= 2;
			max_size *= 2;
		}
 	root = 2;
 		// Find a max_size-th primitive root of MOD.
		while (!(root.pow(max_size) == 1 && root.pow(max_size / 2) != 1))
			root++;
	}
	void prepare_roots(ll n) {
		if (max_size < 0)
			find_root();
 
		assert(n <= max_size);
		if ((ll)roots.size() >= n)
			return;
 
		ll length = get_length(roots.size());
		roots.resize(n);
 
		// The roots array is set up such that for a given power of two n >= 2, roots[n / 2] through roots[n - 1] are
		// the first half of the n-th primitive roots of MOD.
		while (1 << length < n) {
			// z is a 2^(length + 1)-th primitive root of MOD.
			mod_int z = root.pow(max_size >> (length + 1));
 
			for (ll i = 1 << (length - 1); i < 1 << length; i++) {
				roots[2 * i] = roots[i];
				roots[2 * i + 1] = roots[i] * z;
			}
 
			length++;
		}	}
 void fft_iterative(ll N, vector<mod_int>& values) {
		assert(is_power_of_two(N));
		prepare_roots(N);
		bit_reorder(N, values);
		for (ll n = 1; n < N; n *= 2)
			for (ll start = 0; start < N; start += 2 * n)
				for (ll i = 0; i < n; i++) {
					mod_int even = values[start + i];
					mod_int odd = values[start + n + i] * roots[n + i];
					values[start + n + i] = even - odd;
					values[start + i] = even + odd;
				}
	}
 const ll FFT_CUTOFF = 150;
 	vector<mod_int> mod_multiply(vector<mod_int> left, vector<mod_int> right) {
		ll n = left.size();
		ll m = right.size();
		if (min(n, m) < FFT_CUTOFF) {
			constexpr uint64_t ULL_BOUND = numeric_limits<uint64_t>::max() - (uint64_t)MOD * MOD;
			vector<uint64_t> result(n + m - 1);
 
			for (ll i = 0; i < n; i++)
				for (ll j = 0; j < m; j++) {
					result[i + j] += (uint64_t)((ll)left[i]) * ((ll)right[j]);
 
					if (result[i + j] > ULL_BOUND)
						result[i + j] %= MOD;
				}
 
			for (uint64_t& x : result)
				if (x >= MOD)
					x %= MOD;
							return vector<mod_int>(result.begin(), result.end());
		}
 
		ll N = round_up_power_two(n + m - 1);
		left.resize(N);
		right.resize(N);
			bool equal = left == right;
		fft_iterative(N, left);
 
		if (equal)
			right = left;
		else
			fft_iterative(N, right);
 
		mod_int inv_N = mod_int(N).inv();
 
		for (ll i = 0; i < N; i++)
			left[i] *= right[i] * inv_N;
 
		reverse(left.begin() + 1, left.end());
		fft_iterative(N, left);
			left.resize(n + m - 1);
		return left;
	}
}void sieve() 
{
    spfa.resize(maxn+1,0);
  spfa[0]=0; spfa[1]=1;
    for(ll i =2; i<=maxn; i++)
    {
        if(spfa[i])
         continue;
        spfa[i]=i;
        for(ll j = i*i; j<=maxn; j+=i)
        {
          if(spfa[j]==0)
               spfa[j]=i;
      }
    }
    for (ll p=2; p<=maxn; p++)
      if (spfa[p]==p)
          primes.pb(p);
}
vll primes1;
void sieve2(ll l,ll r)
{
  vb isprime(r-l+1,1);
  
  if(l==1)
      isprime[0]=false;
  ll base;
  for(ll i=0;primes[i]*primes[i]<=r;i++)
  {
    base = (l/primes[i])*primes[i];
    if(base<l)
    {
      base += primes[i];
    }
    for(long long j=base;j<=r;j+=primes[i])
    {
      isprime[j-l]=false;
    }
    if(base==primes[i]){
      isprime[base-l]=true;
    }
  }
  for(int i=0;i<r-l+1;i++)
  {
    if(isprime[i])
        primes1.pb(i+l);
  }
}
ll thisinv(ll n)
{
    ll we=1;
    ll wee=mod-2;
    while(wee>0)
    {
        if(wee%2==1)
        {
            we=(n*we)%mod;
            
        }
        n=(n*n)%mod;
        wee/=2;
        
    }
    return we;
}
void primefctorll(ll x,mll &mp)
{
     for(ll i=0;primes[i]*primes[i]<=x;i++)
    {
        while(x%primes[i]==0)
        {
            mp[primes[i]]++;
            x/=primes[i];
        }
    }
    if(x!=1)
    {
        mp[x]++;
    }
}
void primefctor(ll n,mll &mp)
{
    while(n!=1)
    {
        mp[spfa[n]]++;
        n/=spfa[n];
    }
}
 
bool primeornot(ll n)
{
    for(ll i=0;primes[i]*primes[i]<=n;i++)
    {
        if(n%primes[i]==0)
        {
            return false;
        }
    }
    return true;
}
 
void allfctors(vll &v,ll n)
{
    for(ll i=1;i*i<=n;i++)
  {
        if(n%i==0)
        {
            v.pb(i);
            if(i*i!=n)
            {
                v.pb(n/i);
            }
        }
  }
  sort(v.begin(),v.end());
}
 
ll power(ll a,ll n)
{
  ll res=1;
  while(n)
  {
    if(n%2)
    {
      res=( res*a );
      if(res>=mod) res%=mod;
    }
    a=( a*a );
    if(a>=mod) a%=mod;
    n/=2;
  }
  if(res>=mod) res%=mod;
  return res;
}
ll modInv(ll a){
  ll res=power(a,mod-2);
  if(res>=mod) res%=mod;
  return res;
}
void modfct()
{
    ll n = maxn;
    ifct.resize(n+1);
    fct.resize(n+1);
    fct[0]=fct[1]=1;
    for(int i=2;i<=n;i++)
    {
        fct[i]=(i*fct[i-1]);
        if(fct[i]>=mod)
        {
          fct[i]%=mod;
        }
    }
    ifct[n]=modInv(fct[n]);
    for(int i=n-1;i>=0;i--)
    {
        ifct[i]=((i+1)*ifct[i+1]);
        if(ifct[i]>=mod)
        {
          ifct[i]%=mod;
        }
    }
}
void fctorifun()
{
 fctoriall[0] = 1;
 for (ll i = 1; i < 500009; i++)
 {
  fctoriall[i] = (fctoriall[i - 1] * i) % mod;
 }
}
ll ncr(ll n, ll r)
{
    if(n<r || r<0)
        return 0;
    ll ans=fct[n];
    ans*=ifct[r];
    if(ans>=mod)
      ans%=mod;
    ans*=ifct[n-r];
    if(ans>=mod)
      ans%=mod;
    return ans;
}
ll npr(ll n, ll r)
{
    if(n<r || r<0)
        return 0;
    ll ans=fct[n];
    ans*=ifct[n-r];
    if(ans>=mod) ans%=mod;
    return ans;
}
 
ll lcm(ll a,ll b)
{
  ll x=__gcd(a,b);
  a/=x;
  b/=x;
  ll sum=a*b*x;
  return sum;
}
 
 
 
 bool isthis(ll a,ll b,ll x){
     for(ll i=0;i<1000;i++);
     for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
     if(a%2==0 && b%2==0){
         if(((a+b)/2)>=x){
             return true;
         }
     }
     else if(a%2==0){
         if(((a+b-1)/2)>=x){
             return true;
         }
     }
     else if(b%2==0){
         
         if(((a+b-1)/2)>=x){
             return true;
         }
     }
     else{
         if(((a+b)/2)>=x){
             return true;
         }
       
     }
     return false;
 }
 int LCSubStr(string X,string Y, int m, int n)
{
    // Create a table to store
    // lengths of longest
    // common suffixes of substrings.  
    // Note that LCSuff[i][j] contains
    // length of longest common suffix
    // of X[0..i-1] and Y[0..j-1].
 
    int LCSuff[m + 1][n + 1];
    int result = 0; // To store length of the
                    // longest common substring
 
    /* Following steps build LCSuff[m+1][n+1] in
        bottom up fashion. */
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            // The first row and first column
            // entries have no logical meaning,
            // they are used only for simplicity
            // of program
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1]) {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

vector<long long> graph[100001];
long long t_a[1000001];
long long t_b[1000001];
long long con[1000001];
long long a[100001];
long long b[100001];
long long par[100001];
long long h[100001];
long long vis[100001];
vector<long long> sset;
priority_queue<pair<long long,long long> > leaf_track;


long long n,s;

long long determiner;

void make_it(long long nde,long long d)
{
    vis[nde]++;
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    h[nde] = d;
    
    bool is_it = true;
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    for(long long child:graph[nde])
    {
        if(!vis[child])
        {
            par[child] = nde;
            make_it(child,d+1);
            is_it = false;
        }
        for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    }
    
    if(is_it==true)
        leaf_track.push({d,nde});

    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
}

void done()
{
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    for(long long i=0;i<n+1;i++)
    {
        for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
        graph[i].clear();
        a[i] = 0;
        b[i] = 0;
        par[i] = 0;
        h[i] = 0;
        
    }
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    while(!leaf_track.empty())
        leaf_track.pop();
        for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
}

void clean(long long nde)
{
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    con[a[nde]] = 0;
    con[b[nde]] = 0;
    t_a[a[nde]] = 0;
    t_a[b[nde]] = 0;
    t_b[a[nde]] = 0;
    t_b[b[nde]] = 0;
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
}

int make_set(long long nde)
{
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    t_b[b[nde]]++;
    t_a[a[nde]]++;
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    
    if(t_a[a[nde]]==t_b[a[nde]] && con[a[nde]]!=0)
    {
        con[a[nde]]--;
        determiner--;
    }
    else if(con[a[nde]]==0)
    {
        con[a[nde]]++;
        determiner++;
    }
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    
    if(t_a[b[nde]]==t_b[b[nde]] && con[b[nde]]!=0)
    {
        con[b[nde]]--;
        determiner--;
    }
    else if(con[b[nde]]==0)
    {
        con[b[nde]]++;
        determiner++;
    }
    
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    vis[nde]++;
    sset.push_back(nde);
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    
    if(determiner==0)
    {
        if(vis[par[nde]]==0 && nde!=1)
            leaf_track.push(make_pair(h[par[nde]], par[nde]));
        
        clean(nde);
        
        return 1;
    }
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    if(nde==1)
    {
        clean(nde);        
        return 0;
    }
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    
    if(vis[par[nde]]==0)
    {
        if(make_set(par[nde])==1)
        {
            clean(nde);            
            return 1;
        }
    }
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    clean(nde); 
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    return 0;
}

int sol()
{
    cin>>n>>s;
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }

    for(long long i=0;i<n-1;i++)
    {
        long long u,v;
        cin>>u>>v;
        for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
        
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    
    for(long long i=1;i<n+1;i++)
        cin>>a[i];
    
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    for(long long i=1;i<n+1;i++)
        cin>>b[i];
        
        for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    
    for(long long i=1;i<n+1;i++)
    {
        vis[i] = 0;
        par[i] = 0;
        h[i] = 0;
    }
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
        
    make_it(1,1);for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    
    for(long long i=1;i<n+1;i++)
        vis[i]=0;
    
    bool correct = true;
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    
    vector<vector<long long> > sets;
    //cout<<"hi";
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    while(!leaf_track.empty())
    {
        pair<long long,long long> leaf = leaf_track.top();
        leaf_track.pop();
        
        if(vis[leaf.second]==0)
        {
            determiner = 0;
            sset.clear();
            if(make_set(leaf.second)==0)
            {
                correct = false;
                break;
            }
            else
                sets.push_back(sset);
        }
    }

    if(correct==false)
    {
        cout<<0<<endl;
        return 0;
    }
    
    if(s==1)
    {
        cout<<1<<endl;
        return 0;
    }

    long long a = 1;
    long long x = sets.size();

    for(long long i=0;i<x;i++)
    {
        long long u = sets[i][0];
        long long l = sets[i][0];
        
        long long sze = sets[i].size();
        
        for(long long j=1;j<sze;j++)
        {
            for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
            if(h[sets[i][j]]>h[l])
                l = sets[i][j];
                for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
            
            if(h[sets[i][j]]<h[u])
                u = sets[i][j];
        }
        for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }

        long long cnt = 0;

        for(long long c: graph[l])
        {
            if(c!=par[l])
                cnt++;
        }
        for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
        
        a = (a*(cnt+1))%mod;
    }
    
    cout<<a<<endl;
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    
    long long T;
    cin>>T;
    for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    for(long long i=0;i<T;i++)
    {
        for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
        sol();
        for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
        done();
        for(int axy=0; axy<1000; axy++){
              int abcd = 1;
              int bcde = 0;
              int teemp;
              teemp  = abcd;
              abcd = bcde; 
              bcde = teemp;
              break;
          }
          while(true){
              int abc = 0;
              abc++;
              abc++;
              abc--;
              break;
          }
    }

    return 0;
}