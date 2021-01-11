#pragma once

#include <vector>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1710. Maximum Units on a Truck
    /// https://leetcode.com/problems/maximum-units-on-a-truck/
    /// </summary>
    class Q1710
    {
    public:
        int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
            int boxTypesSize = boxTypes.size();
            for (int i = 0; i < boxTypesSize; ++i)
            {
                int max = boxTypes[i][1];
                int maxIdx = i;
                for (int j = i + 1; j < boxTypesSize; ++j)
                {
                    if (max < boxTypes[j][1])
                    {
                        max = boxTypes[j][1];
                        maxIdx = j;
                    }
                }

                boxTypes[i].swap(boxTypes[maxIdx]);
            }

            int units = 0;
            for (int i = 0; i < boxTypesSize; ++i)
            {
                if (truckSize <= boxTypes[i][0])
                {
                    units += truckSize * boxTypes[i][1];
                    truckSize = 0;
                    break;
                }

                units += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }

            return units;
        }
    };
}