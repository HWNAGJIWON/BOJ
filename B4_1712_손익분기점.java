
import java.util.Scanner;

public class Main {
	public static void main(String [] args) {
		Scanner sc = new Scanner(System.in);
		long a, b, c;
		a = sc.nextLong();
		b = sc.nextLong();
		c = sc.nextLong();
		
		
		
		if(b>=c)
			System.out.println("-1");
		else {
			long result = a/(c-b);
			System.out.println(result+1);
		}
		
		
	}
}
