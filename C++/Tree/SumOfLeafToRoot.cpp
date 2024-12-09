/* Anshul Dishoriya's Competitive Programing Template */
 
#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define ff first
#define ss second
#define pb push_back
#define vt vector
#define pii pair<int,int>
#define all(arr) arr.begin() , arr.end()
#define sort(arr)  sort(all(arr))
#define reverse(arr)  reverse(all(arr))
#define fr(i , n) for (int i = 0; i < n; ++i)
#define print(a) for(auto i : a) cout << i <<" " ; cout << endl;
#define rep(x, start, end) for(int x=start; x<end; ++x)



#ifdef ONLINE_JUDGE
    #define debug(x)
#else
    #define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#endif
// reference from priyansh's template
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
// void _print(ldbl t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void HaHaHaHa() {cout << "Ha ha hahaha Ha\n ";}

int MAXN = 2e5 + 10 ;
vt<int> arr(MAXN) , dp(MAXN , -1);

struct Node{
    Node *left , *right;
    int data;

    Node(int d){
        data = d;
        left = right = NULL;
    }
};

void levelOrderTraversal(Node *root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for (int i=0 ; i<size ; i++){
            Node *temp = q.front();q.pop();
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
            cout << temp->data << "  " ;
        }
        cout << "level\n";
        cout << endl;
    }
}

Node *dfs(vt<int> &arr , int lb , int up){
    if ( lb == up) {
        // cout << lb << endl;
        Node *newNode = new Node(arr[lb]);
        return newNode;
    }
    int mid = lb + (up-lb)/2;
    Node * leftNode = dfs(arr , lb , mid);
    Node * rightNode = dfs(arr , mid+1 , up);

    int sum = leftNode->data + rightNode->data;

    Node *par = new Node(sum);
    // cout << sum;
    par->left = leftNode;
    par->right = rightNode;

    return par;

}


void solve() {
    int n ; cin >>n ;
    rep(i , 0 , n){
        cin >> arr[i];
    }
    Node *root = dfs(arr ,0 , n-1);
    cout << endl;
    levelOrderTraversal(root);
    
}   
 
int32_t main() {
 
#ifndef ONLINE_JUDGE
    freopen("Input-Output/input.txt" , "r" , stdin);
    freopen("Input-Output/output.txt" , "w" , stdout);
    freopen("Input-Output/error.txt" , "w" , stderr);
#endif
 
    int t = 1;
    // cin >> t;
    while (t--) 
        solve();
    return 0;
}

