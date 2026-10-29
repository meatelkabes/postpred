/******************************************
* Автор:    Карнаухов Фёдор               *
* Название: Циклы с пред и пост условием  *
* Вариант:  7                             *
******************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int container = 15;
  int pressure = 760;
  double workingVolume, numberOfSwings, residualPressure;
  int initialSwings = 10;
  int firstThreshold = 50;
  int firstStep = 10;
  int secondThreshold = 250;
  int secondStep = 50;

  cout << "working Volume = ";
  cin >> workingVolume;

  numberOfSwings = initialSwings;

  while (numberOfSwings <= firstThreshold) {
      residualPressure = pressure * pow((container / (container + workingVolume)), numberOfSwings);
      cout << numberOfSwings << "\t\t" << residualPressure << endl;

      numberOfSwings += firstStep;
  }

  numberOfSwings = 100; 

  do {
      residualPressure = pressure * pow((container / (container + workingVolume)), numberOfSwings);
      cout << numberOfSwings << "\t\t" << residualPressure << endl;
      numberOfSwings += secondStep;
  } while (numberOfSwings <= secondThreshold);
}