/*
 * Automatically Generated from Mathematica.
 * Fri 10 May 2019 20:22:36 GMT-04:00
 */

#ifndef JJ_2_FUNC_FULLY_HH
#define JJ_2_FUNC_FULLY_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void jj_2_func_fully_raw(double *p_output1, const double *var1,const double *var2);

  inline void jj_2_func_fully(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 18, 1);
    assert_size_matrix(var2, 18, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 12, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    jj_2_func_fully_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JJ_2_FUNC_FULLY_HH