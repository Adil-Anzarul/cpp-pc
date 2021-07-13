#include<iostream>
using namespace std;

int getBit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int setBit(int n,int pos)
{
    return (n | (1<<pos));
}

int clearBit(int n,int pos)
{
    int mask= ~(1<<pos);
    return (n & mask);
}

int updateBit(int n,int pos,int value)/*clearBit+setBit*/
{
    int mask=~(1<<pos);
    n=n & mask;
    return (n | (value<<pos));
}

int main()
{
    /*
         n=(5)10=(0101)2
     indexing-->> 3210
    */
    cout<<getBit(5,2)<<endl;

    /*
    setBit means put 1
    */
    cout<<setBit(5,1)<<endl;

    /*
    clearBit means put 0
    */
    cout<<clearBit(5,2)<<endl;


    cout<<updateBit(5,1,1)<<endl;
    return 0;
}