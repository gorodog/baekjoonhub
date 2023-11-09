#include <stdio.h>

int board[3][3] = { 0 };

int check(int b[][3]) { 
    for (int i = 0; i < 3; i++) {
        if (b[i][0] == b[i][1] && b[i][1] == b[i][2])
            return b[i][0];
        else if (b[0][i] == b[1][i] && b[1][i] == b[2][i])
            return b[0][i];
        else if (b[0][0] == b[1][1] && b[1][1] == b[2][2])
            return b[0][0];
        else if (b[0][2] == b[1][1] && b[1][1] == b[2][0])
            return b[0][2];
    }
    return 0; 
}

void tic_tac_to(int n, int m, int s) {
    board[n-1][m-1] = s; 
}

int main() {
    int p, s;
    scanf("%d", &p);
    
    int n, m = 0;
    int result = 0; 
                             
    for (int i = 0; i < 9; i++) { 
        if (i % 2 == 0)
            s = p;
        else {
            if (p == 2)
                s = 1;
            else
                s = 2;
        }

        scanf("%d %d", &n, &m);
        tic_tac_to(n, m, s);
        
        result = check(board);
        if (result != 0) {
            printf("%d", result); 
            return 0;
        }
        if (i == 8)
            printf("%d", result);
    }

    return 0;
}