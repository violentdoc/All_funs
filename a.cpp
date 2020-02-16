#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
 
#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>
#include <map>
#include <list>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
 
#define    pi          acos(-1)
#define    ll          long long
#define    mp          make_pair
#define    pb          push_back
#define    vi          vector <int>
#define    vs          vector <string>
#define    maxx(a,b,c) max(a,max(b,c))
#define    minn(a,b,c) min(a,min(b,c))
#define    all(x)      (x).begin(),(x).end()
#define    fill(x,y)   memset(x, y, sizeof(x))
#define    trace(x)    cout << #x << " = " << x << endl
#define    bug         cout << "Bug check" << endl
#define    eps         1e-10
#define    endl        '\n'
 
using namespace std;

int fib(int n){
	if(n<=1) return n;
	return fib(n-2)+fib(n-1);
}

int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int lcm(int a,int b){
	return ((a*b)/gcd(a,b));
}

#define MAX 200050
void sieve(){
	fill(primes , 1);
	primes[0]=0;
	primes[1]=0;
	for(int i=2;i<=sqrt(MAX);i++){
		if(primes[i]==1){
			for(int j=2;i*j<=MAX;j++){
				primes[i*j]=0;
			}
		}
	}
}

int main(){
	//freopen("in.txt","r", stdin);
	//freopen("out.txt","w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);

}