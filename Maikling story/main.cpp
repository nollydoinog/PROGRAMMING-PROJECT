/*
*Text based game, Reading game.
*Rampage Group
*Nolly D. Doinog
*Johndell S. Kitts
*Bonifacio D. Derobles
*Ma. Andrea Perido
*BSCOE 2-1D
*/

#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

using namespace std;

bool p1,p2,p3;
bool t1,t2,t3;
bool sc1,sc2,sc3,sc4;
void pp1();
void pp2();
void talk();
void menu();
void place();
void lunch();
void demo();
int hp, money, strenght;
string user, name;


int main()
{
    sc1=1;
    sc2=0;
    sc3=0;
    sc4=0;
    p1=0;
    p2=0;
    p3=0;
    t1=0;
    t2=0;
    t3=0;
    hp=0;
    money=0;
    strenght=0;
    //the main menu
    cout<<"The forbidden criminal"<<endl<<"Select difficulty:"<<endl<<"[1]Easy\t[2]Medium\t[3]Hard"<<endl;
    cin>>user;
    //difficulties condition
    //easy
    if(user=="1")
    {
        hp=10;
        money=1000;
        strenght=5;
    }
    //medium
    if(user=="2")
    {
        hp=5;
        money=600;
        strenght=3;
    }
    //hard
    if(user=="3")
    {
        hp=3;
        money=300;
        strenght=1;
    }
    while(user!="Q"||user!="q")
    {
        user="";
        menu();
    }
    return 0;
}
//the menu where it shown the user their hp, money and strenght
    void menu()
    {
        system("cls");
        cout<<"You have "<<hp<<"hp and "<<money<<"$ and "<<strenght<<" strenght"<<endl;
        cout<<"You wish to escape this prison, what do you want to do?"<<endl<<"[1]Go to any places\t[2]Wait for lunch"<<endl;
        cin>>user;
        if(user=="1")
        {
            place();
        }
        if(user=="2")
        {
            lunch();
        }
    }
    //places where the user can go
    void place()
    {
        system("cls");
        //if user have a reason to go to other place
        if((p1==1)||(p2==1)||(p3==1))
        {
            if(p1==1)
            {
                cout<<"[1]LolotiangePlace";
            }
            if(p2==1)
            {
                cout<<"[2]Main Exit";
            }
            cout<<endl;
            cin>>user;
            if((p1==1)&&(user=="1"))
            {
                pp1();
            }
            else if((p2==1)&&(user=="2"))
            {
                pp2();
            }
        }
        //if user haven't met any req'ments to go to other place
        else
        {
            cout<<"You have nowhere place to go [type anything] to go back"<<endl;
            cin>>user;
            if(user=="1")
            {
                menu();
            }
        }
    }
    //this is for lunch
    void lunch()
    {
        system("cls");
        //for the first scenario of the game
        if(sc1==1)
        {
            cout<<"While you are eating, theres a man who come near by you and give you a paper"<<endl;
            cout<<"When you read the paper there's written in it"<<endl;
            cout<<"We know you and we can help you, go to LolotiangePlace"<<endl;
            cout<<"If you have time come visit our place"<<endl;
            cout<<"You finished reading and you don't have any idea who is this"<<endl;
            cout<<"You heard the bell rang sign that you need to go back to cell[type anything]"<<endl;
            cin>>user;
            if(user=="1")
            {
                sc1=false;
                sc2=true;
                p1=true;
                menu();
            }
            while(user!="1")
            {
                sc1=false;
                sc2=true;
                p1=true;
                menu();
            }
        }
        //normal happening without scenario
        cout<<"There's a many prisoners eating right now, there's nothing new"<<endl;
        cout<<"[1] Finish Eating"<<endl;
        cin>>user;
        if(user=="1")
        {
            menu();
        }
        while(user!="1")
        {
            cout<<"*munch munch munch*[1] finish eating"<<endl;
            cin>>user;
        }
    }
