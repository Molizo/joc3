#include <iostream>
#include <fstream>

using namespace std;
ifstream in("joc3.in");
ofstream out("joc3.out");

int r[100000],b[100000];

int main()
{int saritura=0,pos_r=1,pos_b=1,nr,ritm_r,ritm_b,liber=0;
    cin>>nr>>ritm_b>>ritm_r;
    r[1]=1;
    b[1]=1;
    while(true)
    {
        pos_b+=ritm_r;
        pos_r-=ritm_b;
        if(pos_b>nr)
            pos_b-=nr;
        if(pos_r<1)
            pos_r+=nr;
        saritura++;
        if(pos_b==pos_r)
            break;
        if(r[pos_r]==0)
            r[pos_r]=1;
        else
        {
            if(b[pos_b]==0)
                b[pos_b]=1;
            break;
        }
        if(b[pos_b]==0)
            b[pos_b]=1;
        else
        {
            if(r[pos_r]==0)
                r[pos_r]=1;
            break;
        }

    }
    for(int i=1;i<=nr;i++)
        if(r[i]==0 && b[i]==0)
            liber++;
    cout<<liber<<" "<<saritura<<" "<<pos_r<<" "<<pos_b;
    return 0;
}
