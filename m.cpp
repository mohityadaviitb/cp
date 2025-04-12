#include <bits/stdc++.h>
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Mohityadav cout.tie(NULL);
#define fu(i, a, b) for (ll i(a); i < b; i++)
#define ll long long int
#define pb push_back
using namespace std;
#define commented // Un-Comment this before submission
#ifndef commented
#define dbg(v) cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << '\n';
#else
#define dbg(v)
#endif

const long long MOD = 998244353;

const int maxval = 210000;

vector<long long> fact(maxval + 1), invrfactval(maxval + 1);

long long mdxpval(long long base, long long exp, long long mod)
{
    long long rt = 1 % mod;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
            rt = (rt * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return rt;
}

void precompfac()
{
    fact[0] = 1;
    for (int i = 1; i <= maxval; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invrfactval[maxval] = mdxpval(fact[maxval], MOD - 2, MOD);
    for (int i = maxval; i >= 0; i--)
    {
        if (i > 0)
            invrfactval[i - 1] = (invrfactval[i] * i) % MOD;
    }
}

long long nCr(int n, int r)
{
    if (r < 0 || r > n)
        return 0;
    return ((fact[n] * invrfactval[r]) % MOD * invrfactval[n - r]) % MOD;
}

struct mks
{
    int L;
    int cntL;
    int R;
    int cntR;
    bool operator==(const mks &other) const
    {
        return L == other.L && cntL == other.cntL && R == other.R && cntR == other.cntR;
    }
};

struct mksHash
{
    std::size_t operator()(const mks &s) const
    {
        size_t rsval = 17;
        rsval = rsval * 31 + std::hash<int>()(s.L);
        rsval = rsval * 31 + std::hash<int>()(s.cntL);
        rsval = rsval * 31 + std::hash<int>()(s.R);
        rsval = rsval * 31 + std::hash<int>()(s.cntR);
        return rsval;
    }
};

int main()
{

    precompfac();
    Code By Mohityadav
    ll t=1;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;
        vector<long long> d(N);
        for (int i = 0; i < N; i++)
        {
            cin >> d[i];
        }

        sort(d.begin(), d.end());

        vector<long long> prfxval(N + 1, 0);
        for (int i = 0; i < N; i++)
        {
            prfxval[i + 1] = prfxval[i] + d[i];
        }

        int wdsum = N - M + 1;
        vector<long long> fvals(wdsum, 0);

        long long f0 = 0;
        for (int j = 0; j < M; j++)
        {
            int weight = 2 * j - (M - 1);
            f0 += weight * d[j];
        }
        fvals[0] = f0;

        for (int i = 0; i < wdsum - 1; i++)
        {
            long long t = fvals[i] - 2 * (prfxval[i + M] - prfxval[i + 1]) + ((long long)(M - 1) * (d[i + M] + d[i]));
            fvals[i + 1] = t;
        }

        long long opt = fvals[0];
        for (int i = 0; i < wdsum; i++)
        {
            if (fvals[i] < opt)
                opt = fvals[i];
        }

        long long answermk = 2 * opt;

        vector<int> grpval(N, 0);
        vector<int> grpst, grped, grpf;
        int currgrpval = 0;
        grpst.push_back(0);
        grpval[0] = 0;
        for (int i = 1; i < N; i++)
        {
            if (d[i] == d[i - 1])
            {
                grpval[i] = currgrpval;
            }
            else
            {
                grped.push_back(i - 1);
                grpf.push_back(i - grpst[currgrpval]);
                currgrpval++;
                grpst.push_back(i);
                grpval[i] = currgrpval;
            }
        }
        grped.push_back(N - 1);
        grpf.push_back(N - grpst[currgrpval]);

        unordered_map<mks, long long, mksHash> mksMap;
        for (int i = 0; i < wdsum; i++)
        {
            if (fvals[i] != opt)
                continue;
            int L_idx = i, R_idx = i + M - 1;
            int Lgrp = grpval[L_idx], Rgrp = grpval[R_idx];
            mks s;
            if (Lgrp == Rgrp)
            {
                s.L = Lgrp;
                s.cntL = M;
                s.R = Rgrp;
                s.cntR = M;
            }
            else
            {
                int countL = grped[Lgrp] - L_idx + 1;
                int countR = R_idx - grpst[Rgrp] + 1;
                s.L = Lgrp;
                s.cntL = countL;
                s.R = Rgrp;
                s.cntR = countR;
            }
               if (mksMap.find(s) == mksMap.end())
            {
                long long ways = 0;
                if (s.L == s.R)
                {

                    ways = nCr(grpf[s.L], M);
                }
                else
                {

                    ways = (nCr(grpf[s.L], s.cntL) * nCr(grpf[s.R], s.cntR)) % MOD;
                }
                mksMap[s] = ways;
            }
        }

        long long finalways = 0;
        for (auto &m : mksMap)
        {
            finalways = (finalways + m.second) % MOD;
        }

        cout << answermk << " " << finalways % MOD << "\n";
    }

    return 0;
}