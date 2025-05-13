#include <iostream>
using namespace std ;

   /*pattern 1 */ 
int main (){    
int n;
    cin>> n;

    int i = 1;

    while (i<=n)
    {
        int j =1;
        while (j<=n)
        {
            cout<< j ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }}
 /*pattern 2 */ 
int main(){
    int n;
    cin>> n;

    int i = 1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<< n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }}
/*pattern 3*/ 
int main(){
    int n;
    cin>> n;

    int i = 1;
    int count = 1;

    while (i<=n)
    {
        int j =1;
        while (j<=n)
        {
            cout<< count << " " ;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }}
/*pattern 4*/ 
int main(){
    int n;
    cin >> n;

    int row = 1;

    while (row<=n) {

        int col = 1;
        while (col<=row) {

            cout<< "*";

            col=col+1;
        }

        cout<<endl;
        
        row=row+1;
        
    }
}
/*pattern 5*/ 
 int main(){
    int n  ;
    cin>> n;

    int row=1 ;
    while (row<=n)
    {
        int col = 1;
        while (col<= row)
        {
            cout<< row<< " " ;
            col = col + 1;
        }
        cout<< endl;
        row = row +1;
    }
    
 }
/*pattern 6*/ 
int main(){
    int n;
    cin>> n;
    int count = 1;
    int row = 1 ;

    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {
            cout<< count <<" " ;
            count= count + 1;
            col = col + 1;
        }
        cout<< endl;
        row = row +1;        
    }
  }
/*pattern 7*/ 
int main(){
int n;
cin>>n;

int i =1;
while (i<=n)
{
    int j = 1;
    while (j<=i)
    {
        cout<< (i-j+1)<< " ";
        j=j+1;
           
    }
    cout<< endl;
    i = i+1;
}

}
/*pattern 8*/ 
int main(){
    int n;
    cin>> n;
    int row =  1 ;

    while (row<=n)
    {
        int col = 1;
        while (col<=n)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            col= col +1 ;

        }
        cout<< endl;
        row = row +1; 
    }
    
}
/*pattern 9*/ 
int main(){\

    int n ;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A' + j -1 ;
            cout<< ch;
            j = j + 1 ;

        }
        cout<< endl;
        i = i + 1 ;
    }
    
}
/*pattern 10*/ 
int main(){

    int n;
    cin>> n;

    int row=1 ;
    char start = 'A';
    while (row<=n)
    {
        int col = 1;
        
        while (col<=n)
        {
            
            cout<< start; 
            start=start+1;
            col = col + 1;        
        }
        cout << endl;
        row =  row + 1 ;
    }
    

}
/*pattern 11*/ 
int main(){
    int n ;
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A' + i +j - 2;
                cout << ch ;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

}

/*pattern 12*/ 
int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
        char ch = 'A' + i - 1;
        cout << ch;
        j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    
}
/*pattern 13*/ 
 int main(){
    int n;
    cin >> n;

    int i = 1;
    char value = 'A';
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout << value;
            value = value + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
 }
/*pattern 14*/ 
 int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
/*pattern 15*/
int main(){
    int n;
    cin >> n;

    int i = 1;
   
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
         char ch = 'A' + i + j - 2;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
 }
/*pattern 16*/
 int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        char start = 'A' + n - i;
        while (j<=i)
        {
            cout << start;
            start = start + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
/*pattern 17*/

int main(){

    int n;
    cin >> n;

    int i = 1;

    while (i<=n){

        int space = n - i;
        while (space) {
            cout<<" ";
            space = space - 1;
        }
        int j = 1;
        while (j<=i){
            cout<< "*";
            j = j + 1;
        }
        cout<< endl;
        i = i + 1;
    }
}
/*pattern 18*/

int main(){

    int n;
    cin >> n;

    int i = 1;
    while (i<=n){
        int star = n - i + 1;
        int j = 1;
        while (j<=star){
            cout<< "*";
            j=j+1;
        }
        cout<< endl;
        i=i+1;
    }
} 
