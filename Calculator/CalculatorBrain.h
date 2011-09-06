//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Jorge Santos on 11-08-12.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//



@interface CalculatorBrain : NSObject {
    double operand;
    NSString *waitingOperation;
    double waitingOperand;
}

- (void)setOperand:(double)aDouble;
- (double)performOperation:(NSString *)operation;

@end
