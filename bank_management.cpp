#include<iostream>
#include<cmath>

using namespace std;
void dest();
int cal_distance(int ,int);//calculate the distance from starting point to destination
void dest_code(int m);
void Report();
void change_des();
void mod();
void delete_user();
void change_station();
void tabular_format();
void create();//registor the user and give the prepaid
//int check(int n,int t,int);///check the seat size number
void paid(int price,int key);//payment transaction takes place
void receipt(int n,int m,int t,float tax,float price);//Give receipt for the user
void last_point();//It display the lasting  point
void prepaid();//Give  the perpaid Card to the user
void station();//It display the starting point
int check();//It check the seat for one bus is avalable;
int counter=0;//It count the customer that have been registor
void seat_Arangment();//To arrange every seat for each bus
string direction[20]={"N","NE","NW","E","S","SE","SW","W"};//It is the direction of the location of starting to destioation
int degree[5][5]={{25,45,65,75,90},{110,125,145,165,180},{134,65,120,34,50},
{32,12,34,54,565},{32,34,54,56,123}};//The degree that each starting point to each destination
  string code_bus[3]={"A","B","C"};//To defferinciate the Bud code
   string crime[20]={"abebe kebede","abel kebed","jafar husen","lawrence jhon ",
   "ismael abera","birhanu alemu","kebede chukala","hawe dawit","dory gana","chris mack","charles evans",
   "israel tewdro","Kirubel seifu","esubalew abebe","Asabu mogese","dagim moges","boru biratu","jerard  jigsaw",
   "keti wondewson","biscute dagim"};
    int age_crime[20]={32,34,45,21,65,36,37,24,26,75,57,63,24,28,32,67,87,89,78,32};

int des_code=1000;//The destination code for each bus

int seat=100;
int v;//the count the number which take the same bus and leaving time
 struct acount
  {
 int acount_num;
  float balance;
 }acount_user[100];
//This structure store the destination name, Km from addiss,the destination bus code,bus id
  struct destination{
    string name[5];
    float KM[5];
    string bus_id[10];
    int bus_des_code[5];
    int seat_place[5][2];
};
//This structure store the customer name, age,balance
struct customer{
  string name;
  int age;
  int acount_num;
  int balance;
  float tax_payment;//The tax payment for the service
  float price;
  int ends;
  int start;
  int times;

//This structure store thd starting place, Km from addis,seat number, time of bus leaving,reservation
struct ticket{
string start[5];
float Km_addis[5];

string time[2];
string reservation[3];
}start_bus={{"Bahirdar","Somlia","Afar","Sidama","Guji"},{150,320,300,210,200},{"12:00am","6:00pm"},
{"seat reserved","No seat avalability","No ticket for underage 15,have a nice day"}};
destination des={{"Jimma","Adama","Mekele","Gonder","Hawassa"},{430,100,540,350,250}};
};


customer user[500];

string*ptr=user[counter].des.name;
string*ptr2=user[counter].start_bus.start;
customer*pttr=user;
void conversion()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<2;j++)
        {

        user[counter].des.bus_id[j]=to_string(user[counter].des.bus_des_code[i]) + code_bus[j];
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<user[counter].des.bus_id[i]<<endl;
    }
}
void criminality(string name,int age)
{


    for(int i=0;i<20;i++)
    {
        if(name==crime[i]&&(age==age_crime[i]))
        {
            cout<<"Sorry we are not give a service Today,good day"<<endl;
            exit('a');
        }
    }
}
void paid(int price,int key)
{
    label:
    int pass,account;
    cout<<"Enter your unique key :"<<endl;
    cin>>pass;
    if(pass==key)
    {
    cout<<"Welcome to  the transportation service "<<endl;
    cout<<"Do you like to continue y/n "<<endl;
             int total_price=acount_user[counter].balance-price;
             cout<<"Than for your using us: "<<endl;


    }

    else{

        cout<<"\nTry again"<<endl;
        goto label;
    }
}
void station()
{
    string*starting_point=user[counter].start_bus.start;

    cout<<"Starting points: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<i+1<<"."<<*(starting_point+i)<<endl;

    }
}
void last_point()
{
    string*last=user[counter].des.name;

    cout<<"destination points: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<i+1<<"."<<*(last+i)<<endl;

    }
}
void perpaid(int n,int pass_code)
{
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"      Perpaid Card    "<<endl;
    cout<<"Name\tAge\tBalance\tYour pass code"<<endl;
    cout<<user[n].name<<"  "<<user[n].age<<"\t"<<user[n].balance<<"\t   "<<pass_code<<endl<<endl;
    cout<<"  Thanks for using this company  "<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
}

