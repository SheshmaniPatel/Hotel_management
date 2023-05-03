#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    int Qroom = 0, Qcoffee = 0, Qtea = 0, Qsweet = 0, Qpasta = 0, Qnoodles = 0, Qpaperdosa = 0, Qpaneerdosa = 0, Qmasaladosa = 0,
        Qburger = 0, Qchickenburger = 0, Qchickenmasala = 0, Qchickencurry = 0, Qchickenhandi = 0, Qparatha = 0, Qplainrice = 0,
        Qbiryanirice = 0, Qchickenbiryani = 0, Qmuttonbiryani = 0, Qkheer = 0, Qmangoshake = 0, Qoreoshake = 0, Qspecialshake = 0,
        Qlassi = 0, Qpizza = 0, Qwaterbottle = 0;

    int Sroom = 0, Scoffee = 0, Stea = 0, Ssweet = 0, Spasta = 0, Snoodles = 0, Spaperdosa = 0, Spaneerdosa = 0, Smasaladosa = 0,
        Sburger = 0, Schickenburger = 0, Schickenmasala = 0, Schickencurry = 0, Schickenhandi = 0, Sparatha = 0, Splainrice = 0,
        Sbiryanirice = 0, Schickenbiryani = 0, Smuttonbiryani = 0, Skheer = 0, Smangoshake = 0, Soreoshake = 0, Sspecialshake = 0,
        Slassi = 0, Spizza = 0, Swaterbottle = 0;

    int Total_room = 0, Total_coffee = 0, Total_tea = 0, Total_sweet = 0, Total_pasta = 0, Total_noodles = 0, Total_paperdosa = 0, Total_paneerdosa = 0, Total_masaladosa = 0,
        Total_burger = 0, Total_chickenburger = 0, Total_chickenmasala = 0, Total_chickencurry = 0, Total_chickenhandi = 0, Total_paratha = 0, Total_plainrice = 0,
        Total_biryanirice = 0, Total_chickenbiryani = 0, Total_muttonbiryani = 0, Total_kheer = 0, Total_mangoshake = 0, Total_oreoshake = 0, Total_specialshake = 0,
        Total_lassi = 0, Total_pizza = 0, Total_waterbottle = 0;

    cout << "\n\t\t\t\t\t Welcome ";
    cout << "\n\t\t\t\t Quantity of item we have ";
    cout << "\n Rooms availabe : ";
    cin >> Qroom;
    cout << "\n Quantity of Coffee : ";
    cin >> Qcoffee;
    cout << "\n Quantity of Tea : ";
    cin >> Qtea;
    cout << "\n Quantity of Sweets : ";
    cin >> Qsweet;
    cout << "\n Quantity of Pastas : ";
    cin >> Qpasta;
    cout << "\n Quantity of Noodles : ";
    cin >> Qnoodles;
    cout << "\n Quantity of Paperdosa : ";
    cin >> Qpaperdosa;
    cout << "\n Quantity of Masaladosa : ";
    cin >> Qmasaladosa;
    cout << "\n Quantity of VegBurger : ";
    cin >> Qburger;
    cout << "\n Quantity of ChickenBurger : ";
    cin >> Qchickenburger;
    cout << "\n Quantity of ChickenMasala : ";
    cin >> Qchickenmasala;
    cout << "\n Quantity of ChickenCurry : ";
    cin >> Qchickencurry;
    cout << "\n Quantity of ChickenHandi : ";
    cin >> Qchickenhandi;
    cout << "\n Quantity of Paratha : ";
    cin >> Qparatha;
    cout << "\n Quantity of PlainRice : ";
    cin >> Qplainrice;
    cout << "\n Quantity of BiryaniRice : ";
    cin >> Qbiryanirice;
    cout << "\n Quantity of ChickenBiryani : ";
    cin >> Qchickenbiryani;
    cout << "\n Quantity of MuttonBiryani : ";
    cin >> Qmuttonbiryani;
    cout << "\n Quantity of Kheer : ";
    cin >> Qkheer;
    cout << "\n Quantity of MangoShake : ";
    cin >> Qmangoshake;
    cout << "\n Quantity of OreoShake : ";
    cin >> Qoreoshake;
    cout << "\n Quantity of SpecialShake : ";
    cin >> Qspecialshake;
    cout << "\n Quantity of Lassi : ";
    cin >> Qlassi;
    cout << "\n Quantity of Mixed Pizza : ";
    cin >> Qpizza;
    cout << "\n Quantity of WaterBottle : ";
    cin >> Qwaterbottle;

