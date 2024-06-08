//faz um jogo da veia
//input -> 1 1
//      -> 2 1
// could later add 2 player functionality

#include <iostream>

void play(char (&matrix)[3][3], char xo, int& i, int x, int y);
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

            play(matrix, 'x',i , x, y);
        }else
        {
            cpuplay(matrix);
        }
        
        showgame(matrix);

        if (checkvictory(matrix) == 'x')
        {
            std::cout << "x ganhou\n";
            break;
        } else if (checkvictory(matrix) == 'o')
        {
            std::cout << "o ganhou\n";
            break;
        } else if(checkvictory(matrix) == 'v')
        {
            std::cout << "deu veia\n";
            break;
        }
        
        i++;
    }
    
    return 0;
}

void play(char (&matrix)[3][3], char xo, int& i, int x, int y){
    if (matrix[x][y] == 'e')
    {
        matrix[x][y] = xo;

    }else
    {
        std::cout << "faz o L\n";
        i--;
    }
}

void cpuplay(char (&matrix)[3][3]){
    bool played = false;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if(matrix[i][j] == 'e')
            {
                matrix[i][j] = 'o';
                played = true;
                break;
            }
        }
        if (played)
        {
            break;
        }
    }    
}

char checkvictory(char (&matrix)[3][3]){ //returns the char of the player who won
    for (size_t i = 0; i < 3; i++) //teste das rows
    {
        if(matrix[i][0] ==  matrix[i][1] && matrix[i][1] == matrix[i][2]){
            return matrix[i][2];
            break;
        }   
    }

    for (size_t i = 0; i < 3; i++) // teste das coluns
    {
        if(matrix[0][i] == matrix[1][i] && matrix[1][i] == matrix[2][i]){
            return matrix[2][i];
            break;
        }
    }
    
    if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
    {
        return matrix[2][2];
    }

    if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0])
    {
        return matrix[2][0];
    }
    
    bool gameend = NULL;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 'e')
            {
                gameend = false;
                break;
            }
            if (gameend == false)
            {
                break;
            }else
            {
                gameend = true;
            }
            
        }
    }

    if (gameend)
    {
        return 'v';
    }
    
    return 'e';
}

void showgame(char (&matrix)[3][3]){
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}