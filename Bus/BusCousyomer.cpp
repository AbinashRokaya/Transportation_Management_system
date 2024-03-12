#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
class Customer
{
    private:
    string Bus_Name;
    int Bus_No,sit_NO;
    vector<int>No;
    string name;
    int select;
    fstream file;
    public:
    void BooK();
}c;
int main()
{
    
    int choice;
    cout<<"------------------Choose the Option------------"<<endl;
    cout<<"1 for book"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            c.BooK();
        break;
        default:
        cout<<"Invalid Input";
        break;
    }

}
void Customer::BooK()
{

    cout<<"Enter a name:";
    cin>>name;
    ifstream file("Bus.txt");
    file>>Bus_Name>>Bus_No>>sit_NO;
    cout<<"Bus name:"<<Bus_Name<<endl<<"Bus no:"<<Bus_No<<endl<<"sit no:"<<sit_NO<<endl;
    
    
    
  
for(int j=0;j<sit_NO;j++)
       {
        No.push_back(j+1);
       }
       for(int j=0;j<sit_NO;j++)
       {
        
            if((j)%4==0)
            {

             cout<<endl;
            }
        else
        cout<<"\t";
        file>>No[j];
       cout<<No[j];
       }
    cout<<endl;
    
    
    cout<<"Select the ticket number:";
    cin>>select;
  
        No.insert(No.begin()+select-1,0);
    
       
       for(int j=0;j<sit_NO;j++)
       {
        
            if((j)%4==0)
            {
             cout<<endl;
            }
        else
        cout<<"\t";
        file>>No[j];
       cout<<No[j];
       }

    

    
file.close();
}
