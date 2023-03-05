/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v0/com/qualcomm/qti/modem/MngdConnSvcSomeIPProxy.hpp>

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

std::shared_ptr<CommonAPI::SomeIP::Proxy> createMngdConnSvcSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection) {
    return std::make_shared< MngdConnSvcSomeIPProxy>(_address, _connection);
}

void initializeMngdConnSvcSomeIPProxy() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:com.qualcomm.qti.modem.MngdConnSvc:v0_1:modem.MngdConnSvc",
        0xed83, 0x1, 0, 1);
    CommonAPI::SomeIP::Factory::get()->registerProxyCreateMethod(
        "com.qualcomm.qti.modem.MngdConnSvc:v0_1",
        &createMngdConnSvcSomeIPProxy);
}

INITIALIZER(registerMngdConnSvcSomeIPProxy) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeMngdConnSvcSomeIPProxy);
}

MngdConnSvcSomeIPProxy::MngdConnSvcSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection)
        : CommonAPI::SomeIP::Proxy(_address, _connection),
          dataState_(*this, 0x9300, CommonAPI::SomeIP::event_id_t(0x9301), CommonAPI::SomeIP::event_type_e::ET_EVENT , CommonAPI::SomeIP::reliability_type_e::RT_UNRELIABLE, false, std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr), static_cast< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t* >(nullptr)))
{
}

MngdConnSvcSomeIPProxy::~MngdConnSvcSomeIPProxy() {
    completed_.set_value();
}


MngdConnSvcSomeIPProxy::DataStateEvent& MngdConnSvcSomeIPProxy::getDataStateEvent() {
    return dataState_;
}

void MngdConnSvcSomeIPProxy::StartData(std::string _name, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t> deploy_error(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment);
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_name(_name, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v0::com::qualcomm::qti::modem::CommonTypes::Result,
                ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t
            >
        >
    >::callMethodWithReply(
        *this,
        CommonAPI::SomeIP::method_id_t(0x1301),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_name,
        _internalCallStatus,
        deploy_error);
    _error = deploy_error.getValue();
}

std::future<CommonAPI::CallStatus> MngdConnSvcSomeIPProxy::StartDataAsync(const std::string &_name, StartDataAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t> deploy_error(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment);
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_name(_name, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    return CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v0::com::qualcomm::qti::modem::CommonTypes::Result,
                ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t
            >
        >
    >::callMethodAsync(
        *this,
        CommonAPI::SomeIP::method_id_t(0x1301),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_name,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t > _deploy_error) {
            if (_callback)
                _callback(_internalCallStatus, _deploy_error.getValue());
        },
        std::make_tuple(deploy_error));
}

void MngdConnSvcSomeIPProxy::StopData(std::string _name, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t> deploy_error(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment);
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_name(_name, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v0::com::qualcomm::qti::modem::CommonTypes::Result,
                ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t
            >
        >
    >::callMethodWithReply(
        *this,
        CommonAPI::SomeIP::method_id_t(0x1302),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_name,
        _internalCallStatus,
        deploy_error);
    _error = deploy_error.getValue();
}

std::future<CommonAPI::CallStatus> MngdConnSvcSomeIPProxy::StopDataAsync(const std::string &_name, StopDataAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t> deploy_error(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment);
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_name(_name, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    return CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v0::com::qualcomm::qti::modem::CommonTypes::Result,
                ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t
            >
        >
    >::callMethodAsync(
        *this,
        CommonAPI::SomeIP::method_id_t(0x1302),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_name,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t > _deploy_error) {
            if (_callback)
                _callback(_internalCallStatus, _deploy_error.getValue());
        },
        std::make_tuple(deploy_error));
}

void MngdConnSvcSomeIPProxy::GetDataList(CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, uint8_t &_dataNum, std::vector< std::string > &_name, std::vector< MngdConnSvc::DataState > &_dataState, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t> deploy_error(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment);
    CommonAPI::Deployable< uint8_t, CommonAPI::SomeIP::IntegerDeployment<uint8_t>> deploy_dataNum(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr));
    CommonAPI::Deployable< std::vector< std::string >, CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::StringDeployment >> deploy_name(static_cast< CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::StringDeployment >* >(nullptr));
    CommonAPI::Deployable< std::vector< MngdConnSvc::DataState >, CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t >> deploy_dataState(static_cast< CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t >* >(nullptr));
    CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v0::com::qualcomm::qti::modem::CommonTypes::Result,
                ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t
            >,
            CommonAPI::Deployable<
                uint8_t,
                CommonAPI::SomeIP::IntegerDeployment<uint8_t>
            >,
            CommonAPI::Deployable<
                std::vector< std::string >,
                CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::StringDeployment >
            >,
            CommonAPI::Deployable<
                std::vector< MngdConnSvc::DataState >,
                CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t >
            >
        >
    >::callMethodWithReply(
        *this,
        CommonAPI::SomeIP::method_id_t(0x1303),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        _internalCallStatus,
        deploy_error,
        deploy_dataNum, deploy_name, deploy_dataState);
    _error = deploy_error.getValue();
    _dataNum = deploy_dataNum.getValue();
    _name = deploy_name.getValue();
    _dataState = deploy_dataState.getValue();
}

std::future<CommonAPI::CallStatus> MngdConnSvcSomeIPProxy::GetDataListAsync(GetDataListAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t> deploy_error(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment);
    CommonAPI::Deployable< uint8_t, CommonAPI::SomeIP::IntegerDeployment<uint8_t>> deploy_dataNum(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr));
    CommonAPI::Deployable< std::vector< std::string >, CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::StringDeployment >> deploy_name(static_cast< CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::StringDeployment >* >(nullptr));
    CommonAPI::Deployable< std::vector< MngdConnSvc::DataState >, CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t >> deploy_dataState(static_cast< CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t >* >(nullptr));
    return CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v0::com::qualcomm::qti::modem::CommonTypes::Result,
                ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t
            >,
            CommonAPI::Deployable<
                uint8_t,
                CommonAPI::SomeIP::IntegerDeployment<uint8_t>
            >,
            CommonAPI::Deployable<
                std::vector< std::string >,
                CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::StringDeployment >
            >,
            CommonAPI::Deployable<
                std::vector< MngdConnSvc::DataState >,
                CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t >
            >
        >
    >::callMethodAsync(
        *this,
        CommonAPI::SomeIP::method_id_t(0x1303),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t > _deploy_error, CommonAPI::Deployable< uint8_t, CommonAPI::SomeIP::IntegerDeployment<uint8_t> > _dataNum, CommonAPI::Deployable< std::vector< std::string >, CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::StringDeployment > > _name, CommonAPI::Deployable< std::vector< MngdConnSvc::DataState >, CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataStateDeployment_t > > _dataState) {
            if (_callback)
                _callback(_internalCallStatus, _deploy_error.getValue(), _dataNum.getValue(), _name.getValue(), _dataState.getValue());
        },
        std::make_tuple(deploy_error, deploy_dataNum, deploy_name, deploy_dataState));
}

