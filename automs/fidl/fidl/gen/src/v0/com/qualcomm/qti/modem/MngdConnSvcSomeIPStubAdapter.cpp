/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v0/com/qualcomm/qti/modem/MngdConnSvcSomeIPStubAdapter.hpp>
#include <v0/com/qualcomm/qti/modem/MngdConnSvc.hpp>

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

std::shared_ptr<CommonAPI::SomeIP::StubAdapter> createMngdConnSvcSomeIPStubAdapter(
                   const CommonAPI::SomeIP::Address &_address,
                   const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                   const std::shared_ptr<CommonAPI::StubBase> &_stub) {
    return std::make_shared< MngdConnSvcSomeIPStubAdapter<::v0::com::qualcomm::qti::modem::MngdConnSvcStub>>(_address, _connection, _stub);
}

void initializeMngdConnSvcSomeIPStubAdapter() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:com.qualcomm.qti.modem.MngdConnSvc:v0_1:modem.MngdConnSvc",
         0xed83, 0x1, 0, 1);
    CommonAPI::SomeIP::Factory::get()->registerStubAdapterCreateMethod(
        "com.qualcomm.qti.modem.MngdConnSvc:v0_1",
        &createMngdConnSvcSomeIPStubAdapter);
}

INITIALIZER(registerMngdConnSvcSomeIPStubAdapter) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeMngdConnSvcSomeIPStubAdapter);
}

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0
