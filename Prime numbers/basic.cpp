#include<iostream>
#include<math.h>
using namespace std;

//Basic approach
bool isPrime(int n){
    int flag=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
return flag;
}

//Optimised approach with square root technique
bool isPrime2(int n){
    int flag=1;
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }


return flag;
}



// Reversing a number 
int reverseNum(int n){
    int reverse =0;
    while(n>0){
        int lastDigit =n%10;
        reverse = reverse*10+ lastDigit;
        n=n/10;
    }

return reverse;
}



int main(){

    // int n=1668349341;
    // cout<<(isPrime2(n)?"Prime ":"Not prime ");

    // int n=1234;
    // cout<<(reverseNum(n));

return 0;
} 