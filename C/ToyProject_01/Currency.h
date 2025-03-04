#pragma once
#include <stdio.h>
#include <stdbool.h>


extern int currentMoney;
extern int UpgradeCost;
extern bool isFail;

bool CanUpgrade(int cost);