void pp1()
{
    system("cls");
    if(sc2==1)
    {
        cout<<"you saw many big prisoners there with many tatoos"<<endl;
        system("pause");
        system("cls");
        cout<<"So many smoked around someone has hit you because he is hurrying up"<<endl;
        system("pause");
        system("cls");
        cout<<"You see a man last time that give you the letter"<<endl;
        cout<<"He said, 'follow me'"<<endl;
        cout<<"after a seconds ago"<<endl;
        system("pause");
        system("cls");
        cout<<"Theres a man in front of you saying, 'So you are?'"<<endl;
        cout<<"Type your name -> ";
        cin>>name;
        cout<<"I see "<<name<<" you want to escape this prison right?"<<endl;
        cout<<"Yes I do-you"<<endl;
        cout<<"For your family right?"<<endl;
        system("pause");
        system("cls");
        cout<<"WAIT WHO THE FUCK ARE YOU?!-you"<<endl;
        cout<<"Come see me at the main exit we will give you the key of your cell"<<endl;
        cout<<"DON'T TURN YOUR BACK AT ME! DO YOU KNOW WHAT HAPPENED TO MY FAMILY!?-you"<<endl;
        system("pause");
        system("cls");
        cout<<"Then what will you if I do?"<<endl;
        cout<<"[1]punch him\t[2]Ignore him"<<endl;
        cin>>user;
        if(user=="1")
        {
            cout<<"You punched him right to the face and someone help him"<<endl;
            cout<<"He suddenly stopped his comrades and throw you out to the place and steal some of your money."<<endl;
            system("pause");
            hp=hp-2;
            money=money-200;
            strenght=strenght+1;
            sc2=0;
            sc3=1;
            p2=1;
            menu();
        }
        if(user=="2")
        {
            cout<<"You ignore this prison, you know doing something bad will make your situation worst"<<endl;
            system("pause");
            sc2=0;
            sc4=1;
            p2=1;
            menu();
        }
    }
    cout<<"You dont have anything to do here"<<endl;
    system("pause");
    menu();
}
void pp2()
{
    if(sc3==1)
    {
        cout<<"So "<<name<<" are you ready to escape this prison?"<<endl;
        cout<<"Be ready comrades!"<<endl;
        cout<<"Let me know your name -you"<<endl;
        cout<<"My name is JomelAzo"<<endl;
        cout<<"How did you know me? -you"<<endl;
        cout<<"lets tackle that about later"<<endl;
        system("pause");
        system("cls");
        cout<<"The main door is open and an alarmed has been alarming policemens"<<endl;
        cout<<"We need to hurry! -you"<<endl;
        cout<<"*You here gunshots*"<<endl;
        cout<<"That's a gunshot! Let's hurry"<<endl;
        system("pause");
        system("cls");
        cout<<"When you are about to escape"<<endl;
        system("pause");
        system("cls");
        cout<<"You here someone whispered you"<<endl;
        system("pause");
        system("cls");
        cout<<"'I'll never forget that punch'"<<endl;
        system("pause");
        system("cls");
        cout<<"And pushed you back to the prison"<<endl;
        cout<<"You were been caught by the policemen"<<endl;
        cout<<"And you can't help but watch JomelAzo escape with his comrade"<<endl;
        system("pause");
        system("cls");
        cout<<"You promised yourself that you will revenge to him"<<endl;
        system("cls");
        cout<<"You promised yourself that you will revenge to him"<<endl;
        system("cls");
        cout<<"You promised yourself that you will revenge to him"<<endl;
        system("cls");
        cout<<"You promised yourself that you will revenge to him"<<endl;
        system("cls");
        system("pause");
        system("cls");
        demo();
    }
    if(sc4==1)
    {
        cout<<"So "<<name<<" are you ready to escape this prison?"<<endl;
        cout<<"Be ready comrades!"<<endl;
        cout<<"Let me know your name -you"<<endl;
        cout<<"My name is JomelAzo"<<endl;
        cout<<"How did you know me? -you"<<endl;
        cout<<"lets tackle that about later"<<endl;
        system("pause");
        system("cls");
        cout<<"The alarmed has been on and JomelAzo helped you to go first"<<endl;
        cout<<"You, JomelAzo and some of his comrades escaped"<<endl;
        cout<<"You lost the policemen in the forest"<<endl;
        system("pause");
        system("cls");
        cout<<"You and your comrades rest in the some part of forest"<<endl;
        cout<<"You woke up with the policemen in your front with a gun"<<endl;
        cout<<"You noticed that JomelAzo has gone"<<endl;
        cout<<"You didn't know what happened to him"<<endl;
        system("pause");
        system("cls");
        cout<<"But you'll make sure you'll know someday"<<endl;
        system("pause");
        system("cls");
        demo();
    }
}
void demo()
{
    cout<<"THANK YOU FOR PLAYING 'THE FORBIDDEN CRIMINAL' THIS WAS ONLY DEMO GAME OF THE GROUP RAMPAGE"<<endl;
    cout<<"WE WILL LOOK FORWARD TO FINISH THIS GAME"<<endl;
    cout<<"AND WITH THE GRAPHICS THANK YOU AND HAVE FUN"<<endl;
    system("pause");
    system("cls");
    main();
}
