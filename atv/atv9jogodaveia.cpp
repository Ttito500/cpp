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
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            matrix[i][j] = 'e';
        }
        
    }
    

    int i = 0;
    while (true)
    {
        if (i % 2 == 0)
        {
            std::string playerMove;
            std::cout << "say ur move: \n";
            std::getline(std::cin, playerMove);

            int x, y;
            x = playerMove.at(0) - '0';
            y = playerMove.at(2) - '0';
        }else
        {
            cpuplay(matrix);
        }
        
    }
    
    return 0;
}

void play(char (&matrix)[3][3], char xo, int x, int y){
    if (matrix[y][x] == 'e')
    {
        matrix[y][x] = xo;

    }else
    {
        std::cout << "faz o L\n";
    }
}