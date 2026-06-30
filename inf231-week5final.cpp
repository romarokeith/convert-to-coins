//Convert Dollars to Coins and the total coin amount
void ConvertToCoins(double);

#include <iostream> //allows program to perform input and output
#include <cstdlib>
using std::cout; //program uses cout

using std::cin; //program uses cin 

using std::endl; //program uses endl

//function main begins program execution

int main (void)
 
{


double amount ; 

int iFlag = -1;

do

{

system("cls") ;

cout << "Enter a $ amount..." << endl ; 

cout << "$" ;

cin >> amount ; 

if(amount < 0) break ;

ConvertToCoins(amount) ; 

cout << "Enter -1 to exit..." << endl ;

cin >> iFlag;

}while(iFlag != -1);

}

void ConvertToCoins(double amt)

{ 

static int quarters = 0;

static int dimes = 0 ;

static int nickels = 0 ;

static int pennies = 0 ;

if(amt >= .25)

{

quarters++ ;

ConvertToCoins(amt - .25) ;

} 

else if(amt >= .10)

{

dimes++ ; ConvertToCoins(amt - .10) ;

}

else if(amt >= .05)

{

nickels++ ; ConvertToCoins(amt - .05) ;

}

else if(amt >= .01)

{ pennies++ ; ConvertToCoins(amt - .01) ;

} 

else 

{

cout << "Coin TOTAL" << endl ; 

cout << "---------------------------" << endl ;

cout << "Quarters = " << quarters << " $" << (quarters * .25) << endl ;

cout << "Dimes = " << dimes << " $" << (dimes * .10) << endl ;

cout << "Nickels = " << nickels << " $" << (nickels * .05) << endl ;

cout << "Pennies = " << pennies << " $" << (pennies * .01) << endl ;

cout << "---------------------------" << endl ; 

cout << "TOTAL COINS = " << (quarters + dimes + nickels + pennies) << endl ;

} 
}

