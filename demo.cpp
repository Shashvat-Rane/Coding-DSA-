#include<bits/stdc++.h>
using namespace std;

/*


def longest_beautiful_sequence(N, M):
    candidates = {N}  # Start with N itself
    
    # Iterate over each bit position we can modify
    for i in range(60):  # Since 2^60 > 10^18, this covers all cases
        bit = 1 << i  # Get the i-th bit
        
        if (N & bit) == 0:  # If the bit is NOT set in N
            new_candidates = set()
            for x in candidates:
                new_x = x | bit  # Set this bit in x
                
                if new_x <= M:  # Ensure it does not exceed M
                    new_candidates.add(new_x)
            
            candidates.update(new_candidates)
    
    # Convert to sorted list
    candidates = sorted(candidates)

    # Find the largest valid subset where every pair satisfies (X_i & X_j) = N
    longest_seq = []
    for i in range(len(candidates)):
        valid_seq = [candidates[i]]
        for j in range(i + 1, len(candidates)):
            if all((valid_seq[k] & candidates[j]) == N for k in range(len(valid_seq))):
                valid_seq.append(candidates[j])

        if len(valid_seq) > len(longest_seq):
            longest_seq = valid_seq

    # Print result
    if len(longest_seq) > 1:
        print(*longest_seq)
    else:
        print(-1)

# Example test
N, M = map(int, input().split())
longest_beautiful_sequence(N, M)



*/


int main(){

    int n =3;
    int m =7;

    vector<int> arr = {n};

    for(int i=0;i<60;i++){
        int bit = 1<<i;

        if(n&bit ==0 ){
            set<int> temp;
            for(int j=0;i<arr.size();j++){
                int t = arr[j] | bit;
                if(t<=m){
                    temp.insert(t);
                }
            }

            
        }

    }

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