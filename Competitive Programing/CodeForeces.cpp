/* Anshul Dishoriya's Competitive Programing Template */


#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define int long long
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define vt vector
#define pii pair<int,int>
#define all(arr) arr.begin() , arr.end()
#define reverse(arr)  reverse(all(arr))
#define fr(i , n) for (int i = 0; i < n; ++i)
#define print(a)  cerr << #a << " : "; for(auto i : a) cerr << i <<" \n" ; cout << endl;
#define rep(x, start, end) for(int x=start; x<end; ++x)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz size()
#define nextln cout << "\n";
#define println(a) cout<<a<<"\n";
#define printsp(a) cout<<a<<" ";
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
void HaHaHaHa() {cout << "Ha ha hahaha Ha\n ";}
#define google(num_case) cout << "Case #"<<num_case<<": ";

#define MOD 1000000007

#ifdef ONLINE_JUDGE
#define debug(x)
#else
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#endif
// reference from priyansh's template
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

// template<typename... T> void see(T&... args) { ((cin >> args), ...);}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "\n[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(unordered_set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(unordered_map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//gcd function
int gcd(int a, int b)  { if (b > a) {  return gcd(b, a);  }  if (b == 0) { return a; }  return gcd(b, a % b); }
/*-------------------------------------------------------------------------------------------------------------------------------------------------*/
/*------------------ =  Template Ends Here  = ----------------------*/


void solve(int test_case) { 
    int n ; cin >> n;
    vt<int> arr(n);
    seea(arr ,0, n);

    sort(all(arr));
    int sum=0;
    for (int i=1 ; i<n ; i+=2){
        if (arr[i]<=0){
            arr[i-1] = abs(arr[i-1]),arr[i] = abs(arr[i]);

            // sum += arr[i-1] + arr[i];
        }
        else if (abs(arr[i-1]) > arr[i] ){
            arr[i-1] = abs(arr[i-1]),arr[i] = -arr[i];            
        }
        sum += arr[i-1] + arr[i];
    }
    if (n&1){
        sum += arr.back();
    }
    println(sum)


}

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("Input-Output/input.txt" , "r" , stdin);
    freopen("Input-Output/output.txt" , "w" , stdout);
    freopen("Input-Output/error.txt" , "w" , stderr);
#endif
    fastio();
    auto start1 = high_resolution_clock::now();
    int t = 1;
    cin >> t;
    rep(i, 1 , t + 1) {
        solve(i);
    }

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);

#ifdef ONLINE_JUDGE
#else
    cerr << "Time: " << duration . count() / 1000 << endl;
#endif
    return 0;}