/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v0/com/qualcomm/qti/modem/InfoSvcSomeIPProxy.hpp>

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

std::shared_ptr<CommonAPI::SomeIP::Proxy> createInfoSvcSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection) {
    return std::make_shared< InfoSvcSomeIPProxy>(_address, _connection);
}

void initializeInfoSvcSomeIPProxy() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:com.qualcomm.qti.modem.InfoSvc:v0_1:modem.InfoSvc",
        0xed82, 0x1, 0, 1);
    CommonAPI::SomeIP::Factory::get()->registerProxyCreateMethod(
        "com.qualcomm.qti.modem.InfoSvc:v0_1",
        &createInfoSvcSomeIPProxy);
}

INITIALIZER(registerInfoSvcSomeIPProxy) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeInfoSvcSomeIPProxy);
}

InfoSvcSomeIPProxy::InfoSvcSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection)
        : CommonAPI::SomeIP::Proxy(_address, _connection)
{
}

InfoSvcSomeIPProxy::~InfoSvcSomeIPProxy() {
    completed_.set_value();
}



/*
 * description: 
 * Retrieves the International Mobile Equipment Identity (IMEI).
 */
void InfoSvcSomeIPProxy::GetImei(CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, std::string &_imei, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t> deploy_error(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment);
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_imei(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v0::com::qualcomm::qti::modem::CommonTypes::Result,
                ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t
            >,
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodWithReply(
        *this,
        CommonAPI::SomeIP::method_id_t(0x753a),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        _internalCallStatus,
        deploy_error,
        deploy_imei);
    _error = deploy_error.getValue();
    _imei = deploy_imei.getValue();
}

std::future<CommonAPI::CallStatus> InfoSvcSomeIPProxy::GetImeiAsync(GetImeiAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t> deploy_error(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment);
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_imei(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    return CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v0::com::qualcomm::qti::modem::CommonTypes::Result,
                ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t
            >,
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >
    >::callMethodAsync(
        *this,
        CommonAPI::SomeIP::method_id_t(0x753a),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t > _deploy_error, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > _imei) {
            if (_callback)
                _callback(_internalCallStatus, _deploy_error.getValue(), _imei.getValue());
        },
        std::make_tuple(deploy_error, deploy_imei));
}

void InfoSvcSomeIPProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 0;
    ownVersionMinor = 1;
}

std::future<void> InfoSvcSomeIPProxy::getCompletionFuture() {
    return completed_.get_future();
}

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0
