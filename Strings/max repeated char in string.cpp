#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){

    string str="abcacbade";
    int arr[26]={0};
    
    for(int i=0;i<str.length();i++){
        arr[str[i]-'a']++;
    }
    int maxf=arr[0];
    char ans='a';
    for(int i=0;i<26;i++){
        if(arr[i]>maxf){
            maxf=arr[i];
            ans=i+'a';
        }
    }
    cout<<"Maximum repeted outcome is "<<ans<<endl<<endl<<"repeating "<<maxf<<"times"<<endl;




return 0;
}