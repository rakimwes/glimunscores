//
//  main.cpp
//  glimun_scores
//
//  Created by Rachel Westrick on 12/1/18.
//  Copyright © 2018 Rachel Westrick. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    double one, two, three, four, five = 0;
    while (true) {
        cout << "enter values separated by spaces:\n";
        cin >> one >> two >> three >> four >> five;
        
        double average = (one + two * 2 + three * 3 + four * 4 + five * 5) / (one + two + three + four + five);
        
        cout << "average score is: " << average << endl;
    }
}
