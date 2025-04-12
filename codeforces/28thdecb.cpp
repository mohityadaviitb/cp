#include <iostream>
using namespace std;

char findMissingLetter(char latinSquare[3][3]) {
    // Loop through rows and columns to find the missing letter
    for (char letter = 'A'; letter <= 'C'; ++letter) {
        int foundInRow = 0;
        // bool foundInCol = false;

        // Check rows and columns
        for (int i = 0; i < 3; ++i) {
            // cout << latinSquare[i][0] << letter << endl;
            // if (latinSquare[i][0] == letter){
            //     cout << "ram";
            // }
            for(int j=0;j<3;j++){
  if (latinSquare[i][j] == letter ) {
                foundInRow++;
                // cout << "j" << ;
            }
            }
          

         


            // if (latinSquare[0][i] == letter && latinSquare[1][i] == letter && latinSquare[2][i] == letter) {
            //     foundInCol = true;
            //      cout << "fc";
            // }
        }

        // If the letter is missing in either row or column, it's the missing one
      
  if (foundInRow != 3) {
            return letter;
        }
        // if (!foundInCol) {
        //     return letter;
        // }
    }

    // This should not happen in a valid Latin square
    return '?';
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        char latinSquare[3][3];

        // Input the Latin square
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                std::cin >> latinSquare[i][j];
            }
        }

        // Find and print the missing letter
        char missingLetter = findMissingLetter(latinSquare);
        std::cout << missingLetter << std::endl;
    }

    return 0;
}
