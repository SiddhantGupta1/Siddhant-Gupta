#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> arrayP = {2,3,5,7,11,13};
    vector<int> arrayO = {1,3,5,7,9,11,13,15,17,19,21,23}; 
    vector<int> arrayF = {1,1,2,3,5,8,13,21};
    vector<int> arrayR;
    
    for(int i=0;i<10;i++)
    {
        arrayR.push_back(1+(rand()%30));
    }
    
    int n,t;
    cout<<"Enter the number of parameters: ";
    cin>>t;
    cout<<"Enter the parameters from Odd, Primes, Fibo, Rand: ";
    string str;
    vector<int> res;
    vector<string> array;
    for(int i=0;i<t;i++)
    {
        cin>>str;
        array.push_back(str);
    }
    
    for(int i=0;i<array.size();i++)
    {
        if(array[i] == "primes")
        {
            for(int k=0;k<arrayP.size();k++)
                res.push_back(arrayP[k]);
        }
        else if(array[i] == "odd")
        {
            for(int k=0;k<arrayO.size();k++)
                res.push_back(arrayO[k]);
        }
        else if(array[i] == "fibo")
        {
            for(int k=0;k<arrayF.size();k++)
                res.push_back(arrayF[k]);
        }
        else if(array[i] == "rand")
        {
            for(int k=0;k<arrayR.size();k++)
                res.push_back(arrayR[k]);
        }
    }
    sort(res.begin(),res.end());
    int j=0;
    for(int i=0;i<res.size()-1;i++)
    {
        if(res[i] != res[i+1])
            res[j++] = res[i];
    
    }
    res[j++] = res[res.size()-1];
    
    for(int i=0;i<j;i++)
        cout<<res[i]<<" ";
    return 0;
}