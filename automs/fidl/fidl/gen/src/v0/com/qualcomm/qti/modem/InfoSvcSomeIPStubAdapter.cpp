/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v0/com/qualcomm/qti/modem/InfoSvcSomeIPStubAdapter.hpp>
#include <v0/com/qualcomm/qti/modem/InfoSvc.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace com {
namespace qualcomm {
namespace qti {
namespace modem {

std::shared_ptr<CommonAPI::SomeIP::StubAdapter> createInfoSvcSomeIPStubAdapter(
                   const CommonAPI::SomeIP::Address &_address,
                   const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared< InfoSvcSomeIPStubAdapter<::v0::com::qualcomm::qti::modem::InfoSvcStub>>(_address, _connection, _stub);
}

void initializeInfoSvcSomeIPStubAdapter() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:com.qualcomm.qti.modem.InfoSvc:v0_1:modem.InfoSvc",
         0xed82, 0x1, 0, 1);
    CommonAPI::SomeIP::Factory::get()->registerStubAdapterCreateMethod(
        "com.qualcomm.qti.modem.InfoSvc:v0_1",
        &createInfoSvcSomeIPStubAdapter);
}

INITIALIZER(registerInfoSvcSomeIPStubAdapter) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeInfoSvcSomeIPStubAdapter);
}

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0
