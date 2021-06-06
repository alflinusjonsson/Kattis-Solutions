#include<iostream>
#define N 8

void readBoard(char board[N][N]) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			std::cin >> board[i][j];
		}
	}
}

static bool UpDown(char board[N][N]) {
    for (int i = 0; i < 8; i++) {
        int sum = 0;
        for (int j = 0; j < 8; j++)sum += board[j][i];
        if (sum > 1)return false;
    }
    return true;
}
static bool RightLeft(char board[N][N]) {
    for (int i = 0; i < 8; i++) {
        int sum = 0;
        for (int j = 0; j < 8; j++)sum += board[i][j];
        if (sum > 1)return false;
    }
    return true;
}

static bool D1(char board[N][N]) {
    for (int i = 0; i < 8; i++) {
        int sum = 0;
        int x = i;
        for (int j = 0; j <= i; j++) {
            sum += board[x][i - x];
            x -= 1;
        }
        if (sum > 1)return false;
    }
    return true;
}

static bool D2(char board[N][N]) {
    for (int i = 7; i > -1; i--) {
        int sum = 0;
        int x = 0;
        for (int j = i; j < 8; j++) {
            sum += board[j][x++];
        }
        if (sum > 1)return false;
    }
    return true;
}
static bool D3(char board[N][N]) {
    for (int i = 0; i < 7; i++) {
        int sum = 0;
        int x = i;
        for (int j = 7; x > -1; j--) {
            sum += board[x--][j];
        }
        if (sum > 1)return false;
    }
    return true;
}
static bool D4(char board[N][N]) {
    for (int i = 7; i > -1; i--) {
        int sum = 0;
        int x = i;
        for (int j = 7; j >= i; j--) {
            sum += board[x++][j];
        }
        if (sum > 1)return false;
    }
    return true;
}

static bool isValid(char board[N][N]) {
    int queens = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[i][j] == '*') {
				board[i][j] = 1; 
                queens++;
			}
			else board[i][j] = 0;
		}
	}

    if (queens == 8) {
        if (UpDown(board) && RightLeft(board) && D1(board) && D2(board) && D3(board) && D4(board)) {
            return true;
        }
        else return false;
    }
    else return false;

}

int main() {
    char board[N][N];
	readBoard(board);
    if (isValid(board)) {
        std::cout << "valid";
    }
    else std::cout << "invalid";
}
