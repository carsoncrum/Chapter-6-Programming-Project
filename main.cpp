// Calculating Celcius from Fahrenheit

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double calculateScore(vector<double> scores) {

  sort(scores.begin(), scores.end());
  
  scores.erase(scores.begin());
  scores.pop_back();
 
  double sum = 0;
  for (double score : scores) {
    sum += score;
  }
  return sum / scores.size();
}
int main() {
  vector<double> scores(5);

  cout << "Enter the scores for the contestant (separated by spaces): ";
  for (int i = 0; i < 5; i++) {
    cin >> scores[i];
  }

  double Score = calculateScore(scores);
  cout << "The contestant's final score is: " << Score << endl;
  return 0;
}