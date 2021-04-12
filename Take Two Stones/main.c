/*
 * main.c
 *
 *  Created on: 17 dec. 2020
 *      Author: Linus
 */

int main(){

	int n = scanfs();

	if (n % 2 == 0){
		printf("%s", "Bob");
	}
	else
		printf("%s", "Alice");

	return 0;
}
