#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    // Arrays ----------------------------------------------------------------------------------------------------------
    cout<<"\nArray\n";

    array<int,5> arr = {1,2,3,4};

    // cin>>arr[i];  normal input way like normal one
    // it is also static

    int size = arr.size();

    // Access krne ke tareeke
    cout<<arr[2]<<endl;
    cout<<arr.at(2)<<endl;

    // Front element and back element ko access krne ka tareeka
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;


    // Vector ----------------------------------------------------------------------------------------------------------
    cout<<"\n\nVector\n";

    vector<int> v; // size = 0

    vector<int> v1(5,1);  // initializing vector with size 5 and elements with value 1

    cout<<v.capacity()<<endl;  // kitna space or memory alloted h
    cout<<v.size()<<endl;  // kitne elements entered h

    v.push_back(10);  // vector me element dalne ka tareeks
    v.pop_back();    // vector se element nikalne ka tareeka 

    cout<<v.size()<<" yaha "<<endl;
    cout<<v[0]<<endl;
    cout<<v.capacity()<<" yaha "<<endl;

    cout<<v.front()<<endl;   // front element ko access krne ka tareeka
    cout<<v.back()<<endl;    // back (aakhri) element ko access krne ka tareeka

    v.clear();   // size 0 ho jata h but capacity utni hi rehti h


    // Deque ----------------------------------------------------------------------------------------------------------
    cout<<"\n\nDeque\n";

    deque<int> dq;

    dq.push_back(10); // pushing element in doubly ended queue from back side
    dq.push_front(5); // pushing element in doubly ended queue from front side
    dq.push_back(20);

    dq.pop_back();    // poping out element from deque from back side or last element
    dq.pop_front();   // poping out element from deque from front side or first element

    dq.at(0);   // access element

    cout<<dq.front()<<endl;   // access first element in deque
    cout<<dq.back()<<endl;    // access last element in deque

    cout<<dq.empty(); // shows it is emplty or not

    // agar koi element delete krna ho toh, range deni hoti h kitne elements kaha se kaha delete krne h
    dq.erase(dq.begin(),dq.begin()+1);   // deleting one first element


    // List ----------------------------------------------------------------------------------------------------------
    cout<<"\n\nList\n";

    list<int> l;  
    // It is doubly linked list , but fir isme aur deque me kya farak h? 
    // toh farak ye h ki iske koi bhi element ko access directly nh kiya ja sakta poora traverse krke jana padt h 
    // O(n) time me baaki deque me O(1) time me access ho jata h

    list<int> l1(5,100);  // initialising list with 5 elements all equal to 100

    // since it is doubly ended linked list toh front se bhi push kr sakte h back se bhi

    l.push_back(10);
    l.push_front(5);
    l.push_back(20);
    l.push_back(30);

    // simple print krne ka tareeka
    cout<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    // erase function me isme range nh pass kr sakte hame iterator pass krna hota h ki front element delete krna h ya back
    l.erase(l.begin());  // first element delete krne ke liye
    l.erase(l.end());    // last element delete krne ke liye

    size = l.size();  // size nikalne ka tareeka


    // Stack ----------------------------------------------------------------------------------------------------------
    cout<<"\n\nStack\n";

    stack<int> s; // LIFO principle Last In First Out

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    s.pop();

    cout<<s.top()<<endl; // top element ko access krne ka treeka
    size = s.size();  // size nikalne ka treeka
    cout<<s.empty()<<endl; // stack khali h ya kuch h usme pata krne ka tareeka


    // Queue ----------------------------------------------------------------------------------------------------------
    cout<<"\n\nQueue\n";

    queue<string> q;  // FIFO principle First In First Out

    q.push("Shashvat");
    q.push("Chetan");
    q.push("Tarak");

    cout<<q.front()<<endl;  // first element access
    q.pop();  // first element remove ho jaega (fifo principle)

    size = q.size();  // size pata chal jaega or kitne elements h queue me


    // Priority Queue ----------------------------------------------------------------------------------------------------------
    cout<<"\n\nPriority Queue\n";

    //  default priority queue jo hota h vo max heap hota h min heap banane ka alag tareeka hota h
    //  max heap means greatest element niklega aur min heap me minimum value milegi

    //  priority queue create krne ka tareeka
    priority_queue<int> pqmax;  // max heap
    priority_queue<int, vector<int> , greater<int>> pqmin;  // min heap

    pqmax.push(10);
    pqmax.push(20);
    pqmax.push(30);
    pqmax.push(40);

    cout<<pqmax.top()<<endl;  // max priority element return hoga , delete nh hoga sirf access hoga
    pqmax.pop();  // max priority element remove ho jaega

    size = pqmax.size();  // number of elements present in heap

    // same commands for pqmin i.e. minimum heap bas difference itna rahega ki isme minimum value milegi 


    // Set ----------------------------------------------------------------------------------------------------------
    cout<<"\n\nSet\n";

    set<int> st;
    // set me values repeat nh hoti h i.e. unique elements store krta h - agar 5 times 100 daal diya toh ek hi 100 present rahega
    // second thing modification nh hoti h isme
    // ya toh element insert krre ya fir delete 
    // and sorted order me elements return hote h (BST implementation hota set ka iss wajah se)

    // ek hota h Unordered set , unordered set aur set me difference ye hota h ki set slow hota h unordered set se
    // set is slower than unordered set 
    // and unordered set me elements random order me aate h sorted ya fir jis order me daale h usme nh

    st.insert(5);
    st.insert(10);
    st.insert(1);
    st.insert(4);
    st.insert(5);  // it will not be inserted since 5 is already present in set
    st.insert(2);
    // isme time complexity of insertion jo h vo O(log n) hoti h

    set<int>::iterator it = st.begin();
    it++;

    for(auto i: st){
        cout<<i<<" ";
    }cout<<endl;

    st.erase(it);  // like this u can erase elements from set, {1,2,4,5,10} -> it will delete 2 from this set

    for(auto i: st){
        cout<<i<<" ";
    }cout<<endl;

    cout<<st.count(-5)<<endl;  // count function batata h ki vo value present h ya nh 1 output means present h 0 means nh h

    set<int>::iterator itr = st.find(10);  // find function iterator return kr deta h uss value ke location ki
    // use find function only when you are sure that element is present and you want to place your iterator on that element
    // toh itr ab reference krra hoga value 5 ko check krne ke liye print krke dekhlo using *
    cout<<*itr<<endl;


    // Map ----------------------------------------------------------------------------------------------------------
    cout<<"\n\nMap\n";

    // it stores value in key value format and all keys will be unique and ek key ek hi value ko point kregi

    map<int,string> m;

    m[1]="shashvat";  // 1 is key and shashvat string is value
    m[13]="tarak";    // 13 is key and tarak string is value
    m[2]="chetan";    // 2 is key and chetan string is value
    m.insert({5,"bheem"});  // another way to insert in map

    // sorted order hota h map me store unordered map me random store hota h

    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<m.count(13)<<endl;  // key present h kya check krne ke liye count functio (1 -> yes , 0 -> no)

    m.erase(5);  //  key de kr erase kr sakte h
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto itrr = m.find(1);  // iterator ka reference de dega uss key ka [ again - only use when you know key is present]

    cout<<(*itrr).first<<" "<<(*itrr).second<<endl;







    //  Algorithms ------------------------------------------------------------------------------------------------------------------------
    cout<<"\n\nAlgorithms\n";


    vector<int> temp;

    temp.push_back(10);
    temp.push_back(3);
    temp.push_back(5);
    temp.push_back(77);
    temp.push_back(6);
    temp.push_back(10);

    cout<<"Binary Search\n";
    cout<<binary_search(temp.begin(),temp.end(),5);

    //  maximum minimum function hote h, to find max min between two elements
    cout<<max(10,5)<<endl;
    cout<<min(10,5)<<endl;

    //  swap function is there to values of two variables
    int x = 5;
    int y=10;
    swap(x,y);

    cout<<x<<" "<<y<<endl;

    // string reverse krne ke liye function h 
    string str = "abcde";
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    // rotating an array
    cout<<"before rotate : ";
    for(int i : temp ){
        cout<<i<<" ";
    }cout<<endl;

    rotate(temp.begin(),temp.begin()+2,temp.end());

    cout<<"after rotate : ";
    for(int i : temp ){
        cout<<i<<" ";
    }cout<<endl;

    // sorting array
    cout<<"\n\nSorting\n";

    sort(temp.begin(),temp.end());  // ye sort function 3 sorting algos me milke mana hua h jo h quick sort , heap sort and insertion sort

    for(int i : temp){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}