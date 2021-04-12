import java.util.Scanner;

public class problemb {
	
	public static int calculate_weight_split(int[] items_array, int n_items, int total_weight) {
		
		int temp_weight = total_weight / 2;
        boolean[][] bol_matrix = new boolean[n_items + 1][temp_weight + 1];
        
        for(int i = 0; i <= n_items; i++) {
        	bol_matrix[i][0] = true;
          }
        
        for(int j = 0; j <= temp_weight; j++) {
            if(j == items_array[0]) {
            	bol_matrix[0][j] = true;
            }
          }
        
        for(int i = 1; i < n_items; i++) {
            for(int j = 1; j <= temp_weight; j++) {
              
              if(bol_matrix[i - 1][j]) {
            	  bol_matrix[i][j] = true;
              } else {
                if(j >= items_array[i]) {
                	bol_matrix[i][j] = bol_matrix[i - 1][j - items_array[i]];  
                }
              }
            }
          }
        
        int lastRowIndex = n_items - 1;
        int extra_backpack_weight = 0;
        
        for(int j = temp_weight; j >= 0; j--) {
          if(bol_matrix[lastRowIndex][j]) {
        	  extra_backpack_weight = j;
            break;
          }
        }
        
		return extra_backpack_weight;
	}

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int total_weight = 0;
		int kattis_backpack_weight = 0, extra_backpack_weight = 0;
	
		do {
		    int n_items = sc.nextInt();
		    if (n_items == 0) { // end of inputdata
		        break;
		    }
		    
		    int[] item_weights = new int[n_items];
				    
		    for (int i = 0; i < n_items; i++) {
				 item_weights[i] = sc.nextInt();
				 total_weight += item_weights[i];
		    }
				    
		    extra_backpack_weight = calculate_weight_split(item_weights, n_items, total_weight);
			kattis_backpack_weight = total_weight - extra_backpack_weight;
					
			System.out.print(kattis_backpack_weight);
			System.out.print(" "+ extra_backpack_weight + "\n"); 
				    
			total_weight = 0;
			n_items = 0;
		    	
		   
		} while (sc.hasNextInt());
		
	}
}
	

		


		
		



