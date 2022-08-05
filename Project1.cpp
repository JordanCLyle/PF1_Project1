#include <stdio.h> //Jordan Lyle 9/1/2021
#include <iostream> // Calling Libraries
#include <cmath>
using namespace std;

int main()
{
  float sphereRadius = 0;
  float handleRadius = 0;
  float handleLength = 0;   // Establishing volume and radius variables.
  float volumeSphere = 0;
  float volumeCylinder = 0;
  float volumeDumbbell = 0;
  
  const float densityAlum = 2.7;
  const float densityIron = 7.9; // Establishing constant densities.
  const float densityLead = 11.4;
  const float densityGold = 19.3;
  
  float massDumbAlum = 0;
  float massDumbIron = 0; // Establishing mass variables.
  float massDumbLead = 0;
  float massDumbGold = 0;
  
  cout << "sphereRadius: ";
  cin >> sphereRadius;
  cout <<  "handleRadius: ";  // Asking the user for radii and lengths.
  cin >> handleRadius;
  cout << "handleLength: ";
  cin >> handleLength;
  
  volumeSphere = (4*M_PI*(pow(sphereRadius, 3.0)))/3;
  volumeCylinder = M_PI*handleLength*pow(handleRadius, 2.0);
  volumeDumbbell = (2*volumeSphere) + volumeCylinder;
  massDumbAlum = (densityAlum * volumeDumbbell);             // Performing volume and mass calculations.
  massDumbIron = (densityIron * volumeDumbbell);
  massDumbLead = (densityLead * volumeDumbbell);
  massDumbGold = (densityGold * volumeDumbbell);
  
  cout << endl << "Volume of Sphere: " << volumeSphere << " cubic centimeters" << endl;
  cout << "Volume of Cylinder: " << volumeCylinder << " cubic centimeters" << endl;
  cout << "Volume of Dumbbell: " << volumeDumbbell << " cubic centimeters" << endl << endl;  // Outputting the final volumes and masses.
  cout << "Mass of Aluminum Dumbbell: " << massDumbAlum << " grams" << endl;
  cout << "Mass of Iron Dumbbell: " << massDumbIron << " grams" << endl;
  cout << "Mass of Lead Dumbbell: " << massDumbLead << " grams" << endl;
  cout << "Mass of Gold Dumbbell: " << massDumbGold << " grams" << endl;
  
  return 0;
}
