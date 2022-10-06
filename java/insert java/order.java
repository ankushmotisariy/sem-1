/*Create a class inventory that contains data members like item id, item name, price,
stock. Create two more classes which is inherit from inventory class namely purchase
and sales. Upon purchase and selling of the items stock should be updated. Implement
the functionality of a re-order level while selling of an items (Message should be
displayed if item reaches to re-order level) as well as it stock should be checked before
selling otherwise proper message should be displayed. More than one item should be
sale at a time.*/

import java.util.*;
interface Purchase
{
	void increase();
}
interface Sell
{
	void decrease();
}
class Inventory implements Purchase, Sell
{
	int i_id,price,stock;
	String i_name;

	Inventory()
	{
		i_id=0;
		i_name=null;
		price=0;
		stock=0;
	}
	void getdata()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Item Id : ");
		i_id=sc.nextInt();
		System.out.println("Enter Item Name :");
		i_name=sc.next();
		System.out.println("Enter Price :");
		price=sc.nextInt();
		System.out.println("Enter Stock :");
		stock=sc.nextInt();
	}
	void display()
	{
		System.out.println("Item ID : "+i_id);
		System.out.println("Item Name :"+i_name);
		System.out.println("Item Price :"+price);
		System.out.println("Item Stock :"+stock);
	}
	public void increase()
	{
		int p_stock;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter how many Items you want to Purchase? ");
		p_stock=sc.nextInt();
		stock=stock+p_stock;
		System.out.println("Updated Stock :"+stock);
	}
	public void decrease()
	{
		int d_stock;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter how many Items you want to sell? ");
		d_stock=sc.nextInt();
		if (stock>d_stock)
		{
			stock=stock-d_stock;			
		}
		else 
		{
			System.out.println("this amount of item is not available is stock");
		}
		System.out.println("Stock :"+stock);
	}
}
class order
{
	public static void main(String args[]) 
	{
		Inventory i=new Inventory();
		i.getdata();
		i.display();
		i.increase();
		i.decrease();
	}
}


/*Enter Item Id :
10
Enter Item Name :
zeel
Enter Price :
5000
Enter Stock :
20
Item ID : 10
Item Name :zeel
Item Price :5000
Item Stock :20
Enter how many Items you want to Purchase?
15
Updated Stock :35
Enter how many Items you want to sell?
30
Stock :5

C:\Users\Rushi\Desktop\FY_SEM(1)\FY_SEM(2)\Object Oriented Programming [OOPs]\java programs>java Order
Enter Item Id :
10
Enter Item Name :
zeel
Enter Price :
5000
Enter Stock :
20
Item ID : 10
Item Name :zeel
Item Price :5000
Item Stock :20
Enter how many Items you want to Purchase?
5
Updated Stock :25
Enter how many Items you want to sell?
26
this amount of item is not available is stock
Stock :25*/
