/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */

#ifndef V0_COM_QUALCOMM_QTI_MODEM_COMMON_TYPES_SOMEIP_DEPLOYMENT_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_COMMON_TYPES_SOMEIP_DEPLOYMENT_HPP_


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif
#include <CommonAPI/SomeIP/Deployment.hpp>
#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace com {
namespace qualcomm {
namespace qti {
namespace modem {
namespace CommonTypes_ {

// typecollection-specific deployment types
typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> ResultDeployment_t;

typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> OnOffTypeDeployment_t;

typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> PhoneIdDeployment_t;


// typecollection-specific deployments
COMMONAPI_EXPORT extern ResultDeployment_t ResultDeployment;
COMMONAPI_EXPORT extern OnOffTypeDeployment_t OnOffTypeDeployment;
COMMONAPI_EXPORT extern PhoneIdDeployment_t PhoneIdDeployment;

} // namespace CommonTypes_
} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0

#endif // V0_COM_QUALCOMM_QTI_MODEM_COMMON_TYPES_SOMEIP_DEPLOYMENT_HPP_
