#include<iostream>
#include<vector>
#include<fstream>
#define N 100
using namespace std;
class Bus
{
    private:
    string Bus_Name;
    int Bus_No;
    int Cavi_No;
    int sit_NO;
    vector<int>No;
    int Num[N];
    fstream file;
    public:
     void Bus_information();
     void Bus_Show();

}b;
int main()
{
    
    int option;
    cout<<"----------Enter a option--------";
    cout<<"1 for Input"<<endl;
    cout<<"2 for Output"<<endl;
    cin>>option;
    switch (option)
    {
    case 1:
        b.Bus_information();
        break;
    case 2:
        b.Bus_Show();
        break;
    default:
        cout<<"Invalid input:";
        break;
    }
    
    
    return 0;

}
void Bus::Bus_information()
{
    int a;

    cout<<"Enter the order of buses:";
    cin>>a;
    for(int i=0; i<a;i++)
    {

    cout<<"Bus Order: "<<a<<endl;
    cout<<"Enter a bus name:";
    cin>>Bus_Name;
    cout<<"Bus Number:";
    cin>>Bus_No;
    cout<<"Sit No: ";
    cin>>sit_NO;
   
    ofstream file("Bus.txt",ios::app);
        file<<endl<<Bus_Name<<endl;
        file<<Bus_No<<endl;
        file<<sit_NO<<endl;
       for(int j=0;j<sit_NO;j++)
       {
        No.push_back(j+1);
       }
       for(int j=0;j<sit_NO;j++)
       {
        
            if((j)%4==0)
            {
             file<<endl;

            }
        
        else
        file<<"\t";
       file<<No[j];
       }
    }
    file.close();
   

}
void Bus::Bus_Show()
{
    int c;
    ifstream file("Bus.txt");
    //getline(file,Bus_Name);
    //getline(file,Bus_No);
    file>>Bus_Name>>Bus_No>>sit_NO;
    cout<<"Bus name:"<<Bus_Name<<"Bus no:"<<Bus_No<<"sit no:"<<sit_NO;
    
    
    
  
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

    
file.close();

   
}