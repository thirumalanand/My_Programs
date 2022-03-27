#include<bits/stdc++.h>
using namespace std;

class oil
{
    public:

        string name;
        int pack;
        char category;
        float cost;
        float qty;
    
    // oil(string name,int pack,char category,float cost,float qty)
    // {

    // }
    void calculatebill()
    {
        int bill;
        bill= ((qty*1000)/pack)*cost;
        cout<<"Oil cost: "<<bill;
    }

};

int main()
{
    string name;
    cout<<"Enter Oil Name: ";
    getline(cin,name);
    int pack;
    cout<<"Enter Pack: ";
    cin>>pack;
    char category;
    cout<<"Enter Category: ";
    cin>>category;
    float cost;
    cout<<"Enter cost: ";
    cin>>cost;
    float qty;
    cout<<"Enter qty: ";
    cin>>qty;

    oil o;
    o.name=name;
    o.pack=pack;
    o.category=category;
    o.cost=cost;
    o.qty=qty;
    o.calculatebill();
    return 0;
}