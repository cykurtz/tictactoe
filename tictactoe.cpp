#include <iostream>
#include <cstdlib>
#include <ctime>

int i, j, row, col, turn, crow, ccol, placed, win, notfull;
// Declare and initialize a 2D array (matrix) with 3 rows and 3 columns
char matrix[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
    };

void dis (){// display subroutine
    std::cout << "\n\tTicTacToe!\n\n";
    // for (int i = 0; i < 3; ++i) { // Loop through rows
    	std::cout << "\n      |   |";
    	std::cout << "\n    " << matrix[0][0] << " | " << matrix[0][1] << " | " << matrix[0][2];
    	std::cout << "\n   ___|___|___\n";
    	std::cout << "      |   |\n";
		std::cout << "    " << matrix[1][0] << " | " << matrix[1][1] << " | " << matrix[1][2];
    	std::cout << "\n   ___|___|___\n";
    	std::cout << "      |   |\n";
    	std::cout << "    " << matrix[2][0] << " | " << matrix[2][1] << " | " << matrix[2][2];
    	std::cout << "\n      |   |";
		std::cout << "\n\n";
}//end of dis

void check(){// check for a win or a draw
	// check for player win
	if(matrix[0][0] == 'X' and matrix[1][0] == 'X' and matrix[2][0] =='X'){// left side
		std::cout << "\n\tPlayer wins left side!\n";
		win++;
	}//end of left side if
	if(matrix[0][1] == 'X' and matrix[1][1] == 'X' and matrix[2][1] =='X'){// middle column
		std::cout << "\n\tPlayer wins middle column!\n";
		win++;
	}//end of middle if
	if(matrix[0][2] == 'X' and matrix[1][2] == 'X' and matrix[2][2] =='X'){// right side
		std::cout << "\n\tPlayer wins right side!\n";
		win++;
	}//end of right side if
	if(matrix[0][0] == 'X' and matrix[0][1] == 'X' and matrix[0][2] =='X'){// top row
		std::cout << "\n\tPlayer wins top row!\n";
		win++;
	}//end of top row if
	if(matrix[1][0] == 'X' and matrix[1][1] == 'X' and matrix[1][2] =='X'){// middle row
		std::cout << "\n\tPlayer wins middle row!\n";
		win++;
	}// end of middle row if
	if(matrix[2][0] == 'X' and matrix[2][1] == 'X' and matrix[2][2] =='X'){// bottom row
		std::cout << "\n\tPlayer wins bottom row!\n";
		win++;
	}//end of bottom row if
	if(matrix[0][0] == 'X' and matrix[1][1] == 'X' and matrix[2][2] =='X'){// down diagonal
		std::cout << "\n\tPlayer wins down diagonal!\n";
		win++;
	}// end of down diagonal
	if(matrix[2][0] == 'X' and matrix[1][1] == 'X' and matrix[0][2] =='X'){// up diagonal
		std::cout << "\n\tPlayer wins up diagonal!\n";
		win++;
	}//end of up diagonal

	// check for computer win
	if(matrix[0][0] == 'O' and matrix[1][0] == 'O' and matrix[2][0] =='O'){// left side
		std::cout << "\n\tComputer wins left side!\n";
		win++;
	}//end of left side if
	if(matrix[0][1] == 'O' and matrix[1][1] == 'O' and matrix[2][1] =='O'){// middle column
		std::cout << "\n\tComputer wins middle column!\n";
		win++;
	}//end of middle if
	if(matrix[0][2] == 'O' and matrix[1][2] == 'O' and matrix[2][2] =='O'){// right side
		std::cout << "\n\tComputer wins right side!\n";
		win++;
	}//end of right side if
	if(matrix[0][0] == 'O' and matrix[0][1] == 'O' and matrix[0][2] =='O'){// top row
		std::cout << "\n\tComputer wins top row!\n";
		win++;
	}//end of top row if
	if(matrix[1][0] == 'O' and matrix[1][1] == 'O' and matrix[1][2] =='O'){// middle row
		std::cout << "\n\tComputer wins middle row!\n";
		win++;
	}// end of middle row if
	if(matrix[2][0] == 'O' and matrix[2][1] == 'O' and matrix[2][2] =='O'){// bottom row
		std::cout << "\n\tComputer wins bottom row!\n";
		win++;
	}//end of bottom row if
	if(matrix[0][0] == 'O' and matrix[1][1] == 'O' and matrix[2][2] =='O'){// down diagonal
		std::cout << "\n\tComputer wins down diagonal!\n";
		win++;
	}// end of down diagonal
	if(matrix[2][0] == 'O' and matrix[1][1] == 'O' and matrix[0][2] =='O'){// up diagonal
		std::cout << "\n\tComputer wins up diagonal!\n";
		win++;
	}//end of up diagonal
}// end of check
int main() {
std::srand(static_cast<unsigned int>(std::time(0)));

	while(win == 0){
	check();
	dis();
	// get and place player mark
	placed = 0;
	if(win == 0){
		while(placed == 0){
			std::cout << "PLayer Row(1-3)? ";
			std::cin >> row;

			std::cout << "Player Column(1-3)? ";
			std::cin >> col;

			if(matrix[row-1][col-1] == '-'){
				matrix[row-1][col-1] = 'X';
				placed++;
		}// end of if fill if spot is empty
		else {
			std::cout << "Occupied!\n";
		}//end of else
	}}//end of while placed
dis();
check();

	// get and place comp mark
	notfull = 0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matrix[i][j] == '-'){notfull++;}
		}
	}
	if(notfull == 0){win++;
		std::cout << "\n\tDraw!\n";
		break;}
placed = 0;
	while(placed == 0){
		ccol = rand()%3+1;
		crow = rand()%3+1;
		std::cout << "computer row: " << crow << "\n";
		std::cout << "computer column: " << ccol << "\n";
		if(matrix[crow-1][ccol-1] == '-'){
		matrix[crow-1][ccol-1] = 'O';
		placed++;
//		check();
	}// end of fill if spot is empty
}// end of whle placed
	// dis();
}//end of while win == 0 
	dis();
    return 0;
}
