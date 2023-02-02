#include<iostream>
using namespace std;
int main()
{
    int quant ;
    int choice ;
    // quantity
    int Qrooms = 0,Qburger = 0,Qpasta = 0,Qshake = 0,Qchicken = 0,Qnoodles = 0;
    // sold 
    int Srooms = 0,Sburger = 0,Spasta = 0,Sshake = 0,Schicken = 0,Snoodles = 0;
    // total
    int Total_rooms = 0,Total_burger = 0,Total_pasta = 0,Total_shake = 0,Total_chicken = 0,Total_noodles = 0;

    cout<<"\n \t Quantity of items we have ";
    cout<<"\n \n Rooms Available ";
    cin>>Qrooms;
    cout<<"\n Quantity of Burger ";
    cin>>Qburger;
    cout<<"\n Quantity of Pasta ";
    cin>>Qpasta;
    cout<<"\n Quantity of Shake ";
    cin>>Qshake;
    cout<<"\n Quantity of Chicken-Rolls ";
    cin>>Qchicken;
    cout<<"\n Quantity of Noodles ";
    cin>>Qnoodles;

    m:
    cout<<"\n \t \t \t Please Select from the menu option ";
    cout<<"\n \n1) Rooms ";
    cout<<"\n \n2) Burger ";
    cout<<"\n \n3) Pasta ";
    cout<<"\n \n4) Shake ";
    cout<<"\n \n5) Chicken-Rolls ";
    cout<<"\n \n6) Noodles ";
    cout<<"\n \n7) Information Regarding Sales and collection ";
    cout<<"\n \n8) Exit ";

    cout<<"\n \n Please Enter Your Choice !! ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n \n Enter the number of rooms you want ";
        cin>>quant;
        if (Qrooms-Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + 1200*quant;
            cout<<"\n\n\t\t "<<quant<<" room/rooms have been alloted to you !";
        }
        else
            cout<<"\n\n\t\t Only "<<Qrooms-Srooms<<" rooms available in Hotel ";
        break;

        case 2:
        cout<<"\n \n Enter Burger Quantity ";
        cin>>quant;
        if (Qburger-Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + 120*quant;
            cout<<"\n\n\t\t "<<quant<<" Burger is the order ";
        }
        else
            cout<<"\n\n\t\t Only "<<Qburger-Sburger<<" Burger Remaining in Hotel ";
        break;

        case 3:
        cout<<"\n \n Enter Pasta Quantity ";
        cin>>quant;
        if (Qpasta-Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + 250*quant;
            cout<<"\n\n\t\t "<<quant<<" Pasta is the order ";
        }
        else
            cout<<"\n\n\t\t Only "<<Qpasta-Spasta<<" Pasta Remaining in Hotel ";
        break;

        case 4:
        cout<<"\n \n Enter Shake Quantity ";
        cin>>quant;
        if (Qshake-Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + 120*quant;
            cout<<"\n\n\t\t "<<quant<<" Shake is the order ";
        }
        else
            cout<<"\n\n\t\t Only "<<Qshake-Sshake<<" Shake Remaining in Hotel ";
        break;

        case 5:
        cout<<"\n \n Enter Chicken-Rolls Quantity ";
        cin>>quant;
        if (Qchicken-Schicken >= quant)
        {
            Schicken = Schicken + quant;
            Total_chicken = Total_chicken + 250*quant;
            cout<<"\n\n\t\t "<<quant<<" Chicken-Rolls is the order ";
        }
        else
            cout<<"\n\n\t\t Only "<<Qchicken-Schicken<<" Chicken-Rolls Remaining in Hotel ";
        break;

        case 6:
        cout<<"\n \n Enter Noodles Quantity ";
        cin>>quant;
        if (Qnoodles-Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + 150*quant;
            cout<<"\n\n\t\t "<<quant<<" Noodles is the order ";
        }
        else
            cout<<"\n\n\t\t Only "<<Qburger-Sburger<<" Noodles Remaining in Hotel ";
        break;

        case 7:
        cout<<"\n\t\t Deatils of Sales and Collection ";
        cout<<"\n\n Number of rooms we had "<<Qrooms;
        cout<<"\n\n Number of rooms on rent "<<Srooms;
        cout<<"\n\n Remaining Rooms: "<<Qrooms-Srooms;
        cout<<"Total room collection of the day "<<Total_rooms;

        cout<<"\n\n Number of Burger we had "<<Qburger;
        cout<<"\n\n Number of Burger we sold "<<Sburger;
        cout<<"\n\n Remaining Burger: "<<Qburger-Sburger;
        cout<<"\n\n Total Burger collection of the day "<<Total_burger;

        cout<<"\n\n Number of Pasta we had "<<Qpasta;
        cout<<"\n\n Number of Pasta we sold "<<Spasta;
        cout<<"\n\n Remaining Pasta: "<<Qpasta-Spasta;
        cout<<"Total Pasta collection of the day "<<Total_pasta;

        cout<<"\n\n Number of Shake we had "<<Qshake;
        cout<<"\n\n Number of Shake we sold "<<Sshake;
        cout<<"\n\n Remaining Shake: "<<Qshake-Sshake;
        cout<<"Total Shake collection of the day "<<Total_shake;

        cout<<"\n\n Number of Chicken-Rolls we had "<<Qchicken;
        cout<<"\n\n Number of Chicken-Rolls we sold "<<Schicken;
        cout<<"\n\n Remaining Chicken-Rolls: "<<Qchicken-Schicken;
        cout<<"Total Chicken-Roll collection of the day "<<Total_chicken;

        cout<<"\n\n Number of Noodles we had "<<Qnoodles;
        cout<<"\n\n Number of Noodles we sold "<<Snoodles;
        cout<<"\n\n Remaining Noodles: "<<Qnoodles-Snoodles;
        cout<<"\n\nTotal Noodles collection of the day "<<Total_noodles;

        case 8:
            exit(0);

    default:
        cout<<"\nPlease Select the numbers mentioned above! ";
        break;
    }
    goto m;


}