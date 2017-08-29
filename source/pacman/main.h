#include "Pacman.h"
#include "Element.h"
#include "Constant.h"
#include <cstdlib>
#include <Windows.h>
#include <iostream>
#include <math.h>

using namespace std;
using namespace sf;

//setup game
void showMenu();
void clearVectors();
void initialize();
void reset();

//generate elements of the game
void generate();
void generateFood();
void generateGhost();
void generatePacman();
void generateMap();
void generateCherries();

//drawing
void drawMenu(RenderWindow &, int, Font &);
void draw(RenderWindow &, Font &);
void drawMaps(RenderWindow &);
void drawFoods(RenderWindow &);
void drawPacman(RenderWindow &);
void drawGhosts(RenderWindow &);
void drawCherries(RenderWindow &);

//control game
void controlGame();
void controlObject(Character &, bool);
void controlScore();
void crashGhost();
void eatCherry();
void eatFood();

//functionality
void pushToMap(int,int); 
void pushMultipleToMap(int,int); 
bool isContained(vector<Element>, Element);
bool isContained(vector<Character>, Character);
bool isContained(vector<Constant::Direction>, Constant::Direction);
bool isCrashed(float, float); //check if a character is gonna hit the map
Constant::Direction opositeOf(Constant::Direction); //return the oposite direction
vector<Constant::Direction> whereCanGo(float,float); //check all the directions that a ghost can go into
