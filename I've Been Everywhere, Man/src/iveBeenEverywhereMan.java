import java.util.Scanner;
import java.util.HashMap;

public class iveBeenEverywhereMan {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in); 
		
		HashMap <String, Integer> visited_cities = new HashMap<>(); 
		
		int test_cases = sc.nextInt();

		while(test_cases > 0) {
			int alice_worktrips = sc.nextInt();
			
			for(int i = 0; i < alice_worktrips; i++) {
				String city = sc.next();
				
				visited_cities.put(city, 0);
			}
			
			System.out.println(visited_cities.size());
			visited_cities.clear();
			--test_cases;
		}	
		
	}

}
