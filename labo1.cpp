#include <iostream>
using namespace std;

int main(){
    
    int a = 20;
    int k = 5;
    int j = 10;
    int m = k++ + (a*= 10) + --j;

    
    a*=10;
    cout << a<<endl;
    j-=1;
    cout << j<<endl;
    int m = a+k+j;
    cout << m<<endl;
    k+=1;
    cout << k<<endl;
    

    return 0;
}