

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        int x,y;
        cin>>x>>y;
        string str;
        cin>>str;
        int q = 0;
        int w = str.length();
        int pre = 'I';
        for(int j=0;j<w;j++)
        {
            if(str[j]=='C')
            {
                if(pre=='J')
                {
                    q+=y;
                }
                pre='C';
            }
            else if(str[j]=='J')
            {
                if(pre=='C')
                {
                    q+=x;
                }
                pre ='J';
            }
            else
            {

            }
        }
        cout<<"Case #"<<i<<": "<<q<<endl;
    }
}
