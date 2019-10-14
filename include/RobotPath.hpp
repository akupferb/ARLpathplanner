/*
 *  Distributed under the Boost Software License.
 *  Version 1.0 (See accompanying file LICENSE_1_0.txt
 *  or copy at http://www.boost.org/LICENSE_1_0.txt)
 */
/**
 *  @file       RobotPath.hpp
 *  @author     Lydia Zoghbi
 *  @copyright  Copyright 2019 ARL. All rights reserved as per license.
 *  @date       10/13/2019
 *  @version    1.0
 *
 *  @brief      Header file for consructing a robot path 
 *
 */

#ifndef INCLUDE_ROBOTPATH_HPP_
#define INCLUDE_ROBOTPATH_HPP_
#include <vector>
#include <RobotPosition.hpp>

/**
 *  @brief      Class for creating a robot path
 */

class RobotPath {
private:
    std::vector<RobotPosition> robotPositions;
public:

/**
 *  @brief      Constructor for a RobotPath object
 *  @param	Vector of RobotPosition class containing the position of Robot's joints
 *  @return	Instance of RobotPath
 */
    explicit RobotPath(std::vector<RobotPosition> newRobotPositions);

/**
 *  @brief      Retrieve positions from the RobotPosition class
 *  @param	None
 *  @return	Vector of RobotPosition object
 */
    std::vector<RobotPosition> getPositions();

/**
 *  @brief      Check for collision with obstacles
 *  @param	None
 *  @return	Boolean true for collision with obstacles
 */
    bool existsCollision();
};
#endif // INCLUDE_ROBOTPATH_HPP_
