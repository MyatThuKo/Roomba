#include<iostream>
#include"movement.cpp"
using namespace std;

int main() {
  char menuSelection;
  Robot myRobot;

  cout << "Welcome to Roomba Project!" << endl;
  cout << "Please enter \'e\' to move to the right." << endl;
  cout << "Please enter \'w\' to move to the left." << endl;
  cout << "Please enter \'n\' to move forward." << endl;
  cout << "Please enter \'s\' to move backward." << endl;
  cout << "Please enter \'E\' to move until the right wall." << endl;
  cout << "Please enter \'W\' to move until the left wall." << endl;
  cout << "Please enter \'N\' to move until the front wall." << endl;
  cout << "Please enter \'S\' to move until the back wall." << endl;
  cout << "Please enter \'Q\' to quit." << endl;

  myRobot.display();

  while (menuSelection != 'Q') {
    cin >> menuSelection;

    switch (menuSelection) {
      case 'e':
      myRobot.moveRight();
      myRobot.display();
      break;
      case 'w':
      myRobot.moveLeft();
      myRobot.display();
      break;
      case 'n':
      myRobot.moveForward();
      myRobot.display();
      break;
      case 's':
      myRobot.moveBackward();
      myRobot.display();
      break;
      case 'E':
      myRobot.moveRightWall();
      myRobot.display();
      break;
      case 'W':
      myRobot.moveLeftWall();
      myRobot.display();
      break;
      case 'N':
      myRobot.moveUpWall();
      myRobot.display();
      break;
      case 'S':
      myRobot.moveDownWall();
      myRobot.display();
      break;
      case 'Q':
      cout << "Exit!" << endl;
    }
  }
  return 0;
}
