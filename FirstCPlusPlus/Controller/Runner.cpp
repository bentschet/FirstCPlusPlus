//
//  Runner.cpp
//  FirstCPlusPlus
//
//  Created by Tschetter, Benjamin on 1/23/17.
//  Copyright © 2017 Tschetter, Benjamin. All rights reserved.
//

#include "FirstController.h"

int main()
{
    int integers[5];
    int doubles[5];
    
    int integers [5] = {1, 2, 3, 4, 5};
    int doubles [5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    FirstController * app = new FirstController();
    app -> start();
    
    
    return 0;
}
