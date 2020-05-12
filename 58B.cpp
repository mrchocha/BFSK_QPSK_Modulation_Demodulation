#include <bits/stdc++.h>
using namespace std;
#define MAXI INT_MAX
#define MINI INT_MIN
#define MAX 100000
#define ll long long
#define ld long double
#define modulo 1000003
#define modAdd(a,b) (a%modulo + b%modulo)%modulo
#define modSub(a,b) (a%modulo - b%modulo + modulo)%modulo
#define pb push_back
#define mp make_pair
#define lin(t) long long t; cin >> t;
#define din(t) long double t; cin >> t;
#define speedUp() ios::sync_with_stdio(0); cin.tie(0);
const ll fastPow(ll x, ll y) {ll res=1;x=x%modulo;
    while(y>0){if(y&1)res=(res*x)%modulo;y=y>>1;x=(x*x)%modulo;}return res; 
}

int main() {
    speedUp()
    lin(n) 
    // cout << n;
    vector<ll> v;
    for(ll i=1; i<=sqrt(n); i++){
        if(n%i==0) v.pb(i);
        if(n/i!=i && n%(n/i)==0) v.pb(n/i);
    } 
    sort(v.begin(), v.end()); ll tmp = n;
    // for(ll i=0; i<v.size(); i++){ cout << v[i] << " ";}
    if(v.size()>1){
        for(ll i=v.size()-2; i>=0; i--){
            if(tmp%v[i]==0) {cout << tmp << " "; tmp=v[i];} 
        }
        cout << tmp;
    } else {
        cout << tmp;
    }
}