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

#include <ctime>

#include "StockValue.h"

namespace StockAction
{

StockValue::StockValue()
{
	value = 0;
	timePoint.setTime(time(NULL));
}

StockValue::StockValue(const double iValue)
{
	value = iValue;
	timePoint.setTime(time(NULL));
}

StockValue::StockValue(const double iValue, const DateTime& iTime)
{
	value = iValue;
	timePoint = iTime;
}

StockValue::StockValue(const StockValue& iStockValue)
{
	value = iStockValue.value;
	timePoint = iStockValue.timePoint;
}

StockValue& StockValue::operator=(StockValue iStockValue)
{
	//TODO: verify syntax = operator override (how to create and return a ref object.)
	StockValue& newStockValue = new StockValue(iStockValue);
	return newStockValue;
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

} /* namespace StockAction */
