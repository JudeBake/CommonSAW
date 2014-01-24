/**
 * \file StockValue.cpp
 * \brief Implementation of the StockValue class.
 *
 * \date Created on: Jan 18, 2014
 * \date Last change on: &DATE&
 *
 * \author Created by: julien 
 * \author Last change by: &AUTHOR&
 *
 * \version Commit Id: &REVISION&
 */

#include "StockValue.h"

namespace StockAction
{

StockValue::StockValue()
{
	value = 0;
	timePoint = DateTime::getCurrentDateTime();
}

StockValue::StockValue(const double iValue)
{
	value = iValue;
	timePoint = DateTime::getCurrentDateTime();
}

StockValue::StockValue(const double iValue, const DateTime& iTime)
{
	value = iValue;
	timePoint = new DateTime();

	if (timePoint)
	{
		*timePoint = iTime;
	}
}

StockValue::StockValue(const StockValue& iStockValue)
{
	value = iStockValue.value;
	timePoint = new DateTime();

	if (timePoint)
	{
		*timePoint = iStockValue.timePoint;
	}

}

StockValue& StockValue::operator=(StockValue iStockValue)
{
	value = iStockValue.value;

	if (iStockValue.isValid())
	{
		*timePoint = iStockValue.timePoint;
	}

	return *this;
}

void StockValue::setValue(const double iValue)
{
	value = iValue;
}

double StockValue::getValue(void)
{
	return value;
}

void StockValue::setTime(const DateTime& iTime)
{
	timePoint = iTime;
}

DateTime& StockValue::getTime(void)
{
	return timePoint;
}

bool StockValue::isValid(void)
{
	bool validity = true;

	if (timePoint)
	{
		validity = false;
	}

	return timePoint;
}

virtual StockValue::~StockValue(void)
{
	delete timePoint;
}

} /* namespace StockAction */
