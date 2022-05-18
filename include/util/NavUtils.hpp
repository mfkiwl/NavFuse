//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                     Navigation Utility Functions                                 //
//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  // 
// Author:      Parker Barrett                                                                      //
// Overview:    Header file for navigation utilities class.                                         //           
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////

// Include Headers
#include <Eigen/Dense>
using Eigen::MatrixXd;
using Eigen::VectorXd;

// IMU Sensor Class
class NavUtils {

    // Public Class Members/Functions
    public:

        /* @computeRotationFromQuaternion
            Inputs:
                qA2B: 4x1 dimensional quaternion relating reference frame A to frame B
            Outputs:
                RA2B: 3x3 dimensional directio cosines matrix relating reference frame A to frame B
            Description:
                Function which takes in a quaternion and computes the direction cosines matrix.
        */
        bool computeRotationFromQuaternion(Eigen::VectorXd &qA2B,
                                           Eigen::MatrixXd &RA2B);

    // Private Class Members/Function
    private:

};

