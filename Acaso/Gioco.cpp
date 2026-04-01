#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>

using namespace std;

const int GRID_SIZE = 10;
const char WATER = '~';
const char SHIP = '#';
const char HIT = 'X';
const char MISS = 'O';
const char UNKNOWN = '?';

struct Ship {
    int x, y;
    int length;
    bool isHorizontal;
    int hitsReceived;
    
    Ship(int x, int y, int len, bool horizontal) 
        : x(x), y(y), length(len), isHorizontal(horizontal), hitsReceived(0) {}
    
    bool isSunk() const {
        return hitsReceived == length;
    }
};

class BattagliaNavale {
private:
    vector<Ship> playerShips;
    vector<Ship> computerShips;
    char playerGrid[GRID_SIZE][GRID_SIZE];
    char computerGrid[GRID_SIZE][GRID_SIZE];
    char computerViewGrid[GRID_SIZE][GRID_SIZE]; // Quello che il giocatore vede
    int playerHits;
    int computerHits;
    
public:
    BattagliaNavale() : playerHits(0), computerHits(0) {
        srand(time(0));
        initializeGrids();
    }
    
    void initializeGrids() {
        for (int i = 0; i < GRID_SIZE; i++) {
            for (int j = 0; j < GRID_SIZE; j++) {
                playerGrid[i][j] = WATER;
                computerGrid[i][j] = WATER;
                computerViewGrid[i][j] = UNKNOWN;
            }
        }
        playerShips.clear();
        computerShips.clear();
        playerHits = 0;
        computerHits = 0;
    }
    
    void displayMenu() {
        cout << "\n╔════════════════════════════════════════╗\n";
        cout << "║     BENVENUTO A BATTAGLIA NAVALE!      ║\n";
        cout << "╚════════════════════════════════════════╝\n";
        cout << "\nNavi disponibili: 1 Corazzata(5), 2 Incrociatori(4),\n";
        cout << "                  3 Cacciatorpedinieri(3), 4 Sommergibili(2)\n";
    }
    
    int displayPlacementMenu() {
        cout << "\n╔════════════════════════════════════════╗\n";
        cout << "║   COME DESIDERI POSIZIONARE LE NAVI?   ║\n";
        cout << "╚════════════════════════════════════════╝\n";
        cout << "\n1. Posizionamento MANUALE\n";
        cout << "2. Posizionamento AUTOMATICO\n";
        cout << "\nScegli (1 o 2): ";
        int choice;
        cin >> choice;
        return choice;
    }
    
    bool isValidPosition(char grid[GRID_SIZE][GRID_SIZE], int x, int y, int length, bool isHorizontal) {
        if (isHorizontal) {
            if (y + length > GRID_SIZE) return false;
            for (int i = y; i < y + length; i++) {
                if (grid[x][i] != WATER) return false;
            }
        } else {
            if (x + length > GRID_SIZE) return false;
            for (int i = x; i < x + length; i++) {
                if (grid[i][y] != WATER) return false;
            }
        }
        return true;
    }
    
    void placeShip(char grid[GRID_SIZE][GRID_SIZE], int x, int y, int length, bool isHorizontal) {
        if (isHorizontal) {
            for (int i = y; i < y + length; i++) {
                grid[x][i] = SHIP;
            }
        } else {
            for (int i = x; i < x + length; i++) {
                grid[i][y] = SHIP;
            }
        }
    }
    
    void displayGrid(char grid[GRID_SIZE][GRID_SIZE], bool showShips, string title) {
        cout << "\n" << title << "\n";
        cout << "   ";
        for (int i = 0; i < GRID_SIZE; i++) {
            cout << setw(2) << i;
        }
        cout << "\n";
        
        for (int i = 0; i < GRID_SIZE; i++) {
            cout << setw(2) << i << " ";
            for (int j = 0; j < GRID_SIZE; j++) {
                if (!showShips && grid[i][j] == SHIP) {
                    cout << setw(2) << WATER;
                } else {
                    cout << setw(2) << grid[i][j];
                }
            }
            cout << "\n";
        }
    }
    
