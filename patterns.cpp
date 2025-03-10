#include<iostream>
using namespace std;



// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 1
n=5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/


void pattern1(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}




// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 2
n=5
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/


void pattern2(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}



// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 3
n=5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/


void pattern3(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 4
n=5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/


void pattern4(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 5
n=5
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

*/


void pattern5(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 6
n=3
1 2 3
4 5 6
7 8 9

*/


void pattern6(){

    int n;
    cin>>n;
    int t=1;

    for(int i=1;i<=n;i++){
        for(int j=n;j>0;j--){
            cout<<t++<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 7
n=4
*
* *
* * *
* * * *

*/


void pattern7(){

    int n;
    cin>>n;
    int t=1;

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 8
n=4
1
2 2
3 3 3
4 4 4 4

*/


void pattern8(){

    int n;
    cin>>n;
    int t=1;

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 9
n=4
1
2 3
4 5 6
7 8 9 10

*/


void pattern9(){

    int n;
    cin>>n;
    int t=1;

    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<t++<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 10
n=4
1
2 3
3 4 5
4 5 6 7

*/


void pattern10(){

    int n;
    cin>>n;
    int t=1;

    for(int i=1;i<=n;i++){
        t=i;
        for(int j=0;j<i;j++){
            cout<<t++<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 11
n=4
1
2 1
3 2 1
4 3 2 1

*/


void pattern11(){

    int n;
    cin>>n;
    int t=1;

    for(int i=1;i<=n;i++){
        t=i;
        for(int j=0;j<i;j++){
            cout<<t--<<" ";
        }
        cout<<endl;
    }

}



// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 12
n=4
A A A A
B B B B
C C C C
D D D D

*/


void pattern12(){

    int n;
    cin>>n;
    char t = 'A';

    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<t<<" ";
        }
        t++;
        cout<<endl;
    }

}



// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 13
n=4
A B C D
A B C D
A B C D
A B C D

*/


void pattern13(){

    int n;
    cin>>n;
    char t = 'A';

    for(int i=1;i<=n;i++){
        t='A';
        for(int j=0;j<n;j++){
            cout<<t++<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 14
n=4
A B C D
E F G H
I J K L
M N O P

*/


void pattern14(){

    int n;
    cin>>n;
    char t = 'A';

    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<t++<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 15
n=4
A B C D
B C D E
C D E F
D E F G

*/


void pattern15(){

    int n;
    cin>>n;
    char t = 'A';

    for(int i=0;i<n;i++){
        t='A'+i;
        for(int j=0;j<n;j++){
            cout<<t++<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 16
n=4
A
B B
C C C
D D D D

*/


void pattern16(){

    int n;
    cin>>n;
    char t = 'A';

    for(int i=1;i<=n;i++){
        t='A'+i-1;
        for(int j=0;j<i;j++){
            cout<<t<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 18
n=4
A
B C
C D E
D E F G

*/


void pattern18(){

    int n;
    cin>>n;
    char t = 'A';

    for(int i=1;i<=n;i++){
        t='A'+i-1;
        for(int j=0;j<i;j++){
            cout<<t++<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 19
n=4
D
C D
B C D
A B C D

*/


void pattern19(){

    int n;
    cin>>n;
    char t = 'A';

    for(int i=n;i>0;i--){
        t='A'+i-1;
        for(int j=n;j>=i;j--){
            cout<<t++<<" ";
        }
        cout<<endl;
    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 20
n=4
      *
    * *
  * * *
* * * *

*/


void pattern20(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=n;j>i+1;j--){
            cout<<"  ";
        }

        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;


    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 21
n=4
* * * *
  * * *
    * *
      *

*/


void pattern21(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }

        for(int j=i;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;


    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 22
n=4
* * * *
* * *
* *
*

*/


void pattern22(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        for(int j=i;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;


    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 23
n=4
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/


void pattern23(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        for(int j=n;j>i+1;j--){
            cout<<"  ";
        }

        for(int j=0;j<=i;j++){
            cout<<(j+1)<<" ";
        }

        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }

        cout<<endl;


    }

}


// -----------------------------------------------------------------------------------------------------------------
/*

Pattern - 24
n=5
1 2 3 4 5 5 4 3 2 1
1 2 3 4     4 3 2 1
1 2 3         3 2 1
1 2             2 1
1                 1

*/


void pattern24(){

    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        for(int j=1;j<=n-i;j++){
            cout<<j<<" ";
        }

        for(int j=0;j<2*i;j++){
            cout<<"  ";
        }

        for(int j=n-i;j>0;j--){
            cout<<j<<" ";
        }

        cout<<endl;
    }

}







int main(){

    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    // pattern5();
    // pattern6();
    // pattern7();
    // pattern8();
    // pattern9();
    // pattern10();
    // pattern11();
    // pattern13();
    // pattern14();
    // pattern15();
    // pattern16();
    // pattern17();
    // pattern18();
    // pattern19();
    // pattern20();
    // pattern21();
    // pattern22();
    // pattern23();
    pattern24();

}