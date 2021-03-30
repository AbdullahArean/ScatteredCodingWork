
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <utility>
#include <vector>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <bitset>
#include <complex>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <climits>

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(0);
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)

#define IntArrayInput(intarray, n) \
    scanf("%d", &n);               \
    for (int i = 0; i < (n); ++i)  \
        scanf("%d", &intarray[i]);
#define IntArrayOutput(intarray, n) \
    for (int i = 0; i < (n); ++i)   \
    {                               \
        printf("%d ", intarray[i]); \
    }                               \
    printf("\n");
#define testcase     \
    int t;           \
    scanf("%d", &t); \
    while (t--)

#pragma GCC optimize("O3")
#pragma GCC target("sse4")

typedef long double ld;
typedef long long ll;
#define sz(x) (int)(x).size()
// #define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

using namespace std;

// void swap(char *xp, char *yp)
// {
//     char temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

// void a()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         int an=0, b=0;
//         scanf("%d %d", &an, &b);
//         if (b % 2 == 0)
//         {
//             printf("%d\n", an - b + 1);
//             printf("%d ", b / 2);
//         }
//         else
//         {
//             printf("%d\n", an - b);
//         }

//         for (int i = b + 1; i <= an; i++)
//         {
//             printf("%d", i);
//             while (i != an)
//                 {printf(" ");}
//         }
//         printf("\n");
//     }
//     return;
// }
void a()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        ll temp;
        ll sum1=0, sum3=0;
        ll n = 0, x = 0;
        scanf("%lld %lld", &n, &x);
        for(ll i=0; i<n; i++)
        {
            scanf("%lld",&temp);
            sum1 += ceil((float)temp/x);
            sum3 += temp;
        }
        printf("%lld %lld\n", (ll)ceil((float)sum3/x),sum1);
    }
}

int main(int argc, char const *argv[])
{
    a();//Problem Link: https://codeforces.com/contest/1471/problem/A
    return 0;
}
