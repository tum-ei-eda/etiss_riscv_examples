#ifndef TVMGEN_DEFAULT_H_
#define TVMGEN_DEFAULT_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Input tensor input_1 size (in bytes) for TVM module "default" 
 */
#define TVMGEN_DEFAULT_INPUT_1_SIZE 27733168
/*!
 * \brief Output tensor Identity size (in bytes) for TVM module "default" 
 */
#define TVMGEN_DEFAULT_IDENTITY_SIZE 27257600
/*!
 * \brief Input tensor pointers for TVM module "default" 
 */
struct tvmgen_default_inputs {
  void* input_1;
};

/*!
 * \brief Output tensor pointers for TVM module "default" 
 */
struct tvmgen_default_outputs {
  void* Identity;
};

/*!
 * \brief entrypoint function for TVM module "default"
 * \param inputs Input tensors for the module 
 * \param outputs Output tensors for the module 
 */
int32_t tvmgen_default_run(
  struct tvmgen_default_inputs* inputs,
  struct tvmgen_default_outputs* outputs
);
/*!
 * \brief Workspace size for TVM module "default" 
 */
#define TVMGEN_DEFAULT_WORKSPACE_SIZE 768

#ifdef __cplusplus
}
#endif

#endif // TVMGEN_DEFAULT_H_
