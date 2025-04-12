// sum of any k consecutive elements of an array -> https://github.com/mohandsakr/my-problem-solving-solutions-on-codeforces.com/blob/master/363%20B.%20Fence

//  IN perfect binary tree 
// if internal nodes are n then 
// levels or height = log2(2n+1)
// leaf nodes n+1
// total nodes 2n+1



// x<<i    -> x* 2^i
// x>>i    -> x/ 2^i
// Check ith bit ->   (n & (1<<i))>>i
// set ith bit ->   (n | (1<<i))
// clear ith bit -> int t= (n & (1<<i))>>i;  if(t) {r=n ^ (1 << i);}
// count set bits in number n->   __builtin_popcount(n)           or     brian kernighens algo    ->     while(n > 0) {count+; n = (n & (n-1));}
// set the rightmost unset bit   n|n+1



// sorting
// struct Interval {int start, end;}; 
// bool compareInterval(Interval i1, Interval i2){return (i1.end > i2.end);} 
// int main(){vector<Interval> v { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } }; 
// 	sort(v.begin(), v.end(), compareInterval); 
// 	cout << "Intervals sorted by ending time in descending order : \n"; 
// 	for (auto x : v) {cout << "[" << x.start << ", " << x.end << "] ";} return 0;} 




// adjency list -> array of vectors
// adjancy list me ith vector me elements ye hote hai -> usse outgoing edges jha ja rhe hai

// adjancy matrix -> 2d matrix 

//edge list





// any two relatively prime positive integers $m,n$, the greatest integer that cannot be written in the form $am + bn$ for nonnegative integers $a, b$ is $mn-m-n$.



// lower bound -> usse bda ya uske braber

// upper bound -> usse bda