    void playerPlaceShips() {
        cout << "\n╔════════════════════════════════════════╗\n";
        cout << "║           POSIZIONA LE TUE NAVI        ║\n";
        cout << "╚════════════════════════════════════════╝\n";
        
        vector<pair<int, string>> ships = {
            {5, "Corazzata (5 caselle)"},
            {4, "Incrociatore 1 (4 caselle)"},
            {4, "Incrociatore 2 (4 caselle)"},
            {3, "Cacciatorpedinieri 1 (3 caselle)"},
            {3, "Cacciatorpedinieri 2 (3 caselle)"},
            {3, "Cacciatorpedinieri 3 (3 caselle)"},
            {2, "Sommergibile 1 (2 caselle)"},
            {2, "Sommergibile 2 (2 caselle)"},
            {2, "Sommergibile 3 (2 caselle)"},
            {2, "Sommergibile 4 (2 caselle)"}
        };
        
        for (auto& ship : ships) {
            bool placed = false;
            while (!placed) {
                displayGrid(playerGrid, true, "Il tuo campo:");
                
                cout << "\nPositionare " << ship.second << "\n";
                cout << "Riga (0-9): ";
                int x;
                cin >> x;
                cout << "Colonna (0-9): ";
                int y;
                cin >> y;
                cout << "Orizzontale? (1=si, 0=no): ";
                int h;
                cin >> h;
                
                if (x >= 0 && x < GRID_SIZE && y >= 0 && y < GRID_SIZE) {
                    if (isValidPosition(playerGrid, x, y, ship.first, h == 1)) {
                        placeShip(playerGrid, x, y, ship.first, h == 1);
                        playerShips.push_back(Ship(x, y, ship.first, h == 1));
                        placed = true;
                    } else {
                        cout << "Posizione non valida!\n";
                    }
                } else {
                    cout << "Coordinate fuori limite!\n";
                }
            }
        }
    }
    
    void autoPlacePlayerShips() {
        cout << "\n╔════════════════════════════════════════╗\n";
        cout << "║     POSIZIONAMENTO AUTOMATICO IN CORSO ║\n";
        cout << "╚════════════════════════════════════════╝\n";
        
        vector<int> shipLengths = {5, 4, 4, 3, 3, 3, 2, 2, 2, 2};
        int shipNumber = 1;
        
        for (int length : shipLengths) {
            bool placed = false;
            while (!placed) {
                int x = rand() % GRID_SIZE;
                int y = rand() % GRID_SIZE;
                bool horizontal = rand() % 2 == 0;
                
                if (isValidPosition(playerGrid, x, y, length, horizontal)) {
                    placeShip(playerGrid, x, y, length, horizontal);
                    playerShips.push_back(Ship(x, y, length, horizontal));
                    
                    string shipType;
                    if (length == 5) shipType = "Corazzata";
                    else if (length == 4) shipType = "Incrociatore";
                    else if (length == 3) shipType = "Cacciatorpediniere";
                    else shipType = "Sommergibile";
                    
                    cout << shipType << " " << shipNumber << " posizionata a Riga " << x 
                         << ", Colonna " << y << " (";
                    cout << (horizontal ? "Orizzontale" : "Verticale") << ")\n";
                    shipNumber++;
                    placed = true;
                }
            }
        }
        
        cout << "\nTutte le navi sono state posizionate!\n";
        displayGrid(playerGrid, true, "Il tuo campo:");
    }
    
    void computerPlaceShips() {
        vector<int> shipLengths = {5, 4, 4, 3, 3, 3, 2, 2, 2, 2};
        
        for (int length : shipLengths) {
            bool placed = false;
            while (!placed) {
                int x = rand() % GRID_SIZE;
                int y = rand() % GRID_SIZE;
                bool horizontal = rand() % 2 == 0;
                
                if (isValidPosition(computerGrid, x, y, length, horizontal)) {
                    placeShip(computerGrid, x, y, length, horizontal);
                    computerShips.push_back(Ship(x, y, length, horizontal));
                    placed = true;
                }
            }
        }
    }
    
    bool playerAttack() {
        displayGrid(computerViewGrid, false, "La griglia del nemico:");
        
        cout << "\nLa tua freccia (Riga Colonna): ";
        int x, y;
        cin >> x >> y;
        
        if (x < 0 || x >= GRID_SIZE || y < 0 || y >= GRID_SIZE) {
            cout << "Coordinate non valide!\n";
            return false;
        }
        
        if (computerViewGrid[x][y] != UNKNOWN) {
            cout << "Hai gia' sparato lì!\n";
            return false;
        }
        
        bool hit = false;
        for (auto& ship : computerShips) {
            if (ship.isHorizontal) {
                if (x == ship.x && y >= ship.y && y < ship.y + ship.length) {
                    ship.hitsReceived++;
                    computerViewGrid[x][y] = HIT;
                    hit = true;
                    playerHits++;
                    if (ship.isSunk()) {
                        cout << "HAI AFFONDATO UNA NAVE!\n";
                    } else {
                        cout << "COLPITO!\n";
                    }
                    return true;
                }
            } else {
                if (y == ship.y && x >= ship.x && x < ship.x + ship.length) {
                    ship.hitsReceived++;
                    computerViewGrid[x][y] = HIT;
                    hit = true;
                    playerHits++;
                    if (ship.isSunk()) {
                        cout << "HAI AFFONDATO UNA NAVE!\n";
                    } else {
                        cout << "COLPITO!\n";
                    }
                    return true;
                }
            }
        }
        
        if (!hit) {
            computerViewGrid[x][y] = MISS;
            cout << "MANCATO!\n";
        }
        return true;
    }
    
