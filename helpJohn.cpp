// Author:: Mohammad Faisal
/*
    Company: HSBC java Hiring Challenges
    problem: help john<HSBC>  
    link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/not-decided-1ca0c947/
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> st;
    
    while(n--)
    {
        int k;
        cin >> k;
        st.insert(k);
        
        auto curr = st.find(k);
        
        auto left = curr, right = curr;
        
        if(curr == st.begin())
            cout<<"-1 ";
        else
        {
            left--;
            cout<<*left<<" ";
        }
        
        if(*right == *st.rbegin())
            cout<<"-1 ";
        else
        {
            right++;
            cout<<*right<<" ";
        }
        cout<<endl;
    }
    return 0;
}
