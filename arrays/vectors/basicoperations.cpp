#include<iostream>
#include<vector>


using namespace std;

int main()

{


    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    vector<int> v(size);


    cout<<"The size of the vector is "<<v.size()<<endl;
    cout<<"The capacity of vector is:"<<v.capacity()<<endl;

    v.push_back(5);
    
    cout<<"The size of the vector is "<<v.size()<<endl;
    cout<<"The capacity of vector is:"<<v.capacity()<<endl;

    v.resize(5);
    cout<<"The size of the vector is "<<v.size()<<endl;
    cout<<"The capacity of vector is:"<<v.capacity()<<endl;

    v.push_back(6);
    v.push_back(5);


    cout<<"The size of the vector is "<<v.size()<<endl;
    cout<<"The capacity of vector is:"<<v.capacity()<<endl;

     v.resize(10);

     
    cout<<"The size of the vector is "<<v.size()<<endl;
    cout<<"The capacity of vector is:"<<v.capacity()<<endl;


    v.insert(v.begin()+3,7);

    
    cout<<"The size of the vector is "<<v.size()<<endl;
    cout<<"The capacity of vector is:"<<v.capacity()<<endl;

    v.pop_back();
    
    cout<<"The size of the vector is "<<v.size()<<endl;
    cout<<"The capacity of vector is:"<<v.capacity()<<endl;


    v.erase(v.end()-2);

    
    cout<<"The size of the vector is "<<v.size()<<endl;
    cout<<"The capacity of vector is:"<<v.capacity()<<endl;


    


    return 0;
}
