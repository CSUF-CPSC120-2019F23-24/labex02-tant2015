// Name:David Nguyen
// This program calculates the tax and tip on a restaurant bill.
#include <iostream>
int main()
{
  double total_cost, tax, tip, total_bill;
  std :: cout << "Welcome to the Restaurant Bill Calculator!\n";
  std :: cout << "What is the total meal cost?  $";
  std :: cin >> total_cost;
  tax = total_cost * .0775;
  tip = total_cost * 0.2;
  total_bill = tip + tax + total_cost;
  std :: cout <<"Tax:          $" << tax << std :: endl;
  std :: cout <<"Tip:          $" << tip << std :: endl;
  std :: cout <<"Total Bill    $" << total_bill << std :: endl;

  return 0;
}
