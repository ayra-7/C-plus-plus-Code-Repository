// // Guess a Number Game With the help of C++
// 
// #include<iostream>
// #include<cstdlib>
// #include<ctime>
// using namespace std;
// int main()
// {
//     srand((unsigned int) time(NULL));
//     int number= (rand() % 100) + 1; // (599 % 100 = 99) +1 = 100  1-100
//     int guess = 0;
//     do
//     {
// 
//         cout<<"Enter Guess (1-100): ";
//         cin>> guess; 
// 
//         if(guess>number)
//             cout<<"Guess lower!"<<endl;
//         else if(guess<number)
//             cout<<"Guess higher!"<<endl;
//         else
//             cout<<"You WON!!!"<<endl;
//             
//     } while (guess !=number);
//     
//     return 0;
// }

// // TIC TAC TOE Game using C++
// 
// #include<iostream>
// #include <string>
// using namespace std;
// 
// // Player class to represent a player in game
// class Player {
// private:
//     char symbol;
//     string name;
// 
// public:
//     // Constructor
//     Player(char sym = 'X', string n = "Player X") : symbol(sym), name(n) {}
// 
//     // Getter methods
//     char getSymbol() const { return symbol; }
//     string getName() const { return name; }
// };
// 
// // Board class to manage game board
// class Board {
// private:
//     char grid[3][3];
//     int filledCells; // Counter for filled cells
//     
// public:
//     // Constructor to initialize the board
//     Board() : filledCells(0) {
//         for (int i = 0; i < 3; i++) {
//             for (int j = 0; j < 3; j++) {
//                 grid[i][j] = ' ';
//             }
//         }
//     }
// 
//     // Method to display the board
//     void drawBoard() const {
//         cout << "-------------" << endl;
//         for (int i = 0; i < 3; i++) {
//             cout << "| ";
//             for (int j = 0; j < 3; j++) {
//                 cout << grid[i][j] << " | ";
//             }
//             cout << endl << "-------------" << endl;
//         }
//     }
// 
//     // Method to check if a move is valid
//     bool isValidMove(int row, int col) const {
//         return (row >= 0 && row < 3 && col >= 0 && col < 3 && grid[row][col] == ' ');
//     }
// 
//     // Method to make a move
//     void makeMove(int row, int col, char symbol) {
//         if (isValidMove(row, col)) {
//             grid[row][col] = symbol;
//             filledCells++; // Increment counter when a cell is filled
//         }
//     }
// 
//     // Method to check for a win
//     bool checkWin(char symbol) const {
//         // Check rows
//         for (int i = 0; i < 3; i++) {
//             if (grid[i][0] == symbol && grid[i][1] == symbol && grid[i][2] == symbol) {
//                 return true;
//             }
//         }
//         
//         // Check columns
//         for (int i = 0; i < 3; i++) {
//             if (grid[0][i] == symbol && grid[1][i] == symbol && grid[2][i] == symbol) {
//                 return true;
//             }
//         }
//         
//         // Check diagonals
//         if (grid[0][0] == symbol && grid[1][1] == symbol && grid[2][2] == symbol) {
//             return true;
//         }
//         if (grid[0][2] == symbol && grid[1][1] == symbol && grid[2][0] == symbol) {
//             return true;
//         }
//         
//         return false;
//     }
// 
//     // Method to check if board is full using the counter
//     bool isFull() const {
//         return filledCells == 9;
//     }
//     
//     // Method to get the number of filled cells
//     int getFilledCellsCount() const {
//         return filledCells;
//     }
// };
// 
// // Game class to manage the game logic
// class TicTacToe {
// private:
//     Board board;
//     Player players[2];
//     int currentPlayerIndex;
// 
// public:
//     // Constructor
//     TicTacToe() : currentPlayerIndex(0) {
//         players[0] = Player('X', "Player X");
//         players[1] = Player('O', "Player O");
//     }
// 
//     // Method to get the current player
//     Player& getCurrentPlayer() {
//         return players[currentPlayerIndex];
//     }
// 
//     // Method to switch turns
//     void switchTurn() {
//         currentPlayerIndex = (currentPlayerIndex + 1) % 2;
//     }
// 
//     // Method to play the game
//     void play() {
//         int row, col;
//         cout << "Welcome to Tic-Tac-Toe!" << endl;
// 
//         while (!board.isFull()) {
//             // Display the board
//             board.drawBoard();
//             
//             Player& currentPlayer = getCurrentPlayer();
//             
//             // Get valid input
//             while (true) {
//                 cout << currentPlayer.getName() << " (" << currentPlayer.getSymbol() 
//                      << "), enter row (1-3) and column (1-3): ";
//                 cin >> row >> col;
//                 row--; col--; // Convert to 0-indexed
//                 
//                 if (board.isValidMove(row, col)) {
//                     break;
//                 } else {
//                     cout << "Invalid move. Try again." << endl;
//                 }
//             }
//             
//             // Make move
//             board.makeMove(row, col, currentPlayer.getSymbol());
//             
//             // Check for win
//             if (board.checkWin(currentPlayer.getSymbol())) {
//                 board.drawBoard();
//                 cout << currentPlayer.getName() << " wins!" << endl;
//                 return;
//             }
//             
//             // Switch turns
//             switchTurn();
//         }
//         
//         // Game ended in a draw
//         board.drawBoard();
//         cout << "It's a draw!" << endl;
//     }
// };
// 
// int main() {
//     // Creating game object 
//     TicTacToe game;
//     
//     // Starting the game
//     game.play();
//     return 0;
// }

