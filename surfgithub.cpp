
#include <iostream>
#include <iomanip>
using namespace std;

//Welcome to my Surf Shop - Tausif Hussan 

//These are constant characters of the prices of each size of the surfboards. It is constant because the price will not change.

const char LargeSurfBoardPrice = 200.00;
const char MediumSurfboardPrice = 190.00;
const char SmallSurfboardPrice = 175.00;
const char XXXSsurfboardprice= 10.00;

//These are the letters that will be used for input.
const char S = 'S', s = 's', p = 'p', P = 'P', c = 'c', C = 'C', t = 't', T = 'T', q = 'q', Q = 'Q', m = 'm', M = 'M', l = 'l', L = 'L', xxxs = 'xxxs', XXXS = 'XXXS';

//These are constant variables I will use for formatting.

const char star = '*';
const char dot = '.';

//These are void functions, they are normal functions that execute without returning values.

void ShowUsage();
//The purpose of this void function is to display the options for the user to input and how to use the program.
void MakePurchase(int& iTotalXXS, int& iTotalSmall, int& iTotalMedium,  int& iTotalLarge);
//The purpose of this void function is to display options of what to buy and for the user to be able to input the quantity and size of surfboard they would like to purchase.
void DisplayPurchase(const int iTotalXXS,const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
//The purpose of this void function is to count how many of each sizes the user had purchased and display it if they purchased more than one of a specific size.
void DisplayTotal(const int iTotalXXS,const int iTotalSmall, const int iTotalMedium, const int iTotalLarge);
//The purpose of this void function is to count how many of each sizes the user had purchased. If it is more than one it will calculate into a a formula and display the price total of the purchase.

int main()
{

// These are variables that are subject to change through formulas.
  
char size;
char option;
int quantity;

int totalXXXSQuantity;
int totalLargeQuantity;
int totalMediumQuantity;
int totalSmallQuantity;

totalXXXSQuantity = 0;
totalLargeQuantity = 0;
totalMediumQuantity = 0;
totalSmallQuantity = 0;

// These are the letters that can be inputted
const char S = 'S', s = 's', p = 'p', P = 'P', c = 'c', C = 'C', t = 't', T = 'T', q = 'q', Q = 'Q', m = 'm', M = 'M', l = 'l', L = 'L', xxxs = 'xxxs', XXXS = 'XXXS';


  // This automates the creation of the astericks using setw which selects the amount of characters and setfill which selects what character to fill it with.

 cout << setw(70) << setfill(star) << star << endl;
  cout << setfill('*') << setw(10) << star << " Welcome to my Johnny Utah's PointBreak Surf Shop! " << setfill('*') << setw(9) << star << endl;
  cout << setw(70) << setfill(star) << star << endl;
  cout << endl;

//This is the void function to display the option screen and allow user to input options. 

ShowUsage();

//This part of the function is to allow the user to input their option.
  
cout << "\n";
cout << "Please enter selection: ";
cin >> option;
  
// This while loop is created to continue as long as the input is not 'q', which is for quitting the program. It can use either lowercase or uppercase. 
  
while(option != q || option != Q)
{

//This part of the function is used when the user inputs 's', this will display the function ShowUsage again and will display the option menu. This uses an if statement to accomplish this.
if(option == s || option == S)
{ShowUsage();}
  
//This part of the function is used when the user inputs 'p', this will run the MakePurchase function to allow the user to purchase surfboards. This is accomplished through an else if statement within the while loop to have the option to run multiple functions. 
else if(option == p || option == P)

//The parameters of the function are included below.
{MakePurchase(totalXXXSQuantity, totalSmallQuantity,totalMediumQuantity, totalLargeQuantity);
cout << endl;}

//This part of the function is used when the user inputs 'c', will display the amount of surfboards purchased. Using else if statment if the amiunt equals to 0 it will display a certain message, if not then it will use the variables to display how many.

else if(option == c || option == C)
{

//If statement if it is 0, then it will say "no purchases made yet"

if(totalXXXSQuantity == 0 && totalSmallQuantity == 0 && totalMediumQuantity == 0 && totalLargeQuantity == 0)
{cout << "No purchase made yet." << endl;}
  
else

//If else statment, if it is more than 0 it will display the variables.
{DisplayPurchase(totalXXXSQuantity, totalSmallQuantity, totalMediumQuantity, totalLargeQuantity);}
}

//This part of the function is used when the user inputs 't', it will give the total amount.

else if(option == t || option == T)
{

//If the quantity for all the surfboards are 0, then it will say no purchase made yet.

if(totalXXXSQuantity == 0 && totalSmallQuantity == 0 && totalMediumQuantity == 0 && totalLargeQuantity == 0)
  
{cout << "No purchase made yet." << endl;}
else
// else statement, if its more than 0 then run displaytotal function.
  
{DisplayTotal(totalXXXSQuantity, totalSmallQuantity, totalMediumQuantity, totalLargeQuantity);}
}

//Else statement that if anything else is inputted it says a statement then asks for option again.

else
{cout << "Invalid option!" << endl;}

cout << "\nPlease enter selection: ";
cin >> option;
}
cout << "Thank you" << endl;
}


//void function showusage
void ShowUsage()
{
//Display option menu
cout << "To show program usage 'S'" << endl;
cout << "To purchase a surfboard press 'P'" << endl;
cout << "To display current purchase press 'C'" << endl;
cout << "To display total amount due press 'T'" << endl;
cout << "To quit the program press 'Q'" << endl;
}

//void function makepurchase
void MakePurchase(int& iTotalXXXS, int& iTotalSmall, int& iTotalMedium, int& iTotalLarge)
{
//Sets variables to 0. 
int quantity = 0;
char size = '\0';

//Display sets of questions to user.

cout << "Please enter the quantity and type ";
cout << "(XXXS = squirrel small, S=small, M=medium, L=large) of ";
cout << "surfboard you would like to purchase:";
cin >> quantity >> size;

//If user inputted 'l', then add quantity to size large

if(size == l || size == L)
{iTotalLarge = iTotalLarge + quantity;}

//If user inputted 'm', then add quantity to size medium.

else if(size == m || size == M)
{iTotalMedium = iTotalMedium + quantity;}

//If user inputted 's', then add quantity to size small.

else if(size == s || size == S)
{iTotalSmall = iTotalSmall + quantity;}

else if(size == xxxs || size == XXXS)
{iTotalSmall = iTotalXXXS + quantity;}

}

//void function displaypurchase.

void DisplayPurchase(const int iTotalXXXS, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)

{
//Using if statement, if the total amount large surfboards purchased is greater than 0, display the amount.

if(iTotalLarge > 0)
{cout << "The total number of large surfboards is " << iTotalLarge << endl;}

//Using if statement, if the total amount medium surfboards purchased is greater than 0, display the amount.

if(iTotalMedium > 0)
{cout << "The total number of medium surfboards is " << iTotalMedium << endl;}

//Using if statement, if the total amount small surfboards purchased is greater than 0, display the amount.

if(iTotalSmall > 0)
{cout << "The total number of small surfboards is " << iTotalSmall << endl;}

if(iTotalXXXS > 0)
{cout << "The total number of extra small surfboards is " << iTotalXXXS << endl;}
}

//Define the function DisplayTotal().

void DisplayTotal(const int iTotalXXXS, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
double surfboardTotalXXXS, surfboardTotalSmall, surfboardTotalMedium, surfboardTotalLarge,totalOwed;

surfboardTotalXXXS = 0;
surfboardTotalSmall = 0;
surfboardTotalMedium = 0;
surfboardTotalLarge = 0;
totalOwed = 0;

//The setprecision function makes it have the right amount of decimal places in order to display money. 
  
cout << fixed << setprecision(2);

if(iTotalXXXS > 0)
{

//Calculate the total of small surfboards by using a forumula which multiplies price with total amount.

surfboardTotalXXXS = iTotalXXXS * XXXSsurfboardprice;

cout << "The total number of extra small surfboards is " << iTotalXXXS << " at a total of $" << surfboardTotalXXXS << endl;

//This adds to the total amount.

totalOwed = totalOwed + surfboardTotalXXXS;
}
//If the total quantity of small surfboards is greater than 0, display quantity and total.

if(iTotalSmall > 0)
{

//Calculate the total of small surfboards by using a forumula which multiplies price with total amount.

surfboardTotalSmall = iTotalSmall * SmallSurfboardPrice;

cout << "The total number of small surfboards is " << iTotalSmall << " at a total of $" << surfboardTotalSmall << endl;

//This adds to the total amount.

totalOwed = totalOwed + surfboardTotalSmall;
}

////If the total quantity of medium surfboards is greater than 0, display quantity and total.

if(iTotalMedium > 0)
{

//Calculate the total of medium surfboards by using a forumula which multiplies price with total amount.

surfboardTotalMedium = iTotalMedium * MediumSurfboardPrice;

cout << "The total number of medium surfboards is " << iTotalMedium << " at a total of $" << surfboardTotalMedium << endl;

//Add the total of medium surfboards to the total amount.

totalOwed = totalOwed + surfboardTotalMedium;

}

//If the total quantity of large surfboards is greater than 0, display quantity and total.

if(iTotalLarge > 0)
{

//Calculate the total of large surfboards by using a forumula which multiplies price with total amount.

surfboardTotalLarge = iTotalLarge * LargeSurfBoardPrice;

cout << "The total number of large surfboards is " << iTotalLarge << " at a total of $"<< surfboardTotalLarge << endl;

//Add the total of large surfboards to the total amount.

totalOwed = totalOwed + surfboardTotalLarge;
}

//Display the total amount due.

cout << "Amount due: $" << totalOwed << endl;
}