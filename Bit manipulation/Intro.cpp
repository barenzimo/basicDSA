#include<iostream>
using namespace std;

int GetBit(int bit, int pos){
    return (bit&&(1<<pos)!=0);
}
int SetBit(int bit, int pos){
    return (bit|(1<<pos));
}
int ClearBit(int num, int pos){
    int mask=~(1<<pos);
    return num&mask;
}
int UpdateBit(int num, int pos, int value){
    int mask = ~(1<<pos);
    num=num&mask;
    return (num|(value<<pos));
}

int main(){

cout<<UpdateBit(5,0,0);


return 0; 
}