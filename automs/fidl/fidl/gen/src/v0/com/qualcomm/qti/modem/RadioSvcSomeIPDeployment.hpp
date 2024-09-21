/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */

#ifndef V0_COM_QUALCOMM_QTI_MODEM_Radio_Svc_SOMEIP_DEPLOYMENT_HPP_
#define V0_COM_QUALCOMM_QTI_MODEM_Radio_Svc_SOMEIP_DEPLOYMENT_HPP_

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
namespace RadioSvc_ {

// Interface-specific deployment types
typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> RatDeployment_t;
typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> NetRegStateDeployment_t;
typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> NRDcnrRestrictionDeployment_t;
typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> StatesDeployment_t;
typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> CellInfoStatusDeployment_t;
typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> SigTypeDeployment_t;
typedef CommonAPI::SomeIP::EnumerationDeployment<uint32_t> SigIndicationTypeDeployment_t;
typedef CommonAPI::SomeIP::IntegerDeployment<uint32_t> RatBitMaskDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::IntegerDeployment<uint32_t>
> GsmSignalMetricsDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::IntegerDeployment<uint32_t>,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>
> UmtsSignalMetricsDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>
> LteSignalMetricsDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>
> Nr5gSignalMetricsDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    ::v0::com::qualcomm::qti::modem::RadioSvc_::SigIndicationTypeDeployment_t,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::IntegerDeployment<int32_t>,
    CommonAPI::SomeIP::IntegerDeployment<uint16_t>
> SigStrengthIndicationDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::SomeIP::IntegerDeployment<uint16_t>,
    CommonAPI::EmptyDeployment,
    CommonAPI::SomeIP::IntegerDeployment<uint16_t>
> SigStrengthHysteresisDeployment_t;
typedef CommonAPI::SomeIP::VariantDeployment<
    CommonAPI::SomeIP::StructDeployment<
        CommonAPI::SomeIP::IntegerDeployment<int32_t>,
        CommonAPI::SomeIP::IntegerDeployment<uint32_t>
    >,
    CommonAPI::SomeIP::StructDeployment<
        CommonAPI::SomeIP::IntegerDeployment<int32_t>,
        CommonAPI::SomeIP::IntegerDeployment<uint32_t>,
        CommonAPI::SomeIP::IntegerDeployment<int32_t>
    >,
    CommonAPI::SomeIP::StructDeployment<
        CommonAPI::SomeIP::IntegerDeployment<int32_t>,
        CommonAPI::SomeIP::IntegerDeployment<int32_t>,
        CommonAPI::SomeIP::IntegerDeployment<int32_t>,
        CommonAPI::SomeIP::IntegerDeployment<int32_t>
    >,
    CommonAPI::SomeIP::StructDeployment<
        CommonAPI::SomeIP::IntegerDeployment<int32_t>,
        CommonAPI::SomeIP::IntegerDeployment<int32_t>,
        CommonAPI::SomeIP::IntegerDeployment<int32_t>
    >
> SignalMetricsDeployment_t;

// Type-specific deployments

// Attribute-specific deployments

// Argument-specific deployment

// Broadcast-specific deployments

} // namespace RadioSvc_
} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0

#endif // V0_COM_QUALCOMM_QTI_MODEM_Radio_Svc_SOMEIP_DEPLOYMENT_HPP_