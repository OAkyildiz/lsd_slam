# LSD-SLAM: Large-Scale Direct Monocular SLAM

LSD-SLAM is a novel approach to real-time monocular SLAM. It is fully direct (i.e. does not use keypoints / features) and creates large-scale, 
semi-dense maps in real-time on a laptop. For more information see
[http://vision.in.tum.de/lsdslam](http://vision.in.tum.de/lsdslam)
where you can also find the corresponding publications and Youtube videos, as well as some 
example-input datasets, and the generated output as rosbag or .ply point cloud.

This fork contains a version that relieves the user of the horrors of a ROS dependency and uses the much nicer lightweight [Pangolin](https://github.com/stevenlovegrove/Pangolin) framework instead. 

### Related Papers

* **LSD-SLAM: Large-Scale Direct Monocular SLAM**, *J. Engel, T. Schöps, D. Cremers*, ECCV '14

* **Semi-Dense Visual Odometry for a Monocular Camera**, *J. Engel, J. Sturm, D. Cremers*, ICCV '13

# Fork

This fork is a personal attempt at using LSD-SLAM on Windows through Visual Studio.

## Setting Up External Libraries

See the [README](ext/README.md) in the `ext` (external) folder for instructions on how to setup the folder. The dependencies needed are:
- boost (1.60.0, http://www.boost.org/, use installer)
- dirent (https://github.com/tronkko/dirent, header only)
- eigen (https://github.com/RLovelett/eigen, http://eigen.tuxfamily.org/index.php?title=Main_Page, header only)
- g2o (https://github.com/RainerKuemmerle/g2o, build with cmake (VS2015))
  - ceres (will be built into the g2o dlls, copy the header files in EXTERNAL)
  - csparse (same)
  - freeglut (same)
- opencv3 (3.1.0, http://opencv.org/, use installer)
- openfabmap (https://github.com/arrenglover/openfabmap, build with cmake (VS2015), adjust options to include opencv3 AND opencv3 lib)
- sophus (https://github.com/stevenlovegrove/Sophus.git fork, header only)
- zlib (http://www.zlib.net/, build with cmake (VS2015)

## Modifications Made

- A fork of Sophus for MSVC was used
- https://github.com/strasdat/Sophus/issues/12
