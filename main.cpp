//task_3
//TIC-TAC-TOE GAME
#include <iostream>
#include <cstring>
using namespace std;
string array={'1','2','3','4','5','6','7','8','9'};
 void display(){
 cout<<"\n";
    cout<<"\t\t|\t\t|\t\t"<<endl;
    cout << "\t"<<array[0] << "\t|\t"<<array[1]<<"\t|\t"<<array[2]<<endl;
    cout<<"     _________________________________________ "<<endl;
    cout<<"\t\t|\t\t|\t\t"<<endl;
    cout << "\t"<<array[3] << "\t|\t"<<array[4]<<"\t|\t"<<array[5]<<endl;
    cout<<"     _________________________________________ "<<endl;
    cout<<"\t\t|\t\t|\t\t"<<endl;
    cout << "\t"<<array[6] << "\t|\t"<<array[7]<<"\t|\t"<<array[8]<<endl;

 }
int win(){

if((array[0]==array[1]&&array[1]==array[2]) || (array[3]==array[4]&&array[4]==array[5]) || (array[6]==array[7]&&array[8]==array[7]) || (array[0]==array[3]&&array[3]==array[6]) || (array[1]==array[4]&&array[4]==array[7]) || (array[2]==array[5]&&array[5]==array[8]) || (array[0]==array[4]&&array[4]==array[8]) || (array[2]==array[4]&&array[4]==array[6]))
{

 return 1;
}
else
{
return 0;
}
}
int main()

{
    jump:
    string player_1;
    string player_2;
    cout<<"Enter name of player_1"<<endl;
    cin>>player_1;
    cout<<"Enter name of player_2"<<endl;
    cin>>player_2;


     cout<<"Which player want to take O : "<<player_1<< " or " <<player_2<<endl;
string o;
string x;
cin>>o;
cout<<"Which player want to take X : "<<player_1<< " or " <<player_2<<endl;
cin>>x;
     display();
    int i=1;
    int j;

    while(i<=9)
    {
        if(i%2==0)
        {
        cout<<o<<"'s turn"<<endl;
        cin>>j;
        array[j-1]='O';
        display();
        i++;
        if (win())
           {
             cout<<o<<" is the winner"<<endl;
            break; }
        }
       else {
        cout<<x<<"'s turn"<<endl;
        cin>>j;
        array[j-1]='X';
        display();

        i++;
        if(win())
           {

           cout<<x<<" is the winner"<<endl;
            break; }

        }

     }

     if (! win())
     {
         cout<<"Its a draw!"<<endl;
     }
     string again;
     cout<<"Do you want to play again\n Enter y/n"<<endl;
     cin>>again;
     if (again=="y" || again=="Y")
     {
        array={'1','2','3','4','5','6','7','8','9'};
        goto jump;
     }

    return 0;
}
