#include<iostream>
#include "movement.h"
using namespace std;

Robot::Robot(){
  x = 0;
  y = 0;
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      robotLocation[i][j] = 0;
    }
  }
  robotLocation[x][y] = 1;
}

int Robot::getX() {
  return x;
}

int Robot::getY(){
  return y;
}

void Robot::setX(int x){
  this->x = x;
}

void Robot::setY(int y){
  this->y = y;
}

void Robot::moveRight(){
  int temp = y;
  if(y != 9){
    cout << "Move one to the right." << endl;
    y++;
    robotLocation[x][y] = 1;
    robotLocation[x][temp--] = 0;
  }else{
    cout << "The robot reaches to the right wall." << endl;
  }
}

void Robot::moveLeft(){
  int temp = y;
  if(y != 0){
    cout << "Move one to the left." << endl;
    y--;
    robotLocation[x][y] = 1;
    robotLocation[x][temp++] = 0;
  }else{
    cout << "The robot reaches to the left wall." << endl;
  }
}

void Robot::moveForward(){
  int temp = x;
  if(x != 0){
    cout << "Move one up." << endl;
    x--;
    robotLocation[x][y] = 1;
    robotLocation[temp++][y] = 0;
  }else{
    cout << "The robot reaches to the right wall." << endl;
  }
}

void Robot::moveBackward(){
  int temp = x;
  if(x != 9){
    cout << "Move one down." << endl;
    x++;
    robotLocation[x][y] = 1;
    robotLocation[temp--][y] = 0;
  }else{
    cout << "The robot reaches to the down wall." << endl;
  }
}

void Robot::moveRightWall(){
  if(y != 9){
    int temp = y;
    cout << "Move all the way to the right wall." << endl;
    y = 9;
    robotLocation[x][temp] = 0;
    robotLocation[x][y] = 1;
  }else{
    cout << "The robot reaches to the right wall." << endl;
  }
}

void Robot::moveLeftWall(){
  if(y != 0){
    int temp = y;
    cout << "Move all the way to the left wall." << endl;
    y = 0;
    robotLocation[x][temp] = 0;
    robotLocation[x][y] = 1;
  }else{
    cout << "The robots reaches to the left wall." << endl;
  }
}

void Robot::moveUpWall(){
  if(x != 0){
    int temp = x;
    cout << "Move all the way to the up wall." << endl;
    x = 0;
    robotLocation[temp][y] = 0;
    robotLocation[x][y] = 1;
  }else{
    cout << "The robot reaches to the up wall." << endl;
  }
}

void Robot::moveDownWall(){
  if(x != 9){
    int temp = x;
    cout << "Move all the way to the down wall." << endl;
    x = 9;
    robotLocation[temp][y] = 0;
    robotLocation[x][y] = 1;
  }else{
    cout << "The robot reaches to the down wall." << endl;
  }
}

void Robot::display(){
  cout << "Robot is at (" << x << "," << y << ")" << endl;
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      cout << robotLocation[i][j] << " ";
    }
    cout << endl;
  }
}
