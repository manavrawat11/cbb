#include<iostream>
using namespace std;
int main()
   {
    int n,i,j;
    cout<<"Input the number upto:";
    cin>>n;
    cout<<"Multiplication table from 1 to "<<n<<endl;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<j<<"x"<<i<<"="<<j*i<<" ";
        }
        cout<<endl;
    }
    cout<<"*************************************************************************************"<<endl;
    cout<<"Program prepared & execute by:Manav rawat, CSE3(N), class roll no. 48"<<endl;
    cout<<"*************************************************************************************";
}
