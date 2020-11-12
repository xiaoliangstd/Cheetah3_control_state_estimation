/*
 * Automatically Generated from Mathematica.
 * Thu 12 Dec 2019 13:00:30 GMT-05:00
 */

#ifndef SJ_3_FUNC_HH
#define SJ_3_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Sj_3_func_raw(double *p_output1, const double *var1);

  inline void Sj_3_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 18);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Sj_3_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // SJ_3_FUNC_HH
