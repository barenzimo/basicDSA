#include<iostream>
using namespace std;

// function to check if a given number is power of 2
bool isPower2(int n){
    return (n&& !(n & n-1));
}




//function to count the number of ones in a given number

int countOnes(int n){
    int count=0;
    
    while(n){
        n=n&n-1;
        count++;
    }


return count;
}



// function to display all subsets of a particular set

int displaySets(int arr[], int n){

    for(int i=0;i< (1<<n); i++){                        //Loop for all possible numbers of subsets
        for(int j=0;j<n;j++){                           //Loop for all positions to get 1 inside each number
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
            
        }
        cout<<endl;


    }
}





int main(){
// cout<<isPower2(26);
// cout<<countOnes(26);

int arr[4]= {1,2,3,4};
cout<< displaySets(arr,4);

return 0; 
}