// // ROCK PAPER SCISSORS Game using C++
// 
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// 
// using namespace std;
// 
// string getComputerChoice() {
//     int randomChoice = rand() % 3; // Generates 0, 1, or 2
//     if (randomChoice == 0) return "Rock";
//     else if (randomChoice == 1) return "Paper";
//     else return "Scissors";
// }
// 
// string determineWinner(string userChoice, string computerChoice) {
//     if (userChoice == computerChoice) return "It's a tie!";
//     if ((userChoice == "Rock" && computerChoice == "Scissors") ||
//         (userChoice == "Paper" && computerChoice == "Rock") ||
//         (userChoice == "Scissors" && computerChoice == "Paper")) {
//         return "You win!";
//     }
//     return "Computer wins!";
// }
// 
// int main() {
//     srand(time(0)); // Seed for random number generation
// 
//     string userChoice;
//     cout << "Welcome to Rock, Paper, Scissors!" << endl;
//     cout << "Enter your choice (Rock, Paper, Scissors): ";
//     cin >> userChoice;
// 
//     // Convert user input to proper case for comparison
//     for (auto &c : userChoice) c = tolower(c);
//     if (userChoice == "rock") userChoice = "Rock";
//     else if (userChoice == "paper") userChoice = "Paper";
//     else if (userChoice == "scissors") userChoice = "Scissors";
//     else {
//         cout << "Invalid choice! Please enter Rock, Paper, or Scissors." << endl;
//         return 1;
//     }
// 
//     string computerChoice = getComputerChoice();
//     cout << "Computer chose: " << computerChoice << endl;
// 
//     string result = determineWinner(userChoice, computerChoice);
//     cout << result << endl;
// 
//     return 0;
// }

// Connect Four Game using C++