    void computerAttack() {
        int x, y;
        bool validMove = false;
        int attempts = 0;
        
        while (!validMove && attempts < 100) {
            x = rand() % GRID_SIZE;
            y = rand() % GRID_SIZE;
            
            if (playerGrid[x][y] != HIT && playerGrid[x][y] != MISS) {
                validMove = true;
            }
            attempts++;
        }
        
        if (!validMove) return;
        
        bool hit = false;
        for (auto& ship : playerShips) {
            if (ship.isHorizontal) {
                if (x == ship.x && y >= ship.y && y < ship.y + ship.length) {
                    ship.hitsReceived++;
                    playerGrid[x][y] = HIT;
                    hit = true;
                    computerHits++;
                    if (ship.isSunk()) {
                        cout << "Il computer ha affondato una tua nave!\n";
                    } else {
                        cout << "Il computer ha colpito!\n";
                    }
                    return;
                }
            } else {
                if (y == ship.y && x >= ship.x && x < ship.x + ship.length) {
                    ship.hitsReceived++;
                    playerGrid[x][y] = HIT;
                    hit = true;
                    computerHits++;
                    if (ship.isSunk()) {
                        cout << "Il computer ha affondato una tua nave!\n";
                    } else {
                        cout << "Il computer ha colpito!\n";
                    }
                    return;
                }
            }
        }
        
        if (!hit) {
            playerGrid[x][y] = MISS;
            cout << "Il computer ha mancato!\n";
        }
    }
    
    int countSunkShips(vector<Ship>& ships) {
        int count = 0;
        for (auto& ship : ships) {
            if (ship.isSunk()) count++;
        }
        return count;
    }
    
    void play() {
        displayMenu();
        
        int placementChoice = displayPlacementMenu();
        
        if (placementChoice == 2) {
            autoPlacePlayerShips();
        } else {
            playerPlaceShips();
        }
        
        computerPlaceShips();
        
        cout << "\nIl computer ha posizionato le sue navi!\n";
        cout << "Inizia la battaglia!\n";
        
        while (true) {
            cout << "\n╔════════════════════════════════════════╗\n";
            cout << "║           IL TUO TURNO                 ║\n";
            cout << "╚════════════════════════════════════════╝\n";
            
            if (!playerAttack()) {
                cout << "Mossa non valida, riprova!\n";
                continue;
            }
            
            if (countSunkShips(computerShips) == computerShips.size()) {
                cout << "\n╔════════════════════════════════════════╗\n";
                cout << "║   🎉  HAI VINTO LA BATTAGLIA!  🎉    ║\n";
                cout << "╚════════════════════════════════════════╝\n";
                break;
            }
            
            cout << "\n╔════════════════════════════════════════╗\n";
            cout << "║        IL TURNO DEL COMPUTER           ║\n";
            cout << "╚════════════════════════════════════════╝\n";
            
            computerAttack();
            
            if (countSunkShips(playerShips) == playerShips.size()) {
                cout << "\n╔════════════════════════════════════════╗\n";
                cout << "║     IL COMPUTER HA VINTO!             ║\n";
                cout << "╚════════════════════════════════════════╝\n";
                break;
            }
            
            cout << "\nPremi Invio per continuare...\n";
            cin.ignore();
            cin.ignore();
        }
    }
};

int main() {
    BattagliaNavale game;
    char playAgain;
    
    do {
        game.play();
        
        cout << "\n\nVuoi giocare ancora? (s/n): ";
        cin >> playAgain;
        
        if (playAgain == 's' || playAgain == 'S') {
            game = BattagliaNavale();
        }
    } while (playAgain == 's' || playAgain == 'S');
    
    cout << "\nGrazie per aver giocato! Arrivederci.\n";
    
    return 0;
}
