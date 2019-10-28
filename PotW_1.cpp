//Author: Draxille
#include <iostream>
using namespace std;
int main()
{
    int T,N,Xmax,Xmin,error=0,x,y;
    cin >> T;
    while ((T<1)&&(T>10))
    {
        cout<<"Error: input (T) out of range\nInput must range from 1 to 10\nRe-enter input:";
        cin>> T;
    }
    int Scount[T][2];
    for (int i=1;i<=T;i++)
        {
            Scount[i-1][0]=0;
            Scount[i-1][1]=0;
            cin>>N>>Xmin>>Xmax;
            while ((N<1)&&(N>100000))
            {
                cout<<"Error: input (N) out of range\nInput must range from 1 to 10^5\nRe-enter input:";
                cin>>N;
            }


            while ((Xmin<1)&&(Xmin>1000000000))
            {
                cout<<"Error: input (min. number) out of range\nInput must range from 1 to 10^9\nRe-enter input:";
                cin>>Xmin;
            }

            while ((Xmax<1)&&(Xmax>1000000000))
            {
                cout<<"Error: input (max. number) out of range\nInput must range from 1 to 10^9\nRe-enter input:";
                cin>>Xmax;
            }
            int neuron[N][2];
            for (int k=1;k<=N;k++)
            {
                cin>>neuron[(k-1)][0]>>neuron[(k-1)][1];
                while (neuron[(k-1)][0]<1)
                {
                   cout<<"Error: input (weight) out of range\nInput must be greater than 0\nRe-enter input:";
                   cin>>neuron[(k-1)][0];
                }
                while (neuron[(k-1)][1]>1000000000)
                {
                  cout<<"Error: input (bias) out of range\nInput must be less or equal to 10^9\nRe-enter input:";
                    cin>>neuron[(k-1)][1];
                }
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
        for (int m=1;m<=T;m++)
                cout<<Scount[m-1][0]<<"   "<<Scount[m-1][1]<<endl;
        return 0;
}
