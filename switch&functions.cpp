#include <iostream>
using namespace std;

/*int main() {

    int a, b;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    char op;
    cout << "Enter operator (+, -, *, /): "<< endl;
    cin >> op;

    switch (op)
    {
    case +'+':
        cout << "Addition: " << a + b << endl;
        break;
    
    case '-':
        cout << "Subtraction: " << a - b << endl;
        break;

    case '*':
         cout << "Multiplication: " << a * b << endl;  

        break;
    
    case '/':
     cout << "Division: " << a / b << endl;
        break;

    default:
        cout << "Invalid operator!" << endl;
        break;
    }
}

int main(){
    int m;
    cout << "Enter the amount of money: ";

    cin >> m;
    int rs100=0, rs50=0, rs20=0, rs1=0;

switch (1)
    {
    case 1:
        rs100 = m /100;
        cout<< "Number of 100 rupee notes: " << rs100 << endl;
        m = m % 100;
    case 2:
        rs50 = m / 50;
        cout << "Number of 50 rupee notes: " << rs50 << endl;
        m = m % 50;
    case 3:
        rs20 = m / 20; 
        cout<< "Number of 20 rupee notes: " << rs20 << endl;
        m = m % 20;

    case 4:
        rs1 = m / 1; 
        cout << "Number of 1 rupee notes: " << rs1 << endl;
        break;
            
    default:
        cout << "Invalid amount!" << endl;
        break;
    }
return 0;

}
// Function to calculate power of a number
int power(int num1,int num2){
    int ans = 1;
    for (int i = 1;i<= num2; i++) {
        ans *= num1;
    }
    return ans;

}

int main(){
    int a,b;
    cin>>a>>b;

    int answer = power(a, b);
    cout << "The power of " << a << " raised to " << b << " is: " << answer << endl;
    return 0;
}*/

//function to calculate even or odd

bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cin>> num;

    int ans = isEven(num);

    if (isEven(num)){
        cout << num << " is even." << endl;
    }
    else
    {
        cout << num << " is odd." << endl;
    }
    return 0;
}
