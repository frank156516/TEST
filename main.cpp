//************** Headder directories *****************

#include<conio.h>
#include<stdio.h>
#include<string>
#include<iostream>
#include<assert.h>
using namespace std;

/*This programme is a RESTAURENT MANAGEMENT SYSTEM which manages all the operations of a real time 
  restaurent. It handles all onprations like placing order , calculating the total bill , etc.
  It also keeps track of the costomers.
  It gives access to modify the menu.
  The customers can see the dishes they orders and they can modify their order.
  All this is implemented according to the protocal learnt in MODERN SOFTWARE DEVELOPEMENT TECHNIQUES.
  This Programme is written by Gautam, Count , Casandra.
*/

class Introduction //Class for Displaying to the user interface.
{
	public:
	
	void MainIntroduction()
	{
		cout<<"THIS IS A RESTAURENT MANAGEMENT SYSTEM";
	}
	
	void MenuIntroduction()
	{
		cout<<"\n***********************MENU**************************\n";
	}
	
	void DisplayOptions()
	{
		cout<<"\nEnter one option\n"<<"\n1.Display Menu \n2.Edit Menu \n3.Take Order \n4.Order Summary";
		cout<<"\n5.Total Price \n6.Exit"; 
	}
	
	
	
};


class dish  //Dishes in the Menu are handled here.
{
	
	string NameOfDish;
	int PriceOfDish;
	
	public:
		
		int ModifyDish() //Modify the Dishes in the Menu.
		{
			cout<<"\n Enter the name of the new dish:";
			cin>>NameOfDish;
			cout<<"\n Enter the price of the new dish:";
			cin>>PriceOfDish;
			
		}
		
		
		int DeleteDish() //Delete a dish from the menu.
		{
			NameOfDish="";
			PriceOfDish=0;
			cout<<"\n The dish has been deleted";
			
		}
		
		int DisplayDishAndPrice() //Display the Menu items. 
		{
			cout<<"\nDish : "<<NameOfDish<<"\nPrice:"<<PriceOfDish;
		}
		
		
	
	
};


class menu:public Introduction  //Main Menu class dealing with the dishes in the menu.
{
	int NumbofDishes;
	int DishNo;
    dish dish1;
    dish dish2;
    dish dish3;
    dish dish4;
    dish dish5;
    dish dish6;
    dish dish7;
    dish dish8;
    dish dish9;
    dish dish10;
	bool Dishavalibility;
	int repeat=0;
	
	
	public:
		
	
	void ModifyMenu() //Edit items on the menu.
	{
		do
		{
			
		
		printf("enter what the dish number you wish to change - from 1 to 10\n");
		scanf("%d",&DishNo);
		
		switch(DishNo)
		   {
			case 1:
				dish1.ModifyDish();

				break;
				
			case 2:
				dish2.ModifyDish();
				
				break;
				
			case 3:
				dish3.ModifyDish();

				break;
				
			case 4:
				dish4.ModifyDish();
				break;
				
			case 5:
				dish5.ModifyDish();
                break;
				
			case 6:
				dish6.ModifyDish();
				break;
				
			case 7:
			    dish7.ModifyDish();
				break;
				
			case 8:
				dish8.ModifyDish();
				break;	
				
			case 9:
				dish9.ModifyDish();
				break;
				
			case 10:
				dish10.ModifyDish();
				break;							
				
		    default:assert ((DishNo>10)||(DishNo<0));
		    	break;
					
			};
			
			
			cout<<"If you want to change another dish press 1";
			cin>>repeat;
			
		}while(repeat==1);
		
		
	}
	
	
	void DisplayMenu()  // Prints the dishes in the menu class.
	{
		MainIntroduction();
	    dish1.DisplayDishAndPrice();
	    dish2.DisplayDishAndPrice();
	    dish3.DisplayDishAndPrice();
		dish4.DisplayDishAndPrice();
		dish5.DisplayDishAndPrice();
		dish6.DisplayDishAndPrice();
		dish7.DisplayDishAndPrice();
		dish8.DisplayDishAndPrice();
		dish9.DisplayDishAndPrice();
		dish10.DisplayDishAndPrice();
	}
	

	
	
	
};


class Order:private menu  // This class deals with the orders make by the customers.
{
	int QuantityOfDish;    
	int Order_DishNo[100]; // array to store the dishes ordered.
	int NoOfDishes;        // the number of dishes the customer orderes.
	int Ordersize;         // Used in the for loop as a counter.
	
	public:
	
	void TakeOrder() // saves the Dish no. of the dishes the customres order. 
	{
		cout<<"Enter number of dishes your going to order";
		cin>>NoOfDishes;
		cout<<"Enter your order one by one - Enter only the Dish No";
		for(Ordersize=0;Ordersize<NoOfDishes;Ordersize++)
		{
			cin>>Order_DishNo[Ordersize];
			
		}
		
		
		
		
	}
	
	
	
	void OrderSummary()  //Prints the dishes the customer ordered.
	{
		
		cout<<"\nyour order :";
		for(Ordersize=0;Ordersize<NoOfDishes;Ordersize++)
		{
			cout<<"\n Dish No:"<<Order_DishNo[Ordersize];
		}
		
	}
	
	void CalculateQuantity()  // If there are multiple numbers of the same item.
	{
		
		
		
	}
	
	
	
};


class Bill:private Order // genarates a bill with totalprice,taxes,bill amoumt.
{
	
	
	
	
	public:
		
		
		void BillAmount()  // Calculates the total price of the dishes ordered.
		{
			
			
		}
		
		
		void Taxes()  // Calculates the taxes for the BillAmount.
		{
			
			
			
		}
		
		
		void TotalPrice()  //  Calculates the total price after suming with the Taxes.
		{
			
			
		}
	
	
	
};






int main() 
{
	int RepeatMainOptions=1;
	int MainDisplayOption;
	Introduction Intro1;
	Bill MainBill;
	menu Mainmenu;
	Order MainOrder;
	Intro1.MainIntroduction();
	Intro1.DisplayOptions();
    cin>>MainDisplayOption;
    
    do
    {
    	
	
    switch(MainDisplayOption)
    {
    	case 1:
    		
    		Mainmenu.DisplayMenu();
    		break;
    		
    	case 2:
    		
    		Mainmenu.ModifyMenu();
    		break;
    		
    	case 3:
    		MainOrder.TakeOrder();
    		break;
    		
    	case 4:
    		MainOrder.OrderSummary();
    		break;
    		
    	case 5:
    		MainBill.TotalPrice();
    		break;
    		
    	case 6:
    		
    		RepeatMainOptions=0;
    		break;
    		
    		
    	default:
    		
    		assert (MainDisplayOption>)
    			
    				
	};


	
    }while(RepeatMainOptions); 
	
	getch();
	
}


