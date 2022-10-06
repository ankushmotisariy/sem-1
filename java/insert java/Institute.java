//Prectical list : 2 Pr-3
import java.util.*;

class Festival
{
	int pid;
	String pname;
	String pcity;
	long contact;
	int p[];
	int i_id;
	String i_name;
	double credit;
	int total;
	// String category; 

	Festival()
	{
		p=new int[5];
		total = 0;
	}	

		Scanner sc=new Scanner(System.in);

	void getdata()
	{
		System.out.println("Enter the Participant id :");
		pid=sc.nextInt();

		sc.nextLine();
		System.out.println("Enter the Participant name :");
		pname=sc.nextLine();

		System.out.println("Enter the Participant city :");
		pcity=sc.nextLine();

		System.out.println("Enter the Participant contact :");
		contact=sc.nextLong();

		System.out.println("Enter the Score of 5 competitions :");
		for (int i=0;i<5;i++) 
		{
			p[i]=sc.nextInt();	
		}

		System.out.println("Enter the Institute id :");
		i_id=sc.nextInt();

		sc.nextLine();
		System.out.println("Enter the Institute name :");
		i_name=sc.nextLine();
	}

	void calculate()
	{
		

		 for (int j=0;j<5;j++) 
		 {
			total = total + p[j];
		 }

		 System.out.println("Total score is :" + total);

		credit = total/5;

		System.out.println("Average is :" + credit);

		if (credit > 90) 
		{
			System.out.println("Winner");
			// category = 'Winner';
		}

		else if (credit > 70) 
		{
			System.out.println("Runners up");
			// category = 'Runners up';
		}

		else if (credit > 60) 
		{
			System.out.println("Looser");
			// category = 'Looser';
		}
	}


	void display()
	{
		System.out.println("Institute id :" + i_id);
		System.out.println("Institute name :" + i_name);
		System.out.println("Institute credit point :" + credit);
		//System.out.println("Institute category :" + category);
	}
}

class Institute
{
	public static void main(String args[]) 
	{
		Festival f=new Festival();

		f.getdata();
		f.calculate();
		f.display();
	}
}

// OUTPUT
/*

Enter the Participant id :
111
Enter the Participant name :
Parth_Sangani
Enter the Participant city :
Surat
Enter the Participant contact :
8401656116
Enter the Score of 5 competitions :
98
79
100
89
94
Enter the Institute id :
101011
Enter the Institute name :
Babu_Madhav_Institute_of_Information_Technology
Total score is :460
Average is :92.0
Winner
Institute id :101011
Institute name :Babu_Madhav_Institute_of_Information_Technology
Institute credit point :92.0
*/