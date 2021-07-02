#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<fstream>
#include<cstring>
#include<conio.h>

using namespace std;

struct student{
string sfname,smname,slname;
string rollno;
string branch;
string pnumber;

}student[60];

int main()
{
    cout<<"=====================SCHOOL MANAGEMENT SUSTEM================="<<endl;

    int i=0,j,k;
    int choice;
    string srch,f;
    cout<<endl;
    cout<<"=======student information system=============="<<endl;
    do{
    cout<<"enter your choice\n1=create new data for student\n2=find and display data of student\n3=exit the program"<<endl;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {

            ofstream f1("student.txt",ios::app);
            char ch='y';
            for(i=0;ch!='n';i++){
              if(ch=='y'){
                 cout<<"\nEnter First name: \n";
                 cin>>student[i].sfname;
                 cout<<"Enter middle name \n";
                 cin>>student[i].smname;
                 cout<<"Enter Last name: \n";
                 cin>>student[i].slname;
                 cout<<"Enter roll  number of student : \n";
                 cin>>student[i].rollno;
                 cout<<"Enter student branch: \n";
                 cin>>student[i].branch;
                 cout<<"enter phone number\n";
                 cin>>student[i].pnumber;
                 cout<<"\npress y for continue or n for exit"<<endl;
                 cin>>ch;
                 f1<<student[i].sfname<<endl<<student[i].smname<<endl<<student[i].slname<<endl<<student[i].rollno<<endl<<student[i].branch<<endl<<student[i].pnumber<<endl;
            }
            }
            f1.close();
        }
        continue;
    case 2:
        {
            ifstream f2("student.txt");
            cout<<"enter roll number to find information of a student\n";
            cin>>f;
            int flag=0;
             for( j=0;(j<i)||(!f2.eof());j++)
             {

                getline(f2,student[j].rollno);

                if(student[j].rollno==f)
                   {                       flag = 1;
     getline(f2,student[j].sfname);
  cout<<"First name: "<<student[j].sfname<<endl;
   getline(f2,student[j].smname);
  cout<<"middle name "<<student[j].smname<<endl;
   getline(f2,student[j].slname);
  cout<<"Last name: "<<student[j].slname<<endl;
  break;
                     }

             }

if(flag == 0){

cout<<"No Record Found"<<endl;
}
f2.close();
        }
    }
continue;
    }while(choice!=3);

return 0;
}