void create()
{
    int price,unique_key,seat;
    unique_key=100+rand()%2000;
    cout<<"--Enter the information bellow to register--&--to active your perpaid Car"<<endl;
    cout<<"-->Name: ";getline(cin,user[counter].name);
    cout<<"-->Age: ";cin>>user[counter].age;
    cout<<"-->Enter Balance: ";cin>>user[counter].balance;
    criminality( user[counter].name, user[counter].age);
     if(user[counter].age<15)
        {cout<<user[counter].start_bus.reservation[2];
        exit('0');
        }
        label:
     char choice;
     cout<<" -------------------------------- "<<endl;
     cout<<"| Would You like to continue: Y/N|"<<endl;
     cout<<" -------------------------------- "<<endl;
     cin>>choice;
     system("cls");
     if(choice=='Y'|| choice=='y')
        perpaid(counter,unique_key);
     else if(choice=='N'||choice=='n')
             cout<<"Thanks for using; good day "<<endl;
     else
     {
        cout<<"Wrong input "<<endl;
        goto label;
     }

     cout<<" ------------------------"<<endl;
     cout<<"|Fill Bellow Information |"<<endl;
     cout<<" ------------------------ "<<endl<<endl;
     cout<<"-----choose the starting point bellow---- "<<endl;
    cout<<"->1.Bahirdar\n->2.Somalia\n->3.Afar\n->4.Sidama\n->5.Guji"<<endl;
    cin>>user[counter].start;
    cout<<"------Choose the destination bellow------"<<endl;
    cout<<"->1.Jimma\n->2.Adamma\n->3.Mekele\n->4.Gonder\n->5.hawassa"<<endl;
    cin>>user[counter].ends;

    dest_code(user[counter].ends);
    int dis=cal_distance(user[counter].start,user[counter].ends);
       price=dis*10;
    user[counter].tax_payment=dis*(15)/100;
    user[counter].price=price+user[counter].tax_payment;
    dest_code(user[counter].ends);
    cout<<"The distance from "<<user[counter].start_bus.start[user[counter].start-1]<<" to "
        <<user[counter].des.name[user[counter].ends-1]<<" is "<<dis<<endl;
    cout<<"\nChoose time to leave\n1,12:00am:\n2,6:00pm ";cin>>user[counter].times;

    dest_code(user[counter].ends);
    for(int i=0;i<5;i++)
    seat_Arangment();
    int w=check();
    seat=user[counter].des.seat_place[user[counter].start][user[counter].ends]-w;
    system("cls");
    cout<<"Your unique key "<<unique_key<<endl;
    cout<<"Seat "<<seat<<endl;
    cout<<"\nThe price for the travel is: "<<user[counter].price<<endl;
    paid(user[counter].price,unique_key);
    user[counter].des.seat_place[user[counter].ends][user[counter].times]=100;
     cout<<"your bus code is: "<<user[counter].des.bus_des_code[user[counter].ends-1]<<code_bus[user[counter].times-1]
         <<"\nStarting your time "<<user[counter].start_bus.time[user[counter].times-1]<<endl;
    cout<<"\nYour seat place is "<<seat<<endl;
     system("cls");
    receipt(user[counter].start,user[counter].ends,user[counter].times,user[counter].tax_payment,price);
      int x;

    counter++;



}
void receipt(int n,int m,int t ,float tax,float price)
{
    float dis=cal_distance(n,m);

    cout<<"-------------------receipt----------------"<<endl;
    cout<<"Name: "<<user[counter].name<<"|"<<endl;
    cout<<"start point "<<user[counter].start_bus.start[n-1]<<"->destination point "<<user[counter].des.name[m-1]<<endl;
    cout<<"Seat: "<<user[counter].des.seat_place[m-1][t-1]<<""<<endl;
    cout<<"Price: "<<user[counter].price<<""<<endl;
    cout<<"Bus Destination Code: "<<user[counter].des.bus_des_code[m-1]<<"   Bus_ID: "
        <<user[counter].des.bus_des_code[m-1]<<code_bus[t-1]<<"   Leaaving time: "<<user[counter].start_bus.time[t-1]<<endl;
    cout<<"Distance: "<<dis<<endl;
    cout<<"Tax payment: "<<tax<<endl;
    cout<<"The price is :"<<price<<endl;
    cout<<"Total price is: "<<tax+price<<endl;
    cout<<"--------------THANKS FOR COMING-----------"<<endl;

}
 int cal_distance(int n,int m)
 {
     int i=n-1;
     int j=m-1;
     float R=sqrt(pow(user[counter].des.KM[i],2)-
                  (2*(user[counter].des.KM[i]*user[counter].start_bus.Km_addis[j])*int(cos(degree[i][j])))+
                  pow(user[counter].start_bus.Km_addis[j],2));
     return R;
 }
 void bus_info()
 {
     cout<<"Destination\tBus code\t Bus_Id(Time of leaving)"<<endl;
     for(int i=0;i<5;i++)
     {
    cout<<user[counter].des.name[i]<<"\t       "<<des_code+i<<"\t"<<des_code+i<<code_bus[0]<<"("
        <<user[counter].start_bus.time[0]<<")"<<"   and     "<<des_code<<code_bus[1]<<"("
        <<user[counter].start_bus.time[1]<<")"<<endl;
     }
 }



 void info()
 {
     int choose;
     cout<<"Choose the bellow information to know"<<endl;
     cout<<"1.Station point\n2.Destination place\n3.Bus info"<<endl;
     cin>>choose;
     switch(choose)
     {
     case 1:
         station();
         break;
     case 2:
        last_point();
         break;
     case 3:
        bus_info();


     }
 }