void MngdConnSvcSomeIPProxy::GetDataIpv4Info(std::string _name, CommonAPI::CallStatus &_internalCallStatus, ::v0::com::qualcomm::qti::modem::CommonTypes::Result &_error, std::string &_ifName, MngdConnSvc::DataIpInfo &_ipv4Info, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t> deploy_error(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment);
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_name(_name, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_ifName(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::Deployable< MngdConnSvc::DataIpInfo, ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataIpInfoDeployment_t> deploy_ipv4Info(static_cast< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataIpInfoDeployment_t* >(nullptr));
    CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v0::com::qualcomm::qti::modem::CommonTypes::Result,
                ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t
            >,
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >,
            CommonAPI::Deployable<
                MngdConnSvc::DataIpInfo,
                ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataIpInfoDeployment_t
            >
        >
    >::callMethodWithReply(
        *this,
        CommonAPI::SomeIP::method_id_t(0x1304),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_name,
        _internalCallStatus,
        deploy_error,
        deploy_ifName, deploy_ipv4Info);
    _error = deploy_error.getValue();
    _ifName = deploy_ifName.getValue();
    _ipv4Info = deploy_ipv4Info.getValue();
}

std::future<CommonAPI::CallStatus> MngdConnSvcSomeIPProxy::GetDataIpv4InfoAsync(const std::string &_name, GetDataIpv4InfoAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t> deploy_error(&::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment);
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_name(_name, static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment> deploy_ifName(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr));
    CommonAPI::Deployable< MngdConnSvc::DataIpInfo, ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataIpInfoDeployment_t> deploy_ipv4Info(static_cast< ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataIpInfoDeployment_t* >(nullptr));
    return CommonAPI::SomeIP::ProxyHelper<
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >
        >,
        CommonAPI::SomeIP::SerializableArguments<
            CommonAPI::Deployable<
                ::v0::com::qualcomm::qti::modem::CommonTypes::Result,
                ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t
            >,
            CommonAPI::Deployable<
                std::string,
                CommonAPI::SomeIP::StringDeployment
            >,
            CommonAPI::Deployable<
                MngdConnSvc::DataIpInfo,
                ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataIpInfoDeployment_t
            >
        >
    >::callMethodAsync(
        *this,
        CommonAPI::SomeIP::method_id_t(0x1304),
        false,
        false,
        (_info ? _info : &CommonAPI::SomeIP::defaultCallInfo),
        deploy_name,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable< ::v0::com::qualcomm::qti::modem::CommonTypes::Result, ::v0::com::qualcomm::qti::modem::CommonTypes_::ResultDeployment_t > _deploy_error, CommonAPI::Deployable< std::string, CommonAPI::SomeIP::StringDeployment > _ifName, CommonAPI::Deployable< MngdConnSvc::DataIpInfo, ::v0::com::qualcomm::qti::modem::MngdConnSvc_::DataIpInfoDeployment_t > _ipv4Info) {
            if (_callback)
                _callback(_internalCallStatus, _deploy_error.getValue(), _ifName.getValue(), _ipv4Info.getValue());
        },
        std::make_tuple(deploy_error, deploy_ifName, deploy_ipv4Info));
}

void MngdConnSvcSomeIPProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 0;
    ownVersionMinor = 1;
}

std::future<void> MngdConnSvcSomeIPProxy::getCompletionFuture() {
    return completed_.get_future();
}

} // namespace modem
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0