import  java.lang.Math.sqrt;
import java.util.Scanner;
public class Stairs
{
	public static void main(String[] args) {
		Scanner in =new Scanner(System.in);
		int T=in.nextInt();
		for(int t=0;t<T;t++)
		{
			int n=in.nextInt();
			int v1=in.nextInt();
			int v2=in.nextInt();

			double t1=Math.sqrt(2)/v1;
			double t2=2.0/v2;
			if(t1<t2)
			{
				System.out.println("Stairs");
			}
			else
				System.out.println("Elevator");

		}
	}
	
}