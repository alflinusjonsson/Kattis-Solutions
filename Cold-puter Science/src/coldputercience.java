import java.util.Scanner;

public class coldputercience {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in); 
		
		int tempCollects = sc.nextInt();
		int tempsBelowZero = 0;
		
		while (tempCollects > 0) {
			if (sc.nextInt() < 0) {
				tempsBelowZero += 1;
			}
			
			tempCollects--;
		}
	
		System.out.println(tempsBelowZero);
	}

}
