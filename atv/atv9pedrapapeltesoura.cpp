//faz um jogo da veia
//input -> 1 1
//      -> 2 1
// could later add 2 player functionality

#include <iostream>

void play(char (&matrix)[3][3], char xo, int x, int y);
void cpuplay(char (&matrix)[3][3]);
char checkvictory(char (&matrix)[3][3]);
void showgame(char (&matrix)[3][3]);

int main(){
    char matrix[3][3];

    std::string playerMove;
    std::cout << "say ur move: \n";
    std::getline(std::cin, playerMove);

    int x, y;
    x = playerMove.at(0) - '0';
    y = playerMove.at(2) - '0';
    
    return 0;
}