void dest_code(int m)
{

        user[counter].des.name[m-1];
        user[counter].des.bus_des_code[m-1]=des_code+(m-1);

}

void seat_Arangment()
{
    for(int i=0;i<5;i++)
    {
     for(int j=0;j<2;j++)
        {
    user[counter].des.seat_place[i][j]=100;
       }
    }
}
int check()
{

  for(int i=0;i<counter;i++)
    {
        if(counter>0)
        {
        if((user[counter].des.bus_des_code==user[counter-i].des.bus_des_code)&&
           (user[counter].start_bus.time==user[counter-i].start_bus.time))
        {

            v++;

        }
         }
         else
         {
             v=0;
         }
}
return v;
}
void report()
{
    cout<<"Starting_point\t    Destination\t    Bus code\t Bus_Id(Time of leaving)"<<endl;
     for(int i=0;i<5;i++)
     {
    cout<<user[counter].start_bus.start[i]<<"\t    "<<user[counter].des.name[i]<<"\t       "
        <<des_code+i<<"\t"<<des_code+i<<code_bus[0]<<"("<<user[counter].start_bus.time[0]<<")"<<"   and     "
        <<des_code<<code_bus[1]<<"("<<user[counter].start_bus.time[1]<<")"<<endl;
     }
}
void display_Crimal()
{
    cout<<"-------------------------------------------"<<endl;
    cout<<"----------MOST WANTED FUGITIVRES-----------"<<endl;
    cout<<"_______________________"<<endl;
    cout<<"|NAME\t\t   AGE"<<"|"<<endl;
    for(int i=0;i<20;i++)
    {
      cout<<"|"<<crime[i]<<"\t    "<<age_crime[i]<<"|"<<endl;
    }
    cout<<"_______________________"<<endl;

}

