import java.util.Scanner;

public class ptice {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		String ADRIAN = "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABC";
		String BRUNO = "BABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABCBABC";
		String GORAN = "CCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABBCCAABB";
		
		int n_questions = sc.nextInt();
		String letters = sc.next();
		
		int adrian_points = 0;
		int bruno_points = 0;
		int goran_points = 0;
		
		for (int i = 0; i < n_questions; i++) {
			
			if (letters.charAt(i) == ADRIAN.charAt(i)) adrian_points++;
			
			if (letters.charAt(i) == BRUNO.charAt(i)) bruno_points++;
			
			if (letters.charAt(i) == GORAN.charAt(i)) goran_points++;
		}
		
		int max_points = Math.max(adrian_points, Math.max(bruno_points, goran_points));
		
		System.out.println(max_points);
		
		if (adrian_points == max_points) System.out.println("Adrian");
		if (bruno_points  == max_points) System.out.println("Bruno");
		if (goran_points == max_points) System.out.println("Goran");
	
 	}
	
}
