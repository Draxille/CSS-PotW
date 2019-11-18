import java.util.Scanner;
public class PotW_3a{
	public static void main(String args[]){
		int fcount=0;
		int num=1;
		int numsum=0;
		Scanner input=new Scanner(System.in);
		System.out.println("input number of desired factors");
		int fact =input.nextInt();//takes input of desired factors
		while ( fcount<=fact)//makes sure the number of factors is equal to the desired number of factors
		{
			fcount=0;
			numsum=0;
			for (int i=1;i<=num;i++)//sums up to form triangle number
			{
				numsum+=i;
			}
			for (int j=1;j<=numsum;j++)//Counts the number of factors
			{
				if (numsum%j==0)
					fcount++;
			}
			num++;//increment to the next possible number
		}
		System.out.println("The first triangle number with more than "+fact+" factors is "+numsum);
		
	}
}
