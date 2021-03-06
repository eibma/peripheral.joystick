/*
 *      Copyright (C) 2015 Garrett Brown
 *      Copyright (C) 2015 Team XBMC
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "DatabaseJoystickAPI.h"
#include "api/JoystickManager.h"
#include "storage/Device.h"

using namespace JOYSTICK;

bool CDatabaseJoystickAPI::GetFeatures(const CDevice& driverInfo, const std::string& controllerId, FeatureVector& features)
{
  CJoystickManager::Get().GetFeatures(driverInfo.Provider(), controllerId, features);
  return !features.empty();
}

bool CDatabaseJoystickAPI::MapFeatures(const CDevice& driverInfo, const std::string& controllerId, const FeatureVector& features)
{
  return false;
}

bool CDatabaseJoystickAPI::ResetButtonMap(const CDevice& driverInfo, const std::string& controllerId)
{
  return false;
}
