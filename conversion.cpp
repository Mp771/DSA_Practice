#include<iostream>
#include<cmath>
using namespace std;


/*decimal to binary*/
int main(){
    int n;
    cin >> n;

    int i=0;
    int ans = 0;
    while(n != 0){
       
        int bit = n &1;


        ans= (bit* pow(10, i)) + ans;
        n= n>>1;
        i++;

    }
    cout<<"Answer is: " << ans << endl;
}

/*Binary to decimal*/
int main() {
    int n;
    cin >> n;

    int i = 0;
    int ans = 0;

    while (n!=0)
    {
        int digit = n % 10;

        if (digit==1)
        {
            ans = ans + (pow(2, i));
        }
        n= n / 10;
        i++;

    }
    cout << "Answer is: " << ans << endl;
} 
/*Reverse Integer*/
int main() {

    int n;
    cout << "Number: ";
    cin >> n;
    int ans = 0;
 
    while(n != 0 ){
        int digit = n % 10;

        if ((ans>INT_MAX/10 || (ans< INT_MIN/10))){
            cout << "0" << endl;
            return 0;
        }
       ans = (ans * 10 ) + digit;

        n = n / 10;
    } 
    cout << "Answer is: " << ans << endl;
}


/*complimentt base 10*/
int main(){
    int n;
    cin >> n;

    // Compute bitwise NOT of input, limited to its original bit-width
    int m = n;
    int mask = 0;

    if (m == 0) {
        cout << "1" << endl;
        return 0;
    }

    while (m !=0) {

        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout << ans << endl; 
    return 0;    
}
/*Power of Two */
int main(){
    int n;
    cin >> n;

    if (n < 0) {
        cout << "False" << endl;
        return 0;
    }
    
    for (int i = 0; i <= n; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
        {
            cout << "True" << endl;
            return 0;
        }
    }
    cout << "False" << endl;
    return 0;
}



