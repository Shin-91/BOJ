#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <cstring>
#include <bitset>
#include <functional>
#include <map>

using namespace std;

typedef pair<int, int> pii;
typedef pair<pair<int, int>, pair<int, int>> piii;
typedef long long ll;
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second

int n;
vector <piii> rect;
bool check[101][101];

int main(void)
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        rect.push_back({{a,b},{c,d}});
    }

    vector <int> vt;
    for(int i=n-1;i>=0;i--)
    {
        int cnt = 0;
        for(int p=rect[i].ff;p<rect[i].ff+rect[i].sf;p++)
        {
            for(int q=rect[i].fs;q<rect[i].fs+rect[i].ss;q++)
            {
                if(!check[p][q])
                {
                    check[p][q] = true;
                    cnt++;
                }
            }
        }
        vt.push_back(cnt);
    }
    for(int i=n-1;i>=0;i--)
        printf("%d\n", vt[i]);
    return 0;
}
