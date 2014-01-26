/**
 * \file StockValue.h
 * \class StockAction::StockValue
 * \brief Representation of the value of a stock action at a given time.
 *
 * This class is the representation of a stock action's value at a given time.
 * It basically holds the monetary value (CAD) of the stock action and the time
 * at which the stock action had that value. This the stock action equivalent of
 * the point in pure math.
 *
 * \date Created on: Jan 18, 2014
 * \date Last change on: &DATE&
 *
 * \author Created by: julien 
 * \author Last change by: &AUTHOR&
 *
 * \version Commit Id: &REVISION&
 */

#ifndef STOCKVALUE_H_
#define STOCKVALUE_H_

#include "DateTime.h"

using CommonCPP::DateTime;

namespace StockAction
{

class StockValue
{
private:
	/**
	 * the value of the stock action (CAD)
	 */
	double value;
	/**
	 * the given time of that value
	 */
	DateTime* timePoint = NULL;

public:
	/**
	 * \brief Basic constructor of StockValue.
	 *
	 * Initialize value to 0 and time at current time.
	 */
	StockValue(void);

	/**
	 * \brief StockValue constructor with a given initial value at current time.
	 *
	 * \param iValue The given value at which the StockValue must be initialized.
	 */
	StockValue(const double iValue);

	/**
	 * \brief StockValue constructor with a given value and time.
	 *
	 * \param iValue The given value at which the StockValue must be initialized.
	 * \param iTime The given time at which the value was recorded.
	 */
	StockValue(const double iValue, const DateTime& iTime);

	/**
	 * \brief StockValue copy constructor.
	 *
	 * \param iStockValue The StockValue reference from which to initialize.
	 */
	StockValue(const StockValue& iStockValue);

	/**
	 * \brief StockValue assignment operator.
	 *
	 * \param iStockValue The right hand operand StockVakue.
	 *
	 * \return StockValue reference of the left hand operand.
	 */
	StockValue& operator=(StockValue iStockValue);

	/**
	 * \brief StockValue value setter.
	 *
	 * \param iValue The new value of the StockValue (CAD).
	 */
	void setValue(const double iValue);

	/**
	 * \brief StockValue value getter.
	 *
	 * \return The current value of the StockValue (CAD).
	 */
	double getValue(void);

	/**
	 * \brief StockValue time setter.
	 *
	 * \param iTime The new time of the StockValue.
	 */
	void setTime(const DateTime& iTime);

	/**
	 * \brief StockValue time getter.
	 *
	 * \return The current time of the StockValue.
	 */
	DateTime& getTime(void);

	/**
	 * \brief StockValue validity checker.
	 *
	 * \return True if the StockValue is valid, False otherwise.
	 */
	bool isValid(void);

	/**
	 * \brief StockValue destructor.
	 */
	virtual ~StockValue(void);
};

} /* namespace StockAction */

#endif /* STOCKVALUE_H_ */
