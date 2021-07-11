#include<iostream>
using namespace std;

string rev(string n)
{
   string nx="";
   for(int i=n.length()-1;i>=0;i--)
   {
       nx=nx+n[i];
   }

    return nx;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    
    string ans="";
    int flag=0;
    int previous_carry=0;
    while(n1>0 || n2>0)
    {
        if((n1%2)==0 && (n2%2==0))
        {
            
            if(previous_carry==0)
            {
                ans=ans+to_string(0);
                previous_carry=0;
            }
            else if(previous_carry==1)
            {
                ans=ans+to_string(1);
                previous_carry=0;
            }
        }

        if((n1%2)==1 && (n2%2==1))
        {
            if(previous_carry==0)
            {
                ans=ans+to_string(0);
                previous_carry=1;
            }
            else if(previous_carry==1)
            {
                ans=ans+to_string(1);
                previous_carry=1;
            }
        }

        if((n1%2)==1 && (n2%2==0) || ((n1%2)==0 && (n2%2==1)))
        {
            if(previous_carry==0)
            {
                ans=ans+to_string(1);
                previous_carry=0;
            }
            else if(previous_carry==1)
            {
                ans=ans+to_string(0);
                previous_carry=1;
            }
        }
      n1/=10;
      n2/=10;  
    }

    while(n1>0)
    {
        if(n1%2==0)
        {
            if(previous_carry==1)
            {
                ans=ans+to_string(1);
                previous_carry=0;
            }
            else if(previous_carry==0)
            {
                ans=ans+to_string(0);
            }
        }

        if(n1%2==1)
        {
            if(previous_carry==1)
            {
                ans=ans+to_string(0);
                previous_carry=1;
            }
            else if(previous_carry==0)
            {
                ans=ans+to_string(1);
                
            }
        }
        n1/=10;
    }

    while(n2>0)
    {
        if(n2%2==0)
        {
            if(previous_carry==1)
            {
                ans=ans+to_string(1);
                previous_carry=0;
            }
            else if(previous_carry==0)
            {
                ans=ans+to_string(0);

            }
        }

        if(n2%2==1)
        {
            if(previous_carry==1)
            {
                ans=ans+to_string(0);
                previous_carry=1;
            }
            else if(previous_carry==0)
            {
                ans=ans+to_string(1);
                
            }
        }
        n2/=10;
    }

    if(previous_carry==1)
    {
        ans=ans+to_string(1);
        previous_carry=0;
    }

    
    ans=rev(ans);
    
    cout<<ans<<endl;
    return 0;
}


/*

#include<iostream>
using namespace std;

int rev(int n)
{
    int reverse=0;
    while(n)
    {
        reverse=reverse*10+(n%10);
        n/=10;
    }
    return reverse;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    
    int ans=0;
    int flag=0;
    int previous_carry=0;
    while(n1>0 || n2>0)
    {
        if((n1%2)==0 && (n2%2==0))
        {
            
            if(previous_carry==0)
            {
                ans=ans*10+0;
                previous_carry=0;
            }
            else if(previous_carry==1)
            {
                ans=ans*10+1;
                previous_carry=0;
            }
        }

        if((n1%2)==1 && (n2%2==1))
        {
            if(previous_carry==0)
            {
                ans=ans*10+0;
                previous_carry=1;
            }
            else if(previous_carry==1)
            {
                ans=ans*10+1;
                previous_carry=1;
            }
        }

        if((n1%2)==1 && (n2%2==0) || ((n1%2)==0 && (n2%2==1)))
        {
            if(previous_carry==0)
            {
                ans=ans*10+1;
                previous_carry=0;
            }
            else if(previous_carry==1)
            {
                ans=ans*10+0;
                previous_carry=1;
            }
        }
      n1/=10;
      n2/=10;  
    }

    while(n1>0)
    {
        if(n1%2==0)
        {
            if(previous_carry==1)
            {
                ans=ans*10+1;
                previous_carry=0;
            }
            else if(previous_carry==0)
            {
                ans=ans*10+0;

            }
        }

        if(n1%2==1)
        {
            if(previous_carry==1)
            {
                ans=ans*10+0;
                previous_carry=1;
            }
            else if(previous_carry==0)
            {
                ans=ans*10+1;
                
            }
        }
        n1/=10;
    }

    while(n2>0)
    {
        if(n2%2==0)
        {
            if(previous_carry==1)
            {
                ans=ans*10+1;
                previous_carry=0;
            }
            else if(previous_carry==0)
            {
                ans=ans*10+0;

            }
        }

        if(n2%2==1)
        {
            if(previous_carry==1)
            {
                ans=ans*10+0;
                previous_carry=1;
            }
            else if(previous_carry==0)
            {
                ans=ans*10+1;
                
            }
        }
        n2/=10;
    }

    if(previous_carry==1)
    {
        ans=ans*10+1;
        previous_carry=0;
    }

    
    ans=rev(ans);
    
    cout<<ans<<endl;
    return 0;
}


*/