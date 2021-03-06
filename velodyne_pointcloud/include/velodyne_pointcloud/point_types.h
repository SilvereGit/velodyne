/* -*- mode: C++ -*-
 *
 *  Copyright (C) 2011, 2012 Austin Robot Technology
 *
 *  License: Modified BSD Software License Agreement
 *
 *  $Id: data_base.h 1554 2011-06-14 22:11:17Z jack.oquin $
 */

/** \file
 *
 *  Point Cloud Library point structures for Velodyne data.
 *
 *  @author Jesse Vera
 *  @author Jack O'Quin
 *  @author Piyush Khandelwal
 */

#ifndef __VELODYNE_POINTCLOUD_POINT_TYPES_H
#define __VELODYNE_POINTCLOUD_POINT_TYPES_H

#include <pcl/point_types.h>

namespace velodyne_pointcloud
{
  /** Euclidean Velodyne coordinate, including intensity and ring number. */
  struct PointXYZIR
  {
    union EIGEN_ALIGN16 {
      float data[4];
      struct {
        float x;
        float y;
        float z;
        float time;
      };
    };
    PCL_ADD_EIGEN_MAPS_POINT4D;
    float    intensity;                 ///< laser intensity reading
    uint16_t ring;                      ///< laser ring number
    uint16_t echo;
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
    uint16_t numecho;
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW     // ensure proper alignment
  } EIGEN_ALIGN16;

}; // namespace velodyne_pointcloud


POINT_CLOUD_REGISTER_POINT_STRUCT(velodyne_pointcloud::PointXYZIR,
                                  (float, x, x)
                                  (float, y, y)
                                  (float, z, z)
                                  (float, time, time)
                                  (float, intensity, intensity)
                                  (uint16_t, ring, ring)
                                  (uint16_t, echo, echo)
                                  (uint8_t, r, r)
                                  (uint8_t, g, g)
                                  (uint8_t, b, b)
                                  (uint8_t, a, a)
                                  (uint16_t, numecho, numecho))

#endif // __VELODYNE_POINTCLOUD_POINT_TYPES_H

