#include<iostream>
using namespace std;
bool getBit(int n, int pos){
    return ((n&(1<<pos))!=0);
}
bool setBit(int n, int pos){
    return (n|(1<<pos));
}
//Printing a unique number among an array containing twice eqaual number with one as exeption
int unique(int arr[], int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}



//Printing two unique among a set of twice repeated numbers

int unique2(int arr[], int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }  
    int tempxor=xorsum;
    int newxor=0;
    int pos=0;
    int setBit=0;

    while(setBit!=1){
        setBit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;
    }

    for(int i=0;i<n;i++){
        if(getBit(arr[i],pos-1))
            newxor=newxor^arr[i];
        
    }
    
   cout<<newxor<< endl;
   cout<<(tempxor^newxor)<<endl;
}



// Printing a unique number from an array of triplets

int unique3(int arr[], int n){
    int result=0;
    for(int i=0;i<64;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            if(getBit(arr[j], i))
            sum++;
        }
       if(sum% 3!= 0)
            result=setBit(result,i);
    }



return result;
}


int main(){
    // int arr[]={1,2,3,4,1,2,3};
    // cout<< unique2(arr,7)<<endl;
    // int arr[]={2,4,6,7,4,5,6,2};
    // unique2(arr,8);
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    cout << unique(arr, 10) << endl;
    
    


return 0;

}