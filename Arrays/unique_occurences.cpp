#include <iostream>
using namespace std;

bool uniqueOccurences(vector<int> arr){
    unordered_map<int,int> mp;
    for(int i : arr){
        mp[i]++;
    }

    vector<int> freq;
    for(auto i : mp){
        freq.push_back(i.second);
    }

    sort(freq.begin(),freq.end());
    for(int i=0;i<freq.size()-1;i++){
        if(freq[i] == freq[i+1]){
            return false;
        }
    }
    return true;
}

int main() {
    
    int n;
    cin>>n;

    vector<int> arr;
    // print true id the number of occurences of each number is unique

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr.push_back(t);
    }

    bool ans = uniqueOccurences(arr);

    cout<<ans;

    
    return 0;
}