// #include <iostream>
// #include <vector>
// 
// using namespace std;
// 
// // Constants for the game board
// const int ROWS = 6;
// const int COLS = 7;
// const char EMPTY = ' ';
// const char PLAYER1 = 'X';
// const char PLAYER2 = 'O';
// 
// // Function to print the game board
// void printBoard(const vector<vector<char>>& board) {
//     for (int i = 0; i < ROWS; ++i) {
//         for (int j = 0; j < COLS; ++j) {
//             cout << "| " << board[i][j] << " ";
//         }
//         cout << "|\n";
//     }
//     cout << "-----------------------------\n";
//     cout << "| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n";
//     cout << "-----------------------------\n";
// }
// 
// // Function to check if a column is valid for a move
// bool isValidMove(const vector<vector<char>>& board, int col) {
//     return col >= 0 && col < COLS && board[0][col] == EMPTY;
// }
// 
// // Function to make a move in a column
// void makeMove(vector<vector<char>>& board, int col, char player) {
//     for (int i = ROWS - 1; i >= 0; --i) {
//         if (board[i][col] == EMPTY) {
//             board[i][col] = player;
//             break;
//         }
//     }
// }
// 
// // Function to check if the board is full
// bool isBoardFull(const vector<vector<char>>& board) {
//     for (int i = 0; i < ROWS; ++i) {
//         for (int j = 0; j < COLS; ++j) {
//             if (board[i][j] == EMPTY) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// 
// int main() {
//     vector<vector<char>> board(ROWS, vector<char>(COLS, EMPTY));
//     bool player1Turn = true;
// 
//     cout << "Welcome to Connect 4!\n";
// 
//     while (true) {
//         printBoard(board);
// 
//         char currentPlayer = (player1Turn) ? PLAYER1 : PLAYER2;
//         cout << "Player " << currentPlayer << ", enter your move (1-7): ";
//         
//         int col;
//         cin >> col;
//         col--; // Convert to 0-based indexing
//         
//         if (isValidMove(board, col)) {
//             makeMove(board, col, currentPlayer);
//             if (isBoardFull(board)) {
//                 printBoard(board);
//                 cout << "It's a tie!\n";
//                 break;
//             }
//             player1Turn = !player1Turn; // Switch players
//         } else {
//             cout << "Invalid move. Try again.\n";
//         }
//     }
// 
//     return 0;
// }

// Create a Pong Game using C++

#include <iostream>
#include <conio.h>  // For _kbhit() and _getch()
#include <windows.h> // For Sleep()

using namespace std;

const int width = 40;
const int height = 20;
int ballX = width / 2, ballY = height / 2;
int playerY = height / 2, aiY = height / 2;
int ballDirX = -1, ballDirY = -1;

void Draw() {
    system("cls");
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (x == 0 || x == width - 1) cout << "|";
            else if (y == ballY && x == ballX) cout << "O";
            else if (x == 1 && (y == playerY || y == playerY - 1 || y == playerY + 1)) cout << "#";
            else if (x == width - 2 && (y == aiY || y == aiY - 1 || y == aiY + 1)) cout << "#";
            else cout << " ";
        }
        cout << endl;
    }
}

void Input() {
    if (_kbhit()) {
        char key = _getch();
        if (key == 'w' && playerY > 1) playerY--;
        if (key == 's' && playerY < height - 2) playerY++;
    }
}

void Logic() {
    ballX += ballDirX;
    ballY += ballDirY;

    // Ball collision with top and bottom
    if (ballY == 0 || ballY == height - 1) ballDirY *= -1;

    // Ball collision with player
    if (ballX == 2 && (ballY >= playerY - 1 && ballY <= playerY + 1)) ballDirX = 1;

    // Ball collision with AI
    if (ballX == width - 3 && (ballY >= aiY - 1 && ballY <= aiY + 1)) ballDirX = -1;

    // Simple AI movement
    if (aiY < ballY && aiY < height - 2) aiY++;
    if (aiY > ballY && aiY > 1) aiY--;

    // Ball out of bounds
    if (ballX == 0 || ballX == width - 1) {
        ballX = width / 2;
        ballY = height / 2;
        ballDirX *= -1;
    }
}

int main() {
    while (true) {
        Draw();
        Input();
        Logic();
        Sleep(50);
    }
    return 0;
}

