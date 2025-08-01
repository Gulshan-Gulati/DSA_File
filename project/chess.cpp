#include <iostream>
#include <vector>
#include <string>
#include <memory>

class Piece {
public:
    virtual char getSymbol() const = 0;
    virtual bool isValidMove(int startRow, int startCol, int endRow, int endCol, const std::vector<std::vector<std::shared_ptr<Piece>>>& board) const = 0;
    virtual ~Piece() {}
};

class King : public Piece {
public:
    char getSymbol() const override { return 'K'; }
    bool isValidMove(int startRow, int startCol, int endRow, int endCol, const std::vector<std::vector<std::shared_ptr<Piece>>>& board) const override {
        int rowDiff = std::abs(startRow - endRow);
        int colDiff = std::abs(startCol - endCol);
        return (rowDiff <= 1 && colDiff <= 1);
    }
};

class Board {
private:
    std::vector<std::vector<std::shared_ptr<Piece>>> board;

public:
    Board() {
        board.resize(8, std::vector<std::shared_ptr<Piece>>(8, nullptr));
        board[0][4] = std::make_shared<King>();
        board[7][4] = std::make_shared<King>();
    }

    void display() const {
        for (int row = 0; row < 8; ++row) {
            for (int col = 0; col < 8; ++col) {
                if (board[row][col]) {
                    std::cout << board[row][col]->getSymbol() << " ";
                } else {
                    std::cout << ". ";
                }
            }
            std::cout << std::endl;
        }
    }

    bool movePiece(int startRow, int startCol, int endRow, int endCol) {
        if (startRow < 0 || startRow >= 8 || startCol < 0 || startCol >= 8 || endRow < 0 || endRow >= 8 || endCol < 0 || endCol >= 8) {
            return false;
        }

        if (board[startRow][startCol] && board[startRow][startCol]->isValidMove(startRow, startCol, endRow, endCol, board)) {
            board[endRow][endCol] = board[startRow][startCol];
            board[startRow][startCol] = nullptr;
            return true;
        }
        return false;
    }
};

int main() {
    Board board;
    std::string input;
    int startRow, startCol, endRow, endCol;

    while (true) {
        board.display();
        std::cout << "Enter move (e.g., 0 4 1 4 for moving from (0, 4) to (1, 4)): ";
        std::cin >> startRow >> startCol >> endRow >> endCol;

        if (!board.movePiece(startRow, startCol, endRow, endCol)) {
            std::cout << "Invalid move. Try again.\n";
        }
    }

    return 0;
}
