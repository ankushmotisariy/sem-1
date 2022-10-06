import java.util.*;

class Purchase 
{
	String c_id;
	String c_name;
	String c_city;
	long contact_num;
	int price[];
	int total;

	Purchase()
	{
		price=new int[5];
		total = 0;
	}

	Scanner sc=new Scanner(System.in);

	void getdata()
	{
		System.out.println("Enter the customer id :");
		c_id=sc.nextLine();

		System.out.println("Enter the customer name :");
		c_name=sc.nextLine();

		System.out.println("Enter the customer city :");
		c_city=sc.nextLine();

		System.out.println("Enter the customer contact number :");
		contact_num=sc.nextLong();

		System.out.println("Enter the last five Price :");
		for (int i=0;i<5;i++) 
		{
			price[i]=sc.nextInt();
		}
	}

	void display()
	{
		System.out.println("customer id :" + c_id);
		System.out.println("customer name :" + c_name);
		System.out.println("customer city :" + c_city);
		System.out.println("customer contact number :" + contact_num);

		for (int j=0;j<5;j++) 
		{
			System.out.println("price :" + price[j]);
		}

	}

	void calculate()
	{
		
		double average;

		for (int b=0;b<5;b++) 
		{
			total = total + price[b];
		}

		average = total/5;

		if (average > 50000) 
		{
			System.out.println("Discount = 5000");

			total = total - 5000;

			System.out.println("your final bill is :" + total);
		}

		else if (average > 35000)
		{
			System.out.println("Discount = 3500");

			total = total - 3500;

			System.out.println("your final bill is :" + total);
		}

		else if (average > 20000) 
		{
			System.out.println("Discount = 2000");

			total = total - 2000;

			System.out.println("your final bill is :" + total);
		}

		else if(average < 20000)
		{
			System.out.println("Discount = 0");

			total = total - 0;

			System.out.println("your final bill is :" + total);
		}
	}		

}

class Customer
{
	public static void main(String args[]) 
	{
		Purchase p=new Purchase();

		p.getdata();
		p.display();
		p.calculate();
	}
}

// OUTPUT

/*

Enter the customer id :
a-101
Enter the customer name :
parth_sangani
Enter the customer city :
surat
Enter the customer contact number :
8401656116
Enter the last five Price :
80000
89500
70000
35000
12500
customer id :a-101
customer name :parth_sangani
customer city :surat
customer contact number :8401656116
price :80000
price :89500
price :70000
price :35000
price :12500
Discount = 5000
your final bill is :282000

*/