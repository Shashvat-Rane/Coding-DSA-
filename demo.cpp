#include <bits/stdc++.h>
using namespace std;

int main() {
    string num1 = "123", num2 = "456";

    int n = num1.size(), m = num2.size();

    vector<int> ans(n+m, 0);

    int t1 = 0; 
    int t2 = 0; 

    for (int i = n-1;i>=0;i--) {
        int carry = 0;
        int d1 = num1[i]-'0';
        t2 = 0;

        for (int j = m - 1; j >= 0; j--) {
            int d2 = num2[j] - '0';
            int sum = d1 * d2 + ans[t1 + t2] + carry;
            carry = sum / 10;
            ans[t1+t2] = sum%10;
            t2++;
        }

        if (carry > 0)
            ans[t1+t2] += carry;

        t1++;
    }

    int i=ans.size()-1;
    while (i>=0 && ans[i]==0)
        i--;

    string ans2="";

    while (i>=0)
        ans2+=(ans[i--]+'0');

    cout<<ans2<<"\n";

    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;


// int main(){

//     string s;
//     cin>>s;

//     int check = 0; // 1 - vowels and 2 - consonants
//     string ans="GOOD";
//     int wildCardCount=0;

//     int count =0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='?'){
//             count++;
//             wildCardCount++;
//         }
//         else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){

//             if(check==1 && count>5){
//                 ans="BAD";
//                 break;
//             }
//             if(check!=1){
//                 check=1;
//                 count=wildCardCount;
//                 wildCardCount=0;
//             }
//             count++;
//             if(count>5){
//                 ans="BAD";
//                 break;
//             }
//         }
//         else{
//             if(check==2 && count>5){
//                 ans="BAD";
//                 break;
//             }
//             if(check!=2){
//                 check=2;
//                 count=wildCardCount;
//                 wildCardCount=0;
//             }
//             count++;
//             if(count>3){
//                 ans="BAD";
//                 break;
//             }
//         }
//     }

//     if((check==1 && count>5) || (check==2 && count>3)){
//         ans="BAD";
//     }

//     cout<<ans<<endl;

//     return 0;
// }