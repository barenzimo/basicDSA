#include<iostream>
using namespace std;

int euclidGCD(int a , int b){
  int rem;
     while(b!=0){
         rem=a%b;
         a=b;
         b=rem;
    }

return a;        

}


int main(){
    int a=42, b=24;
    cout<< euclidGCD(a,b);

return 0;
} 