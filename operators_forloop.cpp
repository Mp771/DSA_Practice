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

/*Prime no. with For Loop*/
int main(){
    int n;
    cout<<"Enter value of n"<< endl;
    cin>>n;

    bool isPrime = 1 ;

    for (int i = 2; i<n; i++)
    {
        if (n%i==0)
        {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime==0)
    {
        cout<< n << " is not a prime number" << endl;
    }
    else
    {
        cout<< n << " is a prime number" << endl;
    }

        
    }
    
/*Use of Continue- skips the next iteration */

int main(){

   for (int i = 0; i < 5; i++)
   {
    cout<< "hii" << endl;
    cout<< "hello" << endl;
    continue;
    
    cout<< "reply" << endl;
   }
    
}
/*q1*/
int main(){
    for (int i = 0; i <=5; i++)
    {
        cout<< i << " " ;
        i++;
    }
    
} /*Ans- 0 2 4*/ 

/*q2*/
int main(){
    for (int i = 0; i <=5; i--)
    {
        cout<< i << " " ;
        i++;
    }
    
} /*Ans- infinte loop 0 */

/*q3*/
int main(){
    for (int i = 0; i <=5; i+=2)
    {
        cout<< i << " " ;
        
        if (i&1)
        {
            continue;
        }
        i++;
    }
    
} /*Ans - 0 3 5*/
/*q4*/

int main(){
    for (int i = 0; i < 5; i++)
    {
        for ( int j= 1; j <=5; j++)
        {
            cout<< i << " " << j << endl;
        }
        
    }
    
} /*Ans- inner loop runs 5 times with same value of outer loop for 5 times each*/

/*q5*/
int main(){
    for (int i = 0; i < 5; i++)
    {
        for ( int j= i; j <=5; j++)
        {
        if(i+j == 10){
            break;
        }
            cout<< i << " " << j << endl;
             
    }
}
}
#include<iostream>
#include <cstdint>
using namespace std;
/*subtract the product and sum of digits of an integer
class Solution{
    public:
    int subtractProductAndSum(int n){
        int prod = 1;
        int sum = 0;

        while (n!=0)
        {
            int digit = n%10;
            prod= prod * digit;
            sum = sum+ digit;
            n = n/10;
        }
        return prod - sum;
    }
};

int main() {
    Solution sol;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int result = sol.subtractProductAndSum(n);
    std::cout << "Product minus sum of digits: " << result << std::endl;
    return 0;
}*/

/* Check no. of 1 bit */
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;

        while (n != 0) {
            if (n&1){
                count++; 
            }
            n= n >> 1; 
        }
        return count;
    }
};

int main() {
    Solution sol;
    uint32_t n;
    cout << "Enter a number: ";
    cin >> n;
    int result = sol.hammingWeight(n);
    cout << "Number of 1 bits: " << result << endl;
    return 0;
}




 



 





 



 



 
