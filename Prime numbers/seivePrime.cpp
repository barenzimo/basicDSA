#include<iostream>
using namespace std;

//////////////////////////////Best approach for returning all prime numbers before that element O(nlog(logn))
void primeSeive(int n){
    int prime[100]={0};
    //Marking of elements of array
    for(int i=2; i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }

    }

    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}


////////////////////////////////  Printing all prime factors of a number
void primeFactorSeive(int n){
    //setting spf array to set spf of all numbers using seive
    int spf[100]={0};

    for(int i=2;i<=n;i++)
            spf[i]=i;

    for(int i=2;i<=n;i++){
        if(spf[i]==i){

           for(int j=i*i;j<=n;j+=i){
               if(spf[j]==j)
               spf[j]=i;
           }
        }
    }






    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}



int main(){
    int n=20;
    primeFactorSeive(n);



return 0;
} 