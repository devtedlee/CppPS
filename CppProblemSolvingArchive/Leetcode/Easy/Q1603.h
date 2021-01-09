#pragma once

#include <string>

using namespace std;

namespace leetcode
{
    /// <summary>
    /// 1603. Design Parking System
    /// https://leetcode.com/problems/design-parking-system/
    /// </summary>
    class ParkingSystem {
    public:
        ParkingSystem(int big, int medium, int small)
            : mBig(big)
            , mMedium(medium)
            , mSmall(small)
        {
        }

        bool addCar(int carType) {
            bool isSuccess = false;
            switch (carType)
            {
            case 1:
                if (mBig != 0)
                {
                    --mBig;
                    isSuccess = true;
                }
                break;
            case 2:
                if (mMedium != 0)
                {
                    --mMedium;
                    isSuccess = true;
                }
                break;
            case 3:
                if (mSmall != 0)
                {
                    --mSmall;
                    isSuccess = true;
                }
                break;
            }

            return isSuccess;
        }
    private:
        int mBig = 0;
        int mMedium = 0;
        int mSmall = 0;
    };
}