/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */

#ifndef V0_COM_QUALCOMM_QTI_MODEM_Mngd_Conn_Svc_SOMEIP_DEPLOYMENT_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_Mngd_Conn_Svc_SOMEIP_DEPLOYMENT_HPP_

#include <v0/com/qualcomm/qti/modem/CommonTypesSomeIPDeployment.hpp>

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
namespace MngdConnSvc_ {

// Interface-specific deployment types
typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> DataStateDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::SomeIP::StringDeployment,
    CommonAPI::SomeIP::StringDeployment,
    CommonAPI::SomeIP::StringDeployment,
    CommonAPI::SomeIP::StringDeployment,
    CommonAPI::SomeIP::IntegerDeployment<uint32_t>
> DataIPInfoDeployment_t;

// Type-specific deployments

// Attribute-specific deployments

// Argument-specific deployment

// Broadcast-specific deployments

} // namespace MngdConnSvc_
} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0

#endif // V0_COM_QUALCOMM_QTI_MODEM_Mngd_Conn_Svc_SOMEIP_DEPLOYMENT_HPP_