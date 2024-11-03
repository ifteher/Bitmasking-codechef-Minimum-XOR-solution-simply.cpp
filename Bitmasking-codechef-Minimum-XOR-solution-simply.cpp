problem statement:Minimum XOR
You have 
N
N integers -
A
1
,
A
2
,
…
,
A
N
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
 .

You have to make the Bitwise XOR of all the elements as minimum as possible.

You are allowed to remove at most one element. Note that this means that you can also choose to not remove any element.

What is the final minimum XOR that you can achieve after removing at most one element?

Note: In most programming languages, the XOR of two variables x and y can be computed using x ^ y.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains an integer 
N
N — the number of elements.
The next line contains 
N
N space separated integers
Output Format
For each test case, output on a new line the final minimum XOR of the elements.

Constraints
1
≤
T
≤
1
0
5
1≤T≤10 
5
 
1
≤
N
≤
3
⋅
1
0
5
1≤N≤3⋅10 
5
 
1
≤
A
i
≤
1
0
5
1≤A 
i
​
 ≤10 
5
 
Sum of 
N
N over all the testcases 
≤
3
⋅
1
0
5
≤3⋅10 
5
 
Sample 1:
Input
Output
3
4
2 4 3 6
2
4 4
5
1 3 5 17 9
0
0
14
Explanation:
Testcase 1: The bitwise XOR of all elements 
{
2
,
4
,
3
,
6
}
{2,4,3,6} is 
3
3. If we remove the element 
3
3, the total XOR of the remaining elements becomes 
0
0 which is minimum possible XOR.

Testcase 2: The bitwise XOR of all elements 
{
4
,
4
}
{4,4} is 
0
0. This is already the minimum possible total XOR, and so we will not remove any element.

Testcase 3: The bitwise XOR of all elements 
{
1
,
3
,
5
,
17
,
9
}
{1,3,5,17,9} is 
31
31. If we remove the element 
17
17, the total XOR of the remaining elements becomes 
14
14 which is minimum possible XOR.

  
solution:
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
long long mnxor=0;
for(int i=0;i<v.size();i++)
{
    mnxor^=v[i];
}
long long ansxor=mnxor;
for(int i=0;i<v.size();i++)
{
  ansxor=min(ansxor,(mnxor^v[i]));
}
cout<<ansxor<<endl;
}
return 0;
}