void customers()
{
       int choice,exit;



         cout<<"__________________________"<<endl;
    cout<<"|Choose the bellow option:| "<<endl;
    cout<<"|1.Register               |\n|2.Information            |\n|4.To exit                |"<<endl;
    cout<<"---------------------------"<<endl;
    cin>>choice;
    cin.ignore();
    exit=choice;
    switch(choice)
    {
case 1:
    create();
    break;
case 2:
    info();
case 4:
    exit=0;




}
}
void admin()
{
    string pass,user;
    string username="jima";
    string password="0000";
     cout<<"Enter the username: ";cin>>user;
     cout<<"Enter passcode: ";cin>>pass;
     if((user==username)&&(password==pass))
        {
            cout<<"Welcome to bus manegment system "<<endl;
            cout<<"Choose the bellow option "<<endl;
            cout<<"[1].Full Report on the bus system\n[2].To modify \n[3].Fugitives(Most Wanted people's name)\n[4].List all in tabular format"<<endl;
            int choice;
            cin>>choice;
            system("cls");
            switch(choice)
            {
            case 1:
                report();
                break;
            case 2:
                mod();
                break;
            case 3:
                display_Crimal();
                break;
            case 4:
                tabular_format();
            }
        }
}
void mod()
{
    system("cls");

    int choose;
     cout<<"                                                                                        Bus Management System "<<endl<<endl;
    cout<<" --------------------------------- "<<endl;
    cout<<"|Choose the bellow option to modify| "<<endl;
    cout<<"|1.Change the destination           |"<<endl;
    cout<<"|2.Change the station point         | "<<endl;
    cout<<"|3.Delete the user account             |"<<endl;
    cout<<" ----------------------------------- "<<endl;
    cin>>choose;
    switch(choose)
    {
    case 1:
        change_des();
        break;
    case 2:
        change_station();
        break;
    case 3:
         delete_user();
        break;
        }
}
void delete_user()
{
    string name;
    cout<<"                                                                                        Bus Management System "<<endl;
    cout<<"Enter the name the user to be deleted "<<endl;
    cin.ignore();
    getline(cin,name);
    int n=500;
    for(int i=0;i<counter;i++)
    {

        if(name==user[i].name)
        {
             n-=1;
           for(int j=i;j<n;j++)
           {
               user[j]=user[j+1];
           }
        }
    }



}
void tabular_format()
{
    cout<<"-------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Name\tAge\tStation\tDestination\tDestination_code\tBus_code\tTime_of_leaving"<<endl;
    for(int i=0;i<counter;i++)
    {
    cout<<user[i].name<<"   "<<user[i].age<<"\t       "<<user[i].start_bus.start[(user[i].start)-1]<<"       "
        <<user[i].des.name[(user[i].ends)-1]<<"      "<<user[i].des.bus_des_code[(user[i].ends)-1]<<"         "
        <<user[i].des.bus_des_code[(user[i].ends)-1]<<code_bus[user[i].times-1]<<"          "
        <<user[i].start_bus.time[(user[i].times)-1]<<endl;
    }

}
void change_des()
{
    int num;
    cout<<"To modify the last point "<<endl;
    cout<<"Choose the destination to be changed "<<endl;
     last_point();
    cin>>num;
    cout<<"Update the destination "<<*(ptr+(num-1))<<endl;
    cin>>*(ptr+(num-1));
    cout<<user[counter].des.name[num-1];


}
void change_station()
{
    int num;
    cout<<"To modify the last point "<<endl;
    cout<<"Choose the station to be changed "<<endl;
     station();
    cin>>num;
    cout<<"Update the destination "<<*(ptr2+(num-1))<<endl;
    cin>>*(ptr2+(num-1));
    cout<<user[counter].start_bus.start[num-1];


}


int main()
{

    int choose;
do{
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"                    | Choose the bellow option |"<<endl;
    cout<<"                    |                          |"<<endl;
    cout<<"                    | [1].Customer               |\n \t\t    | [2].Adimn                  |\n \t\t    |[0].To exit             |"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    cin>>choose;

    switch(choose)
    {
    case 1:
        customers();
        break;
    case 2:
       admin();
    case 0:
        exit;

    }

}while(choose!=0);
}
