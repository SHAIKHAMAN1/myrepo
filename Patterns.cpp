#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i*i<=n;++i){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void fbonacci(int n){
    int a = 0;
    int b = 1;
 cout<<a<<b;
for(int i=2;i<n;i++){
    int sum = a+b;
    cout<<sum;
     a = b;
     b = sum;
}
}

int main(){
   if(isPrime(9)){
    cout<<"Given no is prime";
   }
   else{
    cout<<"Given no is not Prime";
   }

   fbonacci(10);
   
}