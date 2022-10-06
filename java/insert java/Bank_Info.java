/*
Assume that a bank maintains two kinds of accounts for customers, one called as savings
accounts and the other as current accounts. The savings account provides compound
interest and withdrawal facilities but no cheque book facility. The current account
provides cheque book facility but no interest. Current account holder should also
maintain a minimum balance and if the balance falls below the service charge is
mposed.
Create a class account that stores customer name, account number and type of account.
From this derive the classes CurrentAccount and SavingsAccount to make them more
specific to their requirements. In main create object of current & savings accounts and
perform following operation on both objects:
I.
Accept deposit from the customer and update the balance.
II.
Calculate interest.
Write a program to implement given scenario.
*/




import java.util.*;
class Account 
{
	Scanner sc=new Scanner(System.in);
	String c_name;
	String ac_type;
	long ac_num;

	Account()
	{
		c_name=null;
		ac_type=null;
		ac_num=0;
	}

	void getdata()
	{
		System.out.println("Enter Customer Name : ");
		c_name=sc.next();
		sc.nextLine();
		System.out.println("Enter Account Type : ");
		ac_type=sc.next();
		System.out.println("Enter Acount Number : ");
		ac_num=sc.nextLong();
	}

	void display()
	{
		System.out.println("Customer Name : " + c_name);
		System.out.println("Acount Type   : " + ac_type);
		System.out.println("Acount Number : " + ac_num);
	}
}




class SavingAcount extends Account
{
	Scanner sc=new Scanner(System.in);
	long p;
	double r,a,balance,w_balance,bal;
	int n,t;
	SavingAcount()
	{
		p=0;
		n=t=0;
		r=a=balance=bal=w_balance=0.0;
	}

	void getdata1()
	{
		getdata();
		System.out.println("----------------------------------------------------------");
		System.out.println("Enter Principal Balance : ");
		p=sc.nextLong();
		System.out.println("Enter Interest Rate    : ");
		r=sc.nextDouble();
		System.out.println("Enter Number of Year   : ");
		n=sc.nextInt();
		System.out.println("Enter number of time   : ");
		t=sc.nextInt();
		System.out.println("Enter Total Balance    : ");
		balance=sc.nextInt();
		System.out.println("Enter Widrawel Amount  : ");
		w_balance=sc.nextInt();
	}

	double interest()
	{
		a=p*Math.pow(1 + (r / n), n * t);	
		return a;
	}

	double widraw()
	{
		if(balance-w_balance<=balance)
		{
			balance=balance-w_balance;
			bal=balance;
		}
		else 
		{
			System.out.println("You can't widraw");
		}
	return w_balance;
	}

	void display1()
	{
		display();
		System.out.println("----------------------------------------------------------");
		System.out.println("Final Amount : " + interest());
		System.out.println("Final Widrawal Amount : " +  widraw());
		System.out.println("Final Amount : " + bal);
		System.out.println("No cheque book facility available ");
	}
}

/*
The current account
provides cheque book facility but no interest. Current account holder should also
maintain a minimum balance and if the balance falls below the service charge is
mposed.
*/


class CurrentAcount  extends Account
{
	Scanner sc=new Scanner(System.in);
	int balance,bal,w_balance;
	CurrentAcount()
	{
		balance=bal=w_balance=0;
	}
	
	void getdata2()
	{
		getdata();
		System.out.println("----------------------------------------------------------");
		System.out.println("Enter your current balance : ");
		balance=sc.nextInt();
		System.out.println("Enter the your Withdraw Amount :");
		w_balance=sc.nextInt();
	}

	double widraw()
	{
		if(balance-w_balance<=balance)
		{
			balance=balance-w_balance;
			bal=balance;
		}
		else 
		{
			System.out.println("You can't widraw because your current balance is less than widrawel balance");
		}
	return w_balance;
	}
	

	void display2()
	{
		display();
		System.out.println("----------------------------------------------------------");
		System.out.println("Widraw : " + widraw());
		System.out.println("Current Balance : " + bal);
		
	}
}


class Bank_Info
{
	public static void main(String args[])
	{
		SavingAcount  s1=new SavingAcount ();
		CurrentAcount  c1=new CurrentAcount ();
		int ch,con;

		do 
		{
		System.out.println("Your Account is Saving then Enter 1...");
		System.out.println("Your Account is Current then Enter 2...");
		Scanner sc=new Scanner(System.in);
		ch=sc.nextInt();

		switch(ch)
		{
			case 1:
					System.out.println("----------------Saving Acount------------------");
					s1.getdata1();
					System.out.println("----------------------------------------------------------");
					s1.display1();
					System.out.println("----------------------------------------------------------");
			break;

			case 2:
					System.out.println("----------------Current Acount-----------------");
					c1.getdata2();
					System.out.println("----------------------------------------------------------");
					c1.display2();
					System.out.println("----------------------------------------------------------");
			break;
		}

			System.out.println("If you continue plzz Enter 1...");
			System.out.println("If you Exit plzz Enter Anthor num...");
			con=sc.nextInt();
		}while(con==1);
		
		
		
		
	}
}	














