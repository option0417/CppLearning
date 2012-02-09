/*
 * AlphaBeta.h
 *
 *  Created on: Feb 8, 2012
 *      Author: option0417
 */

#ifndef ALPHABETA_H_
#define ALPHABETA_H_

#include "ABNode.h"
#include <iostream>
using namespace std;

namespace op {

class AlphaBeta {
public:
	AlphaBeta();
	~AlphaBeta();
	int process(ABNode*, int&, int&, int, bool);
	inline int max(int, int);
	inline int min(int, int);
private:
	int alpha;
	int beta;
	int depth;
};

} /* namespace op */
#endif /* ALPHABETA_H_ */