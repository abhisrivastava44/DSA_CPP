// METHOD 1

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     vector <int> v;
    
//     int n;
//     cout<<"enter the size of vector: ";
//     cin>>n;

//     cout<<"enter the elements: ";
//     for(int i=0; i<n; i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }

//     cout<<endl;

//     sort(v.begin(),v.end());

//     for(int i=0; i<n; i++)
//     {
//         cout<<v[i]<<" "; 
//     }

// }


//METHOD 2

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     vector <int> v;
    
//     int n;
//     cout<<"enter the size of vector: ";
//     cin>>n;

//     cout<<"enter the elements: ";
//     for(int i=0; i<n; i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }

//     cout<<endl;

//     int numberOfZeores=0;
//     int numberOfOnes=0;

//     for(int i=0; i<n; i++)
//     {
//         if( v[i]== 0)   numberOfZeores++;
//         else   numberOfOnes++;
            
//     }

//     for(int i=0; i<n; i++)
//     {
//         if(i<numberOfZeores)    v[i]=0;
//         else  v[i]=1;
//     }

//     for(int i=0; i<n; i++)
//         cout<<v[i]<<" ";
    
// }

//METHOD 3

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> v;
    
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;

    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<endl;

    int i=0,j=n-1;

    while(i<j)
    {
        if( v[i]==0 )   i++;
        if( v[j]==1 )   j--;
        if(i>j)  break;

        if( v[i]==1 && v[j]==0)
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }

    }

    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    
}





    
