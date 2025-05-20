#include<iostream>
using namespace std;

/*int main() {

    int a =4;
    int b = 6;

   cout<<" a&b "<< (a&b) << endl ;
    cout<<" a|b "<< (a|b) << endl ;
    cout<<" a^b "<< (a^b) << endl ; 
    cout<<" ~a "<< ~a << endl ;
    cout<<" ~b "<< ~b << endl ;

    cout<< (17>>1) << endl ; 
    cout<< (17>>2) << endl ;
    cout<< (19<<1) << endl ;
    cout<< (21<<2) << endl ;
}*/

int main (){
    int i= 7;
    cout<< (++i) << endl ; // pre increment
    cout<< (i++) << endl ; // post increment    
    cout<< (i--) << endl ; // pre decrement
    cout<< (--i) << endl ; // post decrement
}

int main()
{
    int a, b =1;
    a =10;
    if (++a)
     cout<<b;
    else
        cout<<++b;
}
 
int main(){
    int a = 1;
    int b = 2;

    if (a-- > 0 && ++b > 2){
        cout<<"Stage 1-Inside if " ;
    } else{
        cout<<"stage 2 - Inside Else";}
    cout<<a << " " << b << endl;
}

int main(){
    int number = 3;
    cout<< (25*(++number)) << endl ;
}

int main(){
    int a = 1;
    int b = a++;
    int c = ++a;
    cout<< b<<endl;
    cout<< c;
}*/

/*#For Loop*/

int main(){
    int n;
    cou<<"Enter value of n"<< endl;
    cin>>n;

    cout<<"Print count from 1 to n "<< endl;
    for(int i = 0;i<=n,i++){
        cout<< i << endl;        
    }
    
}

int main(){
    int m;
    cout<<"Enter value of m"<< endl;


    cout<<"Print count from m to 1 "<< endl;
  
    for(int a = 0,b=1; a>= 0 && b>=1; a--,b--){
        cout<< a<< " " << b << endl;        
    }
}

 /*#sum of upto n numbers*/
int main(){
    int n;
    cout<<"Enter value of n"<< endl;
    cin>>n;

    int sum = 0;
    
    for(int i = 1; i <= n; i++){
        sum += i;        
    }
    cout<< "Sum of first " << n << " numbers is " << sum << endl;
}

/*#Fibonacci Series */
int main(){
    int n= 10;

    int a =0;
    int b = 1;
    cout<< a << " " << b << " " ; 
    for (int i = 1; i <=n; i++)
    {
        int nextnumber= a + b;
        cout<< nextnumber << " " ;

        a=b;
        b= nextnumber;
    }
    
}



 



 
