import java.util.Scanner;

public class speedlimit {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		while (true) {

			int data_sets = sc.nextInt();

			if (data_sets == -1) {
				break;
			}

			int total_distance = 0;
			int previus_elapsed_time = 0;

			for (int i = 0; i < data_sets; i++) {

				int speed_mph = sc.nextInt();
				int total_elapsed_time = sc.nextInt();

				total_distance += (speed_mph * (total_elapsed_time - previus_elapsed_time));

				previus_elapsed_time = total_elapsed_time;

			}

			System.out.println(total_distance + " miles");

		}

	}

}
