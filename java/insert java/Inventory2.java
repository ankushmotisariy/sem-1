/*
4. Create a class inventory that contains data members like item id, item name, price,
stock. Create two more classes which is inherit from inventory class namely purchase
and sales. Upon purchase and selling of the items stock should be updated. Implement
the functionality of a re-order level while selling of an items (Message should be
displayed if item reaches to re-order level) as well as it stock should be checked before
selling otherwise proper message should be displayed. More than one item should be
sale at a time.
*/




import java.util.*;
class Inventory
{
	Scanner sc=new Scanner (System.in);
	int i_id;
	String i_name;
	double price;
	int stock,s_stock;
	Inventory()
	{
		i_id=0;
		i_name=null;
		price=0.0;
		stock=0;
	}
	void getdata()
	{
		System.out.println("Enter the item id :");
		i_id=sc.nextInt();
		System.out.println("Enter the item name :");
		i_name=sc.next();
		System.out.println("Enter the price :");
		price=sc.nextDouble();
		System.out.println("Enter the stock :");
		stock=sc.nextInt();
	}
	void display()
	{
		System.out.println("item id   :"+i_id);
		System.out.println("item name :"+i_name);
		System.out.println("price     :"+price);
		System.out.println("stock     :"+stock);
	}
}
class Purchases extends Inventory
{

    int p_stock,u_stock;
	Scanner sc=new Scanner(System.in);
	void getdata1()
	{
		System.out.println("Enter how many Items you want to Purchase? ");
		p_stock=sc.nextInt();
	}
	int increase()
	{
		u_stock=p_stock+stock;
		return u_stock;
	}

    // void increase
    // {
    //     u_stock = p_stock+stock;
    // }
	void display1()
	{
		System.out.println("Updated Stock :" + increase());
	}

}
class Sales extends Inventory
{
	Scanner sc=new Scanner (System.in);
	void getdata2()
	{
		System.out.println("Enter how many Items you want to sell? ");
		s_stock=sc.nextInt();
	}
	int decrease()
	{
		if (stock>s_stock)
		{
			stock=stock-s_stock;			
		}
		else 
		{
			System.out.println("This amount of item is not available is stock");
		}
		return stock;
	}
	void display2()
	{
		System.out.println("Stock : " + decrease());
	}
}
class Order1
{
	public static void main(String args[])
	{
		int ch,continu;
       	
        do
        {
            Scanner sc=new Scanner(System.in);
            System.out.println("You Purchase item then enter 1....");
            System.out.println("You Sales item then enter 2....");
            
            ch=sc.nextInt();

            switch(ch)
            {
                case 1:
                        System.out.println("-------------------------------------");

                        Purchases p1=new Purchases();
                        p1.getdata();
                        p1.display();
                        p1.getdata1();
                        p1.display1();
                break;
                
                case 2:
                        System.out.println("-------------------------------------");

                        Sales s1=new Sales();
                        s1.getdata();
                        s1.display();
                        s1.getdata2();
                        s1.display2();
                break;

                default:

                    System.out.println("Plzz valied Choich....");

            }

            System.out.println("If you continue plzz enter 1....");
            System.out.println("If you not continue plzz enter author number....");
            continu=sc.nextInt();
            

         }while(continu==1);
	}

}


	