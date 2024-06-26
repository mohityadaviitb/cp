// There are only 26 letters in alphabet...

// int cntsrc[26]; // don't forget to memset it but not cnt
// int* cnt = cntsrc - 'a'; // so cnt['a'] = cntsrc[0] and so on
// this way cnt[character] is allowed :)

// lower_bound and upper_bound 
//     both on VECTOR & SET : give "end" iterator if last element itself is smaller than asked.
    
// In Alice and Bob questions(for NO DRAW questions only), we don't need to properly define a winning state 
// We can use the following : 
// (1) Every state is either winning or losing
// (2) Say we know a state X which is winning for player who has chance when system state is X
//     If we can play our move in such a way that the opponent MUST give us state X after her/his turn
//     If X is losing for player who has chance when system state is X
//     Then we can just simply play our move and make the system state = X
    
//     If at a state, We can play both moves for some state X
//     i.e. in one move either go to X or move such that opponent is forced to give you X
//     THEN VICTORY IS YOURS TO TAKE

// WHILE CONSIDERING CORNER CASES TAKE -INF OR +INF AS JUGAAD , I MEAN IF YOU ARE HANDLING "VECTOR
// IS EMPTY" AS A SEPARATE CASE THEN DO CONSIDER ABOUT PUSHING BACK A -INF OR INF

// fill(arr, arr+25, 0) fills the arr from 0 to 24 index with 0

// change a,b,c,... to 0,1,2...n and then use base n+1 system to clearly distinguish (this is sort of 
// like bitmask, actually this is exactly like bitmask)

// a + b = 2*(a and b) + (a xor b)

// struct Edge 
// {
// 	int a, b, w;
// 	bool operator<(const Edge &y) { return w < y.w; }
// };

// struct Edge {
// 	int a, b, w;
// 	friend bool operator<(const Edge &x, const Edge &y) { return x.w < y.w; }
// };

// unique(a.begin(),a.end()) 
//     Takes in a vector : 10 20 20 20 30 30 20 20 10
//     Gives out         : 0 20 30 20 10 ?  ?  ?  ?
//     Return value of that is an iterator to first ? mark
//     Hence doing a.erase(unique(a.begin(),a.end()) , a.end()) on 10 20 20 20 30 30 20 20 10 gives 0 20 30 20 10 (no trash, reduces size)
//     as with all things , we can use a comparator in unique too :|:

// remove(a.begin(),a.end(),value)
//     Removes that value and keeps remaining in sequential order
//     10 20 30 30 20 10 10 20  --> 10 30 30 10 10 ?  ?  ?
//     Again return value is the first ? mark
//     So we can do something similar to above i.e. a.erase(remove(a.begin(),a.end()) , a.end())

// count(a.begin(),a.end(),value) SELF EXPLANATORY

// count restricts to just checking value, we can do more : 
//     count_if(a.begin(),a.end(),[&](int x){return blah...blah... ;});

// THE BELOW THREE ARE PRETTY MUCH SELF EXPLANATORY
// any_of(foo.begin(), foo.end(), [](int i){return i<0;})
// all_of(foo.begin(), foo.end(), [](int i){return i<0;})
// none_of(foo.begin(), foo.end(), [](int i){return i<0;})

// you can swap vectors too ( they don't need to be of same size too)

// fill : 
//     std::vector<int> myvector (8 , 0);                   // myvector: 0 0 0 0 0 0 0 0
//     std::fill (myvector.begin(),myvector.begin()+4,5);   // myvector: 5 5 5 5 0 0 0 0
//     std::fill (myvector.begin()+3,myvector.end()-2,8);   // myvector: 5 5 5 8 8 8 0 0

// nth_element(myvector.begin(), myvector.begin() + 5, myvector.end());
//     Keeps the 6th smallest element in 6th position and to the left will be
//     all smaller than that and to the right will be all larger than that
//     Time = O(n)

// BINARY SEARCH
//     There are two types of cases : 
//         (1) -1 -1 -1 -1 -1 0 1 1 1 1 
//             We want to find 0, here we do l = 0, r = last index
//             while(l < r) and try to pinpoint both l and r onto 0
//             WORKS WHEN : we can check if a number is on left of 0 or right of 0 (the numbers don't 
//             actually have to sorted, if they are just partitiioned with respect to zero,we are 
//             fine with it)

//         (2) 0 0 0 0 1 1 1   
//             Here we want to check the transition point
//             Hence take l = 0, r = last index
//             while(r - l > 1) and try to pinpoint l onto last index of 0 and r onto first 
//             index of 1
//     THE 0 and 1 are just booleans , I mean , binary search doesn't have to be on numbers , it is most commonly
//     done on fixing and minimum or maximum for a variable, for every binary search value (i.e. mid value )
//     we just keep on checking and reach the transition point