menu:
    cout << "\n\n\n\t\t\t\b Please select from the menu option given below ";
    cout << "\n\n1) Rooms ";
    cout << "\n2) Coffee ";
    cout << "\n3) Tea ";
    cout << "\n4) Sweets ";
    cout << "\n5) Pasta ";
    cout << "\n6) Noodles ";
    cout << "\n7) Paper Dosa ";
    cout << "\n8) Pneer Dosa ";
    cout << "\n9) Msala Dosa ";
    cout << "\n10) Veg Burger ";
    cout << "\n11) Chicken Burger ";
    cout << "\n12) Chiken Masala ";
    cout << "\n13) Chiken Curry ";
    cout << "\n14) Chiken Handi ";
    cout << "\n15) Paratha ";
    cout << "\n16) Plain Rice ";
    cout << "\n17) Biryani Rice ";
    cout << "\n18) Chicken Biryani ";
    cout << "\n19 Mutton Biryani ";
    cout << "\n20) Kheer ";
    cout << "\n21) Mango Shake ";
    cout << "\n22) Oreo Shake ";
    cout << "\n23) Special Shake ";
    cout << "\n24) Lassi ";
    cout << "\n25) MultiFlavored Slice Pizza ";
    cout << "\n26) Water Bottle ";
    cout << "\n27) Information regarding sales and collection of the day  ";
    cout << "\n28) Exit ";

    cout << "\n\n Please Enter your choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want: ";
        cin >> quant;
        if (Qroom - Sroom >= quant)
        {
            Sroom = Sroom + quant;
            Total_room = Total_room + quant * 2500;
            cout << "\n\n\t " << quant << " rooms have been alloted to you! total charge is " << quant * 2500;
        }
        else
            cout << "\n\t Only " << Qroom - Sroom << " Rooms are remaining in the hotel!";
        break;

    case 2:
        cout << "\n\n Enter the Quantity of cofee: ";
        cin >> quant;
        if (Qcoffee - Scoffee >= quant)
        {
            Scoffee = Scoffee + quant;
            Total_coffee = Total_coffee + quant * 70;
            cout << "\n\n\t " << quant << " Coffee is the order! total charge is " << quant * 70;
        }
        else
            cout << "\n\t Only " << Qcoffee - Scoffee << " Coffee remaining in the hotel!";
        break;

    case 3:
        cout << "\n\n Enter the Quantity of Tea: ";
        cin >> quant;
        if (Qtea - Stea >= quant)
        {
            Stea = Stea + quant;
            Total_tea = Total_tea + quant * 40;
            cout << "\n\n\t " << quant << " Tea is the order! total charge is " << quant * 40;
        }
        else
            cout << "\n\t Only " << Qtea - Stea << " Tea remaining in the hotel!";
        break;

    case 4:
        cout << "\n\n Enter the Quantity of Sweets: ";
        cin >> quant;
        if (Qsweet - Ssweet >= quant)
        {
            Ssweet = Ssweet + quant;
            Total_sweet = Total_sweet + quant * 210;
            cout << "\n\n\t " << quant << " Sweet is the order! total charge is " << quant * 210;
        }
        else
            cout << "\n\t Only " << Qsweet - Ssweet << " Sweets remaining in the hotel!";
        break;

    case 5:
        cout << "\n\n Enter the Quantity of Pasta: ";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * 200;
            cout << "\n\n\t " << quant << " Pasta is the order! total charge is " << quant * 200;
        }
        else
            cout << "\n\t Only " << Qpasta - Spasta << " Pasta remaining in the hotel!";
        break;

    case 6:
        cout << "\n\n Enter the Quantity of Noodles: ";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + quant * 160;
            cout << "\n\n\t " << quant << " Noodles is the order! total charge is " << quant * 160;
        }
        else
            cout << "\n\t Only " << Qnoodles - Snoodles << " Noodles remaining in the hotel!";
        break;

    case 7:
        cout << "\n\n Enter the Quantity of PaperDosa: ";
        cin >> quant;
        if (Qpaperdosa - Spaperdosa >= quant)
        {
            Spaperdosa = Spaperdosa + quant;
            Total_paperdosa = Total_paperdosa + quant * 110;
            cout << "\n\n\t " << quant << " PaperDosa is the order! total charge is " << quant * 110;
        }
        else
            cout << "\n\t Only " << Qpaperdosa - Spaperdosa << " PaperDosa remaining in the hotel!";
        break;

    case 8:
        cout << "\n\n Enter the Quantity of PaneerDosa: ";
        cin >> quant;
        if (Qpaneerdosa - Spaneerdosa >= quant)
        {
            Spaneerdosa = Spaneerdosa + quant;
            Total_paneerdosa = Total_paneerdosa + quant * 170;
            cout << "\n\n\t " << quant << " PaneerDosa is the order! total charge is " << quant * 170;
        }
        else
            cout << "\n\t Only " << Qpaneerdosa - Spaneerdosa << " PaneerDosa remaining in the hotel!";
        break;

    case 9:
        cout << "\n\n Enter the Quantity of MasalaDosa: ";
        cin >> quant;
        if (Qmasaladosa - Smasaladosa >= quant)
        {
            Smasaladosa = Smasaladosa + quant;
            Total_masaladosa = Total_masaladosa + quant * 140;
            cout << "\n\n\t " << quant << " MasalaDosa is the order! total charge is " << quant * 140;
        }
        else
            cout << "\n\t Only " << Qmasaladosa - Smasaladosa << " MasalaDosa remaining in the hotel!";
        break;

    case 10:
        cout << "\n\n Enter the Quantity of Veg Burger: ";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + quant * 40;
            cout << "\n\n\t " << quant << " Veg Burger is the order! total charge is " << quant * 40;
        }
        else
            cout << "\n\t Only " << Qburger - Sburger << " Veg Burger remaining in the hotel!";
        break;

    case 11:
        cout << "\n\n Enter the Quantity of Chicken Burger: ";
        cin >> quant;
        if (Qchickenburger - Schickenburger >= quant)
        {
            Schickenburger = Schickenburger + quant;
            Total_chickenburger = Total_chickenburger + quant * 110;
            cout << "\n\n\t " << quant << " Chicken Burger is the order! total charge is " << quant * 110;
        }
        else
            cout << "\n\t Only " << Qchickenburger - Schickenburger << " Chicken Burger remaining in the hotel!";
        break;

    case 12:
        cout << "\n\n Enter the Quantity of Chicken Msala: ";
        cin >> quant;
        if (Qchickenmasala - Schickenmasala >= quant)
        {
            Schickenmasala = Schickenmasala + quant;
            Total_chickenmasala = Total_chickenmasala + quant * 310;
            cout << "\n\n\t " << quant << " Chicken Msala is the order! total charge is " << +quant * 310;
        }
        else
            cout << "\n\t Only " << Qchickenmasala - Schickenmasala << " Chicken Msala remaining in the hotel!";
        break;

    case 13:
        cout << "\n\n Enter the Quantity of Chicken Curry: ";
        cin >> quant;
        if (Qchickencurry - Schickencurry >= quant)
        {
            Schickencurry = Schickencurry + quant;
            Total_chickencurry = Total_chickencurry + quant * 300;
            cout << "\n\n\t " << quant << " Chicken Curry is the order! total charge is " << quant * 300;
        }
        else
            cout << "\n\t Only " << Qchickencurry - Schickencurry << " Chicken Curry remaining in the hotel!";
        break;

    case 14:
        cout << "\n\n Enter the Quantity of Chicken Handi: ";
        cin >> quant;
        if (Qchickenhandi - Schickenhandi >= quant)
        {
            Schickenhandi = Schickenhandi + quant;
            Total_chickenhandi = Total_chickenhandi + quant * 350;
            cout << "\n\n\t " << quant << " Chicken Handi is the order! total charge is " << quant * 350;
        }
        else
            cout << "\n\t Only " << Qchickenhandi - Schickenhandi << " Chicken Handi remaining in the hotel!";
        break;

    case 15:
        cout << "\n\n Enter the Quantity of Paratha: ";
        cin >> quant;
        if (Qparatha - Sparatha >= quant)
        {
            Sparatha = Sparatha + quant;
            Total_paratha = Total_paratha + quant * 15;
            cout << "\n\n\t " << quant << " Paratha is the order! total charge is " << quant * 15;
        }
        else
            cout << "\n\t Only " << Qparatha - Sparatha << " Paratha remaining in the hotel!";
        break;

    case 16:
        cout << "\n\n Enter the Quantity of Plain Rice: ";
        cin >> quant;
        if (Qplainrice - Splainrice >= quant)
        {
            Splainrice = Splainrice + quant;
            Total_plainrice = Total_plainrice + quant * 60;
            cout << "\n\n\t " << quant << " Plain Rice is the order! total charge is " << quant * 60;
        }
        else
            cout << "\n\t Only " << Qplainrice - Splainrice << " Plain Rice remaining in the hotel!";
        break;

    case 17:
        cout << "\n\n Enter the Quantity of Biryani Rice: ";
        cin >> quant;
        if (Qbiryanirice - Sbiryanirice >= quant)
        {
            Sbiryanirice = Sbiryanirice + quant;
            Total_biryanirice = Total_biryanirice + quant * 80;
            cout << "\n\n\t " << quant << " Biryani Rice is the order! total charge is " << quant * 80;
        }
        else
            cout << "\n\t Only " << Qbiryanirice - Sbiryanirice << " Biryani Rice remaining in the hotel!";
        break;

    case 18:
        cout << "\n\n Enter the Quantity of Chicken Biryani: ";
        cin >> quant;
        if (Qchickenbiryani - Schickenbiryani >= quant)
        {
            Schickenbiryani = Schickenbiryani + quant;
            Total_chickenbiryani = Total_chickenbiryani + quant * 170;
            cout << "\n\n\t " << quant << " Chicken Biryani is the order! total charge is " << quant * 170;
        }
        else
            cout << "\n\t Only " << Qchickenbiryani - Schickenbiryani << " Chicken Biryani remaining in the hotel!";
        break;
    case 19:
        cout << "\n\n Enter the Quantity of Mutton Biryani: ";
        cin >> quant;
        if (Qmuttonbiryani - Smuttonbiryani >= quant)
        {
            Smuttonbiryani = Smuttonbiryani + quant;
            Total_muttonbiryani = Total_muttonbiryani + quant * 220;
            cout << "\n\n\t " << quant << " Mutton Biryani is the order! total charge is " << quant * 220;
        }
        else
            cout << "\n\t Only " << Qmuttonbiryani - Smuttonbiryani << " Mutton Biryani remaining in the hotel!";
        break;

    case 20:
        cout << "\n\n Enter the Quantity of Kheer: ";
        cin >> quant;
        if (Qkheer - Skheer >= quant)
        {
            Skheer = Skheer + quant;
            Total_kheer = Total_kheer + quant * 80;
            cout << "\n\n\t " << quant << " Kheer is the order! total charge is " << quant * 80;
        }
        else
            cout << "\n\t Only " << Qkheer - Skheer << " Kheer remaining in the hotel!";
        break;

    case 21:
        cout << "\n\n Enter the Quantity of Mango Shake: ";
        cin >> quant;
        if (Qmangoshake - Smangoshake >= quant)
        {
            Smangoshake = Smangoshake + quant;
            Total_mangoshake = Total_mangoshake + quant * 120;
            cout << "\n\n\t " << quant << " Mango Shake is the order! total charge is " << quant * 120;
        }
        else
            cout << "\n\t Only " << Qmangoshake - Smangoshake << " Mango Shake remaining in the hotel!";
        break;

    case 22:
        cout << "\n\n Enter the Quantity of Oreo Shake: ";
        cin >> quant;
        if (Qoreoshake - Soreoshake >= quant)
        {
            Soreoshake = Soreoshake + quant;
            Total_oreoshake = Total_oreoshake + quant * 130;
            cout << "\n\n\t " << quant << " Oreo Shake is the order! total charge is " << quant * 130;
        }
        else
            cout << "\n\t Only " << Qoreoshake - Soreoshake << " Oreo Shake remaining in the hotel!";
        break;

    case 23:
        cout << "\n\n Enter the Quantity of Special Shake: ";
        cin >> quant;
        if (Qspecialshake - Sspecialshake >= quant)
        {
            Sspecialshake = Sspecialshake + quant;
            Total_specialshake = Total_specialshake + quant * 160;
            cout << "\n\n\t " << quant << " Special Shake is the order! total charge is " << quant * 160;
        }
        else
            cout << "\n\t Only " << Qspecialshake - Sspecialshake << " Special Shake remaining in the hotel!";
        break;

    case 24:
        cout << "\n\n Enter the Quantity of Lassi: ";
        cin >> quant;
        if (Qlassi - Slassi >= quant)
        {
            Slassi = Slassi + quant;
            Total_lassi = Total_lassi + quant * 80;
            cout << "\n\n\t " << quant << " Lassi is the order! total charge is " << quant * 80;
        }
        else
            cout << "\n\t Only " << Qlassi - Slassi << " Lassi remaining in the hotel!";
        break;

    case 25:
        cout << "\n\n Enter the Quantity of MultiFlavored Slice Pizza: ";
        cin >> quant;
        if (Qpizza - Spizza >= quant)
        {
            Spizza = Spizza + quant;
            Total_pizza = Total_pizza + quant * 400;
            cout << "\n\n\t " << quant << " MultiFlavored slice Pizza  is the order! total charge is " << quant * 120;
        }
        else
            cout << "\n\t Only " << Qpizza - Spizza << " MultiFlavored slice Pizza remaining in the hotel!";
        break;

    case 26:
        cout << "\n\n Enter the Quantity of Water Bottle: ";
        cin >> quant;
        if (Qwaterbottle - Swaterbottle >= quant)
        {
            Swaterbottle = Swaterbottle + quant;
            Total_waterbottle = Total_waterbottle + quant * 30;
            cout << "\n\n\t " << quant << " Water Bottle is the order! total charge is " << quant * 30;
        }
        else
            cout << "\n\t Only " << Qwaterbottle - Swaterbottle << " Water Bottle remaining in the hotel!";
        break;

    case 27:
        cout << "\n\t\t\t Details of Sales and Collection ";
        cout << "\n\n Number of rooms we had : " << Qroom;
        cout << "\n\n Number of rooms we gave for rent : " << Sroom;
        cout << "\n\n Remaining rooms : " << Qroom - Sroom;
        cout << "\n\n Total collection for the day : " << Total_room;
        cout << endl;

        cout << "\n\n Number of Coffee we had : " << Qcoffee;
        cout << "\n\n Number of Coffee we sold : " << Scoffee;
        cout << "\n\n Remaining Coffee : " << Qcoffee - Scoffee;
        cout << "\n\n Total Coffee collection for the day : " << Total_coffee;
        cout << endl;

        cout << "\n\n Number of Tea we had : " << Qtea;
        cout << "\n\n Number of Tea we sold : " << Stea;
        cout << "\n\n Remaining Tea : " << Qtea - Stea;
        cout << "\n\n Total tea collection for the day : " << Total_tea;
        cout << endl;

        cout << "\n\n Number of Sweets we had : " << Qsweet;
        cout << "\n\n Number of Sweets we sold : " << Ssweet;
        cout << "\n\n Remaining Sweets : " << Qsweet - Ssweet;
        cout << "\n\n Total Sweets collection for the day : " << Total_sweet;
        cout << endl;

        cout << "\n\n Number of Pasta we had : " << Qpasta;
        cout << "\n\n Number of Pasta we sold : " << Spasta;
        cout << "\n\n Remaining Pasta  : " << Qpasta - Spasta;
        cout << "\n\n Total Pasta collection for the day : " << Total_pasta;
        cout << endl;

        cout << "\n\n Number of Noodles we had : " << Qnoodles;
        cout << "\n\n Number of Noodles we sold : " << Snoodles;
        cout << "\n\n Remaining Noodles : " << Qnoodles - Snoodles;
        cout << "\n\n Total Noodles collection for the day : " << Total_noodles;
        cout << endl;

        cout << "\n\n Number of Paper Dosa we had  : " << Qpaperdosa;
        cout << "\n\n Number of Paper Dosa we sold : " << Spaperdosa;
        cout << "\n\n Remaining Paper Dosa : " << Qpaperdosa - Spaperdosa;
        cout << "\n\n Total Paper Dosa collection for the day : " << Total_paperdosa;
        cout << endl;

        cout << "\n\n Number of Paneer Dosa we had  : " << Qpaneerdosa;
        cout << "\n\n Number of Paneer Dosa we sold : " << Spaneerdosa;
        cout << "\n\n Remaining Paneer Dosa : " << Qpaneerdosa - Spaneerdosa;
        cout << "\n\n Total Paneer Dosa collection for the day : " << Total_paneerdosa;
        cout << endl;

        cout << "\n\n Number of Masala Dosa we had  : " << Qmasaladosa;
        cout << "\n\n Number of Masala Dosa we sold : " << Smasaladosa;
        cout << "\n\n Remaining Masala Dosa : " << Qmasaladosa - Smasaladosa;
        cout << "\n\n Total Msala Dosa collection for the day : " << Total_masaladosa;
        cout << endl;

        cout << "\n\n Number of Veg Burger we had  : " << Qburger;
        cout << "\n\n Number of Veg Burger we sold : " << Sburger;
        cout << "\n\n Remaining Veg Burger : " << Qburger - Sburger;
        cout << "\n\n Total Veg Burger collection for the day : " << Total_burger;
        cout << endl;

        cout << "\n\n Number of Chicken Burger we had  : " << Qchickenburger;
        cout << "\n\n Number of Chicken Burger we sold : " << Schickenburger;
        cout << "\n\n Remaining Chicken Burger : " << Qchickenburger - Schickenburger;
        cout << "\n\n Total Chicken Burger collection for the day : " << Total_chickenburger;
        cout << endl;

        cout << "\n\n Number of Chicken Masala we had  : " << Qchickenmasala;
        cout << "\n\n Number of Chicken Masala we sold : " << Schickenmasala;
        cout << "\n\n Remaining Chicken Masala : " << Qchickenmasala - Schickenmasala;
        cout << "\n\n Total Chicken Masala collection for the day : " << Total_chickenmasala;
        cout << endl;

        cout << "\n\n Number of Chicken Curry we had  : " << Qchickencurry;
        cout << "\n\n Number of Chicken Curry we sold : " << Schickencurry;
        cout << "\n\n Remaining Chicken Curry : " << Qchickencurry - Schickencurry;
        cout << "\n\n Total Chicken Curry collection for the day : " << Total_chickencurry;
        cout << endl;

        cout << "\n\n Number of Chicken Handi we had  : " << Qchickenhandi;
        cout << "\n\n Number of Chicken Handi we sold : " << Schickenhandi;
        cout << "\n\n Remaining Chicken Handi : " << Qchickenhandi - Schickenhandi;
        cout << "\n\n Total Chicken Handi collection for the day : " << Total_chickenhandi;
        cout << endl;

        cout << "\n\n Number of Paratha we had  : " << Qparatha;
        cout << "\n\n Number of Paratha we sold : " << Sparatha;
        cout << "\n\n Remaining Paratha : " << Qparatha - Sparatha;
        cout << "\n\n Total Paratha collection for the day : " << Total_paratha;
        cout << endl;

        cout << "\n\n Number of Plain Rice we had  : " << Qplainrice;
        cout << "\n\n Number of Plain Rice we sold : " << Splainrice;
        cout << "\n\n Remaining Plain Rice : " << Qplainrice - Splainrice;
        cout << "\n\n Total Plain Rice collection for the day : " << Total_plainrice;
        cout << endl;

        cout << "\n\n Number of Biryani Rice we had  : " << Qbiryanirice;
        cout << "\n\n Number of Biryani Rice we sold : " << Sbiryanirice;
        cout << "\n\n Remaining Biryani Rice : " << Qbiryanirice - Sbiryanirice;
        cout << "\n\n Total Biryani Rice collection for the day : " << Total_biryanirice;
        cout << endl;

        cout << "\n\n Number of Chicken Biryani we had  : " << Qchickenbiryani;
        cout << "\n\n Number of Chicken Biryani we sold : " << Schickenbiryani;
        cout << "\n\n Remaining Chicken Biryani : " << Qchickenbiryani - Schickenbiryani;
        cout << "\n\n Total Chicken Biryani collection for the day : " << Total_chickenbiryani;
        cout << endl;

        cout << "\n\n Number of Mutton Biryani we had  : " << Qmuttonbiryani;
        cout << "\n\n Number of Mutton Biryani we sold : " << Smuttonbiryani;
        cout << "\n\n Remaining Mutton Biryani : " << Qmuttonbiryani - Smuttonbiryani;
        cout << "\n\n Total Mutton Biryani collection for the day : " << Total_muttonbiryani;
        cout << endl;

        cout << "\n\n Number of Kheer we had  : " << Qkheer;
        cout << "\n\n Number of Kheer we sold : " << Skheer;
        cout << "\n\n Remaining Kheer : " << Qkheer - Skheer;
        cout << "\n\n Total Kheer collection for the day : " << Total_kheer;
        cout << endl;

        cout << "\n\n Number of Mango Shake we had  : " << Qmangoshake;
        cout << "\n\n Number of Mango Shake we sold : " << Smangoshake;
        cout << "\n\n Remaining Mango Shake : " << Qmangoshake - Smangoshake;
        cout << "\n\n Total Mango Shake collection for the day : " << Total_mangoshake;
        cout << endl;

        cout << "\n\n Number of Oreo Shake we had  : " << Qoreoshake;
        cout << "\n\n Number of Oreo Shake we sold : " << Soreoshake;
        cout << "\n\n Remaining Oreo Shake : " << Qburger - Soreoshake;
        cout << "\n\n Total Oreo Shake collection for the day : " << Total_oreoshake;
        cout << endl;

        cout << "\n\n Number of Special Shake we had  : " << Qspecialshake;
        cout << "\n\n Number of Special Shake we sold : " << Sspecialshake;
        cout << "\n\n Remaining Special Shake : " << Qburger - Sspecialshake;
        cout << "\n\n Total Special Shake collection for the day : " << Total_specialshake;
        cout << endl;

        cout << "\n\n Number of Lassi we had  : " << Qlassi;
        cout << "\n\n Number of Lassi we sold : " << Slassi;
        cout << "\n\n Remaining Lassi : " << Qlassi - Slassi;
        cout << "\n\n Total Lassi collection for the day : " << Total_lassi;
        cout << endl;

        cout << "\n\n Number of MultiFlavored Pizza we had  : " << Qpizza;
        cout << "\n\n Number of MultiFlavored Pizza we sold : " << Spizza;
        cout << "\n\n Remaining MultiFlavored Pizza : " << Qburger - Spizza;
        cout << "\n\n Total MultiFlavored Pizza collection for the day : " << Total_pizza;
        cout << endl;

        cout << "\n\n Number of Water Bottle we had  : " << Qwaterbottle;
        cout << "\n\n Number of Water Bottle we sold : " << Swaterbottle;
        cout << "\n\n Remaining Water Bottle : " << Qburger - Swaterbottle;
        cout << "\n\n Total Water Bottle collection for the day : " << Total_waterbottle;
        cout << endl;

        cout << "\n\n\n\t Total collection of the day is " << Total_biryanirice + Total_burger + Total_chickenbiryani + Total_chickenburger + Total_chickencurry + Total_chickenhandi + Total_chickenmasala + Total_coffee + Total_kheer + Total_lassi + Total_mangoshake + Total_masaladosa + Total_muttonbiryani + Total_noodles + Total_oreoshake + Total_paneerdosa + Total_paperdosa + Total_paratha + Total_pasta + Total_pizza + Total_plainrice + Total_room + Total_specialshake + Total_sweet + Total_tea + Total_waterbottle;
        break;

    case 28:
        cout << "\n\t\t\t___________________Thank You__________________________";
        cout << "\n\t\t\t__________________Visit Again_________________________";
        exit(0);

    default:
        cout << " \n\n\n\t\t Please select a valid number !";
    }
    goto menu;

    return 0;
}