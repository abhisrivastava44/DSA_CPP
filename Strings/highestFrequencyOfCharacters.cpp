#include<iostream>
#include<vector>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    // string str="physicswallah";

    // int max=0;
    // for(int i=0; i<str.length(); i++)
    // {
    //     char ch=str[i];
    //     int count=1;
    //     for(int j=i+1; j<str.length(); j++)
    //     {
    //         if(str[j]==str[i])      count++;
    //         if(count>max)       max=count;
    //     }   
    // }

    // cout<<"maximum occurence is  "<<max<<" times"<<endl;

      
      
    // for(int i=0; i<str.length(); i++)
    // {
    //     char ch=str[i];
    //     int count=1;
    //     for(int j=i+1; j<str.length(); j++)
    //     {
    //         if(str[j]==str[i])      count++;
            
    //     }   

    //     if(count==max)       cout<<ch<<"="<<max<<endl;
    // }

   string str="leetcode";
   vector<int> v(26,0);
   for(int i=0; i<str.length(); i++)
   {
    char ch=str[i];
    int ascii=(int)ch;
    v[ascii-97]++;
   }

   int max=0;
   for(int i=0; i<26; i++)
   {
    if(v[i]>max)    max=v[i];
   }

   for(int i=0; i<26; i++)
   {
    if(v[i]==max)
    {
        int ascii=i+97;
        char ch=(char)ascii;
        cout<<ch<<" "<<max<<endl;
    }
   }
  
   
       



}