//Author: Draxille
#include <iostream>
using namespace std;
int main()
{
    int T,N,Xmax,Xmin,error=0,x,y;
    cin >> T;

    int Scount[T][2];
    for (int i=1;i<=T;i++)
        {
            Scount[i-1][0]=0;
            Scount[i-1][1]=0;
            cin>>N>>Xmin>>Xmax;

            int neuron[N][2];
            for (int k=1;k<=N;k++)
            {
                cin>>neuron[(k-1)][0]>>neuron[(k-1)][1];

            }
            for (int j=Xmin;j<=Xmax;j++)
            {
                x=j;
                for(int l=1;l<=N;l++)
                {
                    y=(neuron[l-1][0]*x)+neuron[l-1][1];
                    x=y;
                }
                if (x%2==0)
                    {Scount[i-1][0]++;}
                else if(x%2==1)
                    {Scount[i-1][1]++;}


            }

        }
        cout<<endl;
        for (int m=1;m<=T;m++)
                cout<<Scount[m-1][0]<<"   "<<Scount[m-1][1]<<endl;
        return 0;
}
