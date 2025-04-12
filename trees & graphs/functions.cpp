// Modular Power (Time Complexity : Logarithmic)
int mpow(int x, int y)
{
    int res = 1;
    x = x % MOD;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return res;
}

// Normal Power (Time Complexity : Logarithmic)
int mpow(int x, int y)
{
    int res = 1;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}

// Modular Factorial
vector<int> fac;
vector<int> inv;
void facto()
{
    int lim = maxn; // PUT YOUR LIMIT HERE
    fac.pb(1);
    int ans = 1;

    fu(i, 2, lim + 3)
    {
        fac.pb(ans);
        ans = (ans * i) % MOD;
    }

    ans = mpow(fac[lim], MOD - 2);

    fd(i, lim, 1)
    {
        inv.pb(ans);
        ans = (ans * i) % MOD;
    }
    inv.pb(1);
    reverse(sor(inv));
}

// nCr
int ncr(int n, int r)
{
    int ans = fac[n];
    ans = (ans * 1ll * inv[r]) % MOD;
    ans = (ans * 1ll * inv[n - r]) % MOD;
    return ans;
}

// factors
vector<int> factors(int a)
{
    vector<int> ans;
    for (int i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            ans.pb(i);
            if (i != a / i)
                ans.pb(a / i);
        }
    }
    return ans;
}

// Custom Comparator for set
struct comp
{
    bool operator()(const pll &p1,
                    const pll &p2)
        const
    {
        return (p1.second - p1.first + 1 == p2.second - p2.first + 1 ? p1.first < p2.first : p1.second - p1.first + 1 > p2.second - p2.first + 1);
    }
};

// Sieve of Erastosthenes
vector<int> SieveOfEratosthenes(int n)
{
    vector<bool> prime(n + 1, true);
    vector<int> v;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
    return v;
}

// Linear Sieve
vector<int> prime;
bool is_composite[MAXN];

void sieve()
{
    fill(is_composite, is_composite + MAXN, false);
    for (int i = 2; i < MAXN; ++i)
    {
        if (!is_composite[i])
            prime.push_back(i);
        for (int j = 0; j < prime.size() && i * prime[j] < MAXN; ++j)
        {
            is_composite[i * prime[j]] = true;
            if (i % prime[j] == 0)
                break;
        }
    }
}

// Euler Totient
// FOR single number O(sqrt n)
int phi(int n)
{
    int ans = n;
    for (int p = 2; p * p <= n; p++)
    {
        if (n % p == 0)
        {
            while (n % p == 0)
            {
                n /= p;
            }
            ans -= ans / p;
        }
    }
    if (n > 1)
    {
        ans -= ans / n;
    }
    return ans;
}

// FOR 1 to n O(n * logn * logn)
void precompute()
{
    for (int i = 1; i < MAX_N; i++)
    {
        phi[i] = i;
    }
    for (int i = 2; i < MAX_N; i++)
    {
        // If i is prime
        if (phi[i] == i)
        {
            for (int j = i; j < NMAX; j += i)
            {
                phi[j] -= phi[j] / i;
            }
        }
    }
}

// KMP Algorithm
set<int> indic;

void computeLPSArray(string pat, int M, int *lps)
{
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// Prints occurrences of pat[] in txt[]
void KMPSearch(string pat, string txt)
{
    int M = (pat.size());
    int N = (txt.size());
    int lps[M];
    computeLPSArray(pat, M, lps);
    int i = 0;
    int j = 0;
    while ((N - i) >= (M - j))
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {
            indic.insert(i - j);
            cout << (i - j) << '\n';
            j = lps[j - 1];
        }
        else if (i < N && pat[j] != txt[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}

// Stoi for int64_t
int mystoi(string x)
{
    reverse(x.begin(), x.end());
    int cnt = 1;
    int ans = 0;
    for (char &c : x)
    {
        ans += (c - '0') * cnt;
        cnt *= 10;
    }
    return ans;
}

// __lcm
int __lcm(int a, int b)
{
    return a * b / __gcd(a, b);
}






ll binarySearchIndexEqualOrLess(const std::vector<ll>& arr,ll x) {
    ll left = 0;
    ll right = arr.size() - 1;
    ll result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] <= x) {
            result = mid; // Update result to the current mid index
            left = mid + 1; // Search the right half
        } else {
            right = mid - 1; // Search the left half
        }
    }

    return result; // Return the last updated result
}






