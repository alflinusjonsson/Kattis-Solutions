import java.util.Scanner;

public class problema {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int dice_A = sc.nextInt();
		int dice_B = sc.nextInt();
		
		if (dice_A == dice_B) System.out.println(dice_A + 1);
		else {
			int total_answers = Math.abs(dice_A - dice_B) + 1;
			int lowest_probability_num = Math.min(dice_A, dice_B) + 1;
			
			for (int i = lowest_probability_num; i < lowest_probability_num + total_answers; i++) {
				System.out.println(i);
			}
		}
			
	}

}





