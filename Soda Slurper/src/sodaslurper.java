import java.util.Scanner;

public class sodaslurper {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int empty_bottles = sc.nextInt() + sc.nextInt();
		int req_bottles = sc.nextInt();
		int bottles = 0;
		int total = 0;
		
		while(empty_bottles >= req_bottles) {
			
			 bottles = empty_bottles % req_bottles;
			 empty_bottles /= req_bottles;
	         total += empty_bottles;
	         empty_bottles += bottles;
	    }
	
	 	System.out.println(total);
		
	}
}


