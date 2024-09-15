#include<iostream>
using namespace std;

int linearsearch(const int a[],int size,int key)
{
    
   for(int i=0;i<=size;i++)
   {
       if(a[i]==key)
       {
         return i;//if element is found
       }
   }

  return -1;//is element is not found
}
int main()
{
    
    int size;
         cout<<"enter the size of array:"<<endl;
         cin>>size;

    int a[size];
          cout<<"Enter the element of array"<<endl;
    for(int i=0;i<=size;i++)
    {
       
       cin>>a[i];

    }

    
    int key;
           cout<<"Enter Element To Find"<<endl;
           cin>>key;


  int result=linearsearch(a,size,key);

         if(result!=-1)
         {
            cout<<"The index is found at Position:"<<result<<endl;
         }

         else{

            cout<<"The Element is Not Found:"<<endl;
         }


         return 0;
}



