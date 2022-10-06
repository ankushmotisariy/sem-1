//Prectical list : 2 Pr-1
import java.util.*;

class Cricket
{
		int c_id;
		String c_name;
		String specialization;
		int score[];
		int i;
		int total;

		Cricket()
		{
			score=new int[5];
			total = 0;
		}

			Scanner sc=new Scanner(System.in);

		void getdata()
		{
			System.out.println("Enter the Cricketer id :");
			c_id=sc.nextInt();

			sc.nextLine();
			System.out.println("Enter the Cricketer name :");
			c_name=sc.nextLine();

			System.out.println("Enter the Cricketer specialization :");
			specialization=sc.nextLine();

			System.out.println("Enter the last five Score marks :");
			for(i=0;i<5;i++) 
			{
				score[i]=sc.nextInt();
			}
		}

		void calculate()
		{
			double strike_rate;

			for (int a=0;a<5;a++) 
			{
				total = total + score[a];
			}

			strike_rate = total*100/500;

			System.out.println("strike_rate is :" + strike_rate);

			if (strike_rate > 90) 
			{
				System.out.println("Platinum");

				System.out.println("Cricketer id :" + c_id);
				System.out.println("Cricketer name :" +c_name );			
				System.out.println("Cricketer specialization :" + specialization);
				for (int j=0;j<5;j++) 
				{
					System.out.println("Score :" + score[j]);
				}

				System.out.println("total Score :" + total);
				
			}

			else if (strike_rate > 70) 
			{
				System.out.println("Gold");
			}

			else if (strike_rate > 60)
			{
				System.out.println("Silver");
			}
		}

}

class Cricketer
{
	public static void main(String args[]) 
	{
		Cricket c=new Cricket();

		c.getdata();
		c.calculate();
	}
}

// OUTPUT
/*

Enter the Cricketer id :
111
Enter the Cricketer name :
parth_sangani
Enter the Cricketer specialization :
bowler
Enter the last five Score marks :
90
99
90
98
97
strike_rate is :94.0
Platinum
Cricketer id :111
Cricketer name :parth_sangani
Cricketer specialization :bowler
Score :90
Score :99
Score :90
Score :98
Score :97
total Score :474
-----------------------------------------------------------------
Enter the Cricketer id :
111
Enter the Cricketer name :
parth
Enter the Cricketer specialization :
psamcf
Enter the last five Score marks :
87
78
90
99
100
strike_rate is :90.0
Gold

*/