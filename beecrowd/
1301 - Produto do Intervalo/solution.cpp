#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <iostream>
#include <map>
#include <cstring>

std::map<int, int> mp;
std::map<int, int>::iterator it;

int n, k, a, b;

#define N_MAX 100001

int arr[N_MAX], i, j;
int t[4 * N_MAX];

char s, *os;
size_t ts = 10000;
bool rs, printed;

void build(int a[], int v, int tl, int tr)
{
    if (tl == tr)
    {
        t[v] = a[tl] < 0;
    }
    else
    {
        int tm = (tl + tr) / 2;
        build(a, v * 2, tl, tm);
        build(a, v * 2 + 1, tm + 1, tr);
        t[v] = t[v * 2] ^ t[v * 2 + 1];
    }
}

int sum(int v, int tl, int tr, int l, int r)
{
    if (l > r)
        return 0;
    if (l == tl && r == tr)
    {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v * 2, tl, tm, l, std::min(r, tm)) ^ sum(v * 2 + 1, tm + 1, tr, std::max(l, tm + 1), r);
}

void update(int v, int tl, int tr, int pos, int new_val)
{
    if (tl == tr) {
        t[v] = new_val < 0;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v * 2, tl, tm, pos, new_val);
        else
            update(v * 2 + 1, tm + 1, tr, pos, new_val);
        t[v] = t[v * 2] ^ t[v * 2 + 1];
    }
}

int main() {
    os = (char *)malloc(ts);
    while (getline(&os, &ts, stdin) != EOF) {

        mp.clear();
        memset(t, 0, sizeof(int)*4*N_MAX);

        sscanf(os, "%d %d", &n, &k);
        getline(&os, &ts, stdin);

        int lb = 0;

        char *st = os;
        int i = 0;
        arr[0] = atoi(st);
        if (arr[0] == 0)
            mp.insert(std::make_pair(0, 1));
        for (long kk = 1; kk < n; kk++) {

            while (*st != ' ')
                st++;

            st++;
            arr[kk] = atoi(st);
            if (arr[kk] == 0)
                mp.insert(std::make_pair(kk, 1));
        }

        build(arr, 1, 0, n - 1);

        for (i = 0; i < k; i++) {
            
            getline(&os, &ts, stdin);
            sscanf(os, "%c %d %d", &s, &a, &b);

            a--;
            if (s == 'C') {
                update(1, 0, n - 1, a, b);
                if (b != 0)
                    mp.erase(a);
                else if (mp.count(a) == 0)
                    mp.insert(std::make_pair(a, 1));
            } else if (s == 'P') {
                b--;
                printed = 0;
                for (it = mp.begin(); it != mp.end(); it++) {
                    if (a <= it->first && it->first <= b) { // temos um 0 dentro da nossa procura
                        printf("0");
                        printed = 1;
                        break;
                    } else if (it->first > b) {
                        break;
                    }
                }

                if (printed)
                    continue;

                rs = sum(1, 0, n - 1, a, b);

                if (rs)
                    printf("-");
                else
                    printf("+");
            }
        }
        printf("\n");
    }
}