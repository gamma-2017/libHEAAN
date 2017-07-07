#include "TestScheme.h"

int main() {

	//-----------------------------------------

	/*
	 * Params: logN, logl, logp, L, logSlots
	 * Suggested: 13, 2, 30, 5, 3
	 */

	TestScheme::testEncodeBatch(13, 5, 30, 4, 3);

	/*
	 * Params: logN, logl, logp, L, logSlots
	 * Suggested: 13, 2, 30, 5, 3
	 */

	TestScheme::testConjugateBatch(13, 5, 30, 4, 3);

	//-----------------------------------------

	/*
	 * Params: logN, logl, logp, L, rotlogSlots, logSlots
	 * Suggested: 13, 2, 30, 5, 0, 3
	 */

	TestScheme::testLeftRotateBatch(13, 2, 30, 4, 17, 3);
	TestScheme::testSlotsSum(13, 2, 30, 4, 12);

	//-----------------------------------------

	/*
	 * Params: logN, logl, logp, L, logDegree, logSlots
	 * Suggested: 13, 2, 30, 5, 4, 3
	 * Suggested: 15, 2, 56, 11, 10, 3
	 */

	TestScheme::testPowerOf2Batch(13, 2, 30, 5, 4, 3);

	//-----------------------------------------

	/*
	 * Params: logN, logl, logp, L, degree, logSlots
	 * Suggested: 13, 2, 30, 5, 13, 3
	 * Suggested: 15, 2, 56, 11, 903, 3
	 */

	TestScheme::testPowerBatch(15, 4, 56, 11, 1024, 3);

	//-----------------------------------------


	//-----------------------------------------

	/*
	 * Params: logN, logl, logp, L, invSteps, logSlots
	 * Suggested: 13, 3, 25, 10, 8, 3
	 * Suggested: 14, 3, 32, 10, 8, 3
	 */

	TestScheme::testInverseBatch(13, 3, 25, 10, 8, 3);

	//-----------------------------------------

	/*
	 * Params: logN, logl, logp, L, degree, logSlots
	 * Suggested: 13, 2, 35, 5, 8, 3
	 * Suggested: 13, 37, 35, 4, 8, 3 (for lazy)
	 */

	TestScheme::testLogarithmBatch(13, 4, 35, 6, 10, 3);

	//-----------------------------------------

	/*
	 * Params: logN, logl, logp, L, degree, logSlots
	 * Suggested: 13, 2, 35, 5, 8, 3
	 * Suggested: 13, 37, 35, 4, 8, 3 (for lazy)
	 */

	TestScheme::testExponentBatch(19, 4, 35, 50, 7, 3); // less than 1 minute
	TestScheme::testExponentBatch(13, 4, 35, 6, 10, 3);
	TestScheme::testExponentBatchLazy(13, 37, 35, 4, 8, 3);

	//-----------------------------------------

	/*
	 * Params: logN, logl, logp, L, degree, logSlots
	 * Suggested: 13, 1, 35, 5, 7, 3
	 * Suggested: 13, 36, 35, 4, 7, 3 (for lazy)
	 */

	TestScheme::testSigmoidBatch(13, 2, 35, 5, 7, 3);
	TestScheme::testSigmoidBatchLazy(13, 36, 35, 4, 7, 3);

	//-----------------------------------------

	/*
	 * Params: logN, logl, logp, L, logfftdim, logSlots
	 * Suggested: 14, 7, 50, 3, 4, 3;
	 * Suggested: 14, 57, 50, 2, 4 (for lazy)
	 */

	TestScheme::testFFTBatch(13, 7, 50, 4, 4, 3);
	TestScheme::testFFTLazy(13, 51, 50, 2, 4);

	return 0;
}