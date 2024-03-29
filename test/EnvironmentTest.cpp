/*
 *  Distributed under our modified Boost Software License.
 *  Version 1.0 (see accompanying file LICENSE)
 */
/**
 *  @file       EnvironmentTest.cpp
 *  @author     Lydia Zoghbi
 *  @copyright  Copyright ARL 2019
 *  @date       10/13/2019
 *  @version    1.0
 *
 *  @brief      Unit test
 *
 */

#include <gtest/gtest.h>
#include "Environment.hpp"

TEST(Environment, Constructor) {
   Point point1(0.1, 0.2, 0.3);
   Point point2(0.5, 0.6, 0.7);
   Obstacle obstacle1(point1, 0.5);
   Obstacle obstacle2(point2, 1.0);

   std::vector<Obstacle> allObstacles;;
   allObstacles.push_back(obstacle1);
   allObstacles.push_back(obstacle2);

   Environment dummyEnvironment(allObstacles);
   std::vector<Obstacle> retrievedObstacles = dummyEnvironment.getObstacles();
   Obstacle retrievedObstacle1 = retrievedObstacles[0];
   Obstacle retrievedObstacle2 = retrievedObstacles[1];

   Point centroid1 = retrievedObstacle1.getCentroid();
   Point centroid2 = retrievedObstacle2.getCentroid();
   double radius1 = retrievedObstacle1.getRadius();
   double radius2 = retrievedObstacle2.getRadius();

   EXPECT_EQ(0.1, centroid1.getX());
   EXPECT_EQ(0.2, centroid1.getY());
   EXPECT_EQ(0.3, centroid1.getZ());
   EXPECT_EQ(0.5, radius1);

   EXPECT_EQ(0.5, centroid2.getX());
   EXPECT_EQ(0.6, centroid2.getY());
   EXPECT_EQ(0.7, centroid2.getZ());
   EXPECT_EQ(1.0, radius2);
}

