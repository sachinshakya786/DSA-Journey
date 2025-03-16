#include<iostream>
#include<math.h>
using namespace std;
int decimaltobinary(int x)
{
    int i=0;
    int y=0;
    while(x!=0)
    {
        int ans=x%2;
        y=ans*pow(10,i++)+y;
        x=x/2;
    }
    return y;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter number = "<<endl;
    cin>>n;
    int binary = decimaltobinary(n);
    cout<<"Binary number = "<<binary<<endl;   
    return 0;
}
