#include <iostream>
#include<vector>
#include<string>
#include<bitset>
#include<cstring>
using namespace std;


int main()
{
    string a = "aaaaaaa";
    cout<<a.length()<<endl;
    cout<<a[5]<<endl;
    int ab[]={1,2,3,4,5};
    int *ip = ab;
    cout<<*ip+3<<endl;
    vector<int> test(10);
    vector<int>::iterator iter;

    for(vector<int>::iterator iter = test.begin(); iter!= test.end();++iter)
        *iter=0;
    for(vector<int>::const_iterator i=test.begin();i!=test.end();++i)
        cout << *i<< endl;
    int nSize = test.empty() ? -1 : static_cast<int>(test.size());
    cout<<nSize<<endl;
    cout<<"----vector is over----"<<endl;
    cout<<"---test part---"<<endl;

    return